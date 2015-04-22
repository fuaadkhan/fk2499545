package edu.rcc.hand;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

import edu.rcc.deck.Card;

public class Hand implements Comparable<Object> {
	
	//Card[] theCards = new Card[10];
	private ArrayList<Card> theCards = new ArrayList<Card>();
	
	public Hand(ArrayList<Card> theCards) {
		this.theCards = theCards;
	}
	
	public String toString() {
		String s = "";
		for (Card c : theCards) {
			s += c.toString() + ", ";
		}
		return s;
	}
	
	private ArrayList<Card> getHandInNumericalOrder() {
		ArrayList<Card> sorted = new ArrayList<Card>();
		sorted.addAll(this.theCards);
		Collections.sort(sorted, new Comparator<Card>() {

			@Override
			public int compare(Card o1, Card o2) {
				Integer o1Value = o1.getNumericalValue();
				Integer o2Value = o2.getNumericalValue();
				return o1Value.compareTo(o2Value);	
			}	
		});
		return sorted;
	}

	/**
	 * a method to get cards that have the same value
	 */
	private boolean isPair(ArrayList<Card> sortedCards) {
		Card previousCard = null;
		for (Card c : sortedCards) {
			/*
			if (previousCard == null) {
				previousCard = c;
			} else {
				if (previousCard.isSameFace(c)) {
					return true;
				} else {
					previousCard = c;
				}
			}
			*/
			if (previousCard != null && previousCard.isSameFace(c)) {
				return true;
			} else {
				previousCard = c;
			}	
		}
		return false;
	}
	
	
	/**
	 * if the sum of the integer array is equal to the following:
	 * 1 - 
	 * @return
	 */
	private ArrayList<Integer> numberOfSameCards() {
		ArrayList<Card> sortedCards = this.getHandInNumericalOrder();
		
		ArrayList<Integer> cardCounts = new ArrayList<Integer>();
		int numbSame = 1;
		for (int i = 0; i < sortedCards.size() - 1; ++i ) {
			if (sortedCards.get(i).isSameFace(sortedCards.get(i+1))) {
				++numbSame;
			} else {
				for (int j = 0; j < numbSame; ++j) {
					cardCounts.add(numbSame);
				}
				numbSame = 1;
			}
		}
		for (int i = 0; i < numbSame; ++i) {
			cardCounts.add(numbSame);
		}
		return cardCounts;
	}
	
	/**
	 * 5 - high card || strait || strait flush || flush
	 * 7 - pair
	 * 9 - 2 pair
	 * 11 - 3 of a kind
	 * 13 - full house
	 * 17 - four of a kind
	 * @param inputArray
	 * @return
	 */
	private int getSum(ArrayList<Integer> inputArray) {
		int sum = 0;
		for (int i : inputArray) {
			sum += i;
		}
		return sum;
	}
	
	/**
	 * 0 - high card
	 * 1 - pair
	 * 2 - 2 pair
	 * 3 - three of a kind
	 * 4 - strait
	 * 5 - flush
	 * 6 - full house
	 * 7 - four of a kind
	 * 8 - strait flush
	 * @return
	 */
	private int getRank() {
		ArrayList<Card> sorted = this.getHandInNumericalOrder();
		int rawSum = getSum(numberOfSameCards());
		switch (rawSum) {
			case 7:
				return 1;
			case 9:
				return 2;
			case 11:
				return 3;
			case 13:
				return 6;
			case 17:
				return 7;
			default:
				//TODO CHECK FOR ALL OTHER HAND TYPES
		}
		boolean isFlush = isFlush(sorted);
		boolean isStrait = isStrait(sorted);
		if (isFlush && isStrait) {
			return 8;
		} else if (isFlush) {
			return 5;
		} else if (isStrait) {
			return 4;
		} else {
			return 0;
		}
	}
	
	private boolean isFlush(ArrayList<Card> theCards) {
		
		for (int i = 0; i < theCards.size() - 1; i++) {
			if (!theCards.get(i).isSameSuit(theCards.get(i + 1))) {
				return false;
			}
		}
		return true;	
	}
	
	/**
	 * 
	 * @param sortedCards - all have unique faces
	 * @return
	 */
	private boolean isStrait(ArrayList<Card> sortedCards) {
		
		for (int i = 0; i < theCards.size() - 1; i++) {
			int current = theCards.get(i).getNumericalValue();
			int next = theCards.get(i + 1).getNumericalValue();
			
			if (current + 1 == next || 
					(current == 5 && next == 14)) {
				continue;
			} else {
				return false;
			}
			
		}
		return true;
		
	}

	/**
	 * 0 -> equal
	 * 1 -> this > o
	 * -1 -> this < o
	 */
	@Override
	public int compareTo(Object o) {
		if (!(o instanceof Hand)) {
			return 1;
		}
		Hand other = (Hand)o;
		
		boolean isThisPair = this.isPair(this.getHandInNumericalOrder());
		
		ArrayList<Card> otherNumerical = other.getHandInNumericalOrder();
		ArrayList<Card> thisNumerical = this.getHandInNumericalOrder();
		
		
		//call the card hierarchy class
                if (this.getRank() == other.getRank()) {
                    
                    return compareHighCards(other);
                } else if (this.getRank() > other.getRank()) {
                    return 1;
                }
                else return -1;
		// TODO Auto-generated method stub
		//return 0;
	}
	
        /**
         * Sort the cards in hand and return the highest card
         *    
         * @return 
         */
        
	private Card getHighCard() {
            	ArrayList<Card> sortedCards = this.getHandInNumericalOrder();
                
        return sortedCards.get(0);
        }
        
        /**
         * Used when every card is unique
         * look at each card until one is higher
         * return 0 if all cards are equal
         * ignores suit
         * @return 
         */
        private int compareHighCards(Hand other) {
            ArrayList<Card> thisHandSorted = this.getHandInNumericalOrder();
            ArrayList<Card> otherHandSorted = other.getHandInNumericalOrder();
            
            int i=0;
            while (thisHandSorted.get(i).getNumericalValue() ==
                    otherHandSorted.get(i).getNumericalValue() &&
                    i < thisHandSorted.size()) {
                ++i;
            }
            if (thisHandSorted.get(i).getNumericalValue() >
                    otherHandSorted.get(i).getNumericalValue()) {
                return 1;
            } else if (thisHandSorted.get(i).getNumericalValue() <
                    otherHandSorted.get(i).getNumericalValue()) {
                return -1;
            }
            else {
                return 0;
            }
        }
        
        private int compareEqualHands(Hand other) {
            // find out what kind of ahnd both players have
            switch(this.getRank()) {
                /*
                 * high card
                 * strait
                 * flush
                 * strait flush
                 */
                case 0:
                    return compareHighCards(other);
                case 4:
                case 5:
                case 8:
                    if (this.getHighCard().getNumericalValue() >
                            other.getHighCard().getNumericalValue()) {
                        return 1;
                        
                    } else {
                          return -1;
                    }
                /**
                 * one pair
                 * two pair
                 * three of a kind
                 * four of a kind
                 */
                case 1:
                case 2:
                case 3:
                case 6:
                case 7:
                    // find the same cards in each hand
                    ArrayList<Integer> thisHand = this.indexOfSameCards();
                    ArrayList<Integer> otherHand = other.indexOfSameCards();
                    // sort each hand in order to get the card value
                    ArrayList<Card> thisHandSorted = this.getHandInNumericalOrder();
                    ArrayList<Card> otherHandSorted = other.getHandInNumericalOrder();
                    for (int i = 0; i != thisHand.size(); ++i) {
                        if (thisHandSorted.get(thisHand.get(i)).getNumericalValue() >
                                 otherHandSorted.get(otherHand.get(i)).getNumericalValue()) {
                            return 1;
                        }
                        else {
                            return -1;
                        }
                    }
                return 0;
            }
            
            
            // hands were exactly the same
            // rare
            return 0;
        }
        
        private ArrayList<Integer> indexOfSameCards() {
            ArrayList<Integer> indexArray= new ArrayList<Integer>();
            ArrayList<Card> sortedCards = this.getHandInNumericalOrder();
            
            Card currentCard = sortedCards.get(0);
            int sameCardCount = 1;
            for (int i = 1; i != sortedCards.size()-1; ++i) {
                if (currentCard!=sortedCards.get(i) && sameCardCount != 1) {
                    indexArray.add(i-1);
                    // reset the card counter
                    sameCardCount=1;
                    // change the card where looking at
                    currentCard = sortedCards.get(i);
                }
                else {
                    ++sameCardCount;
                }
            }
                    
            return indexArray;
        }
}