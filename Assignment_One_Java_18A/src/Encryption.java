/*
 * Author: Fuaad Khan
 * Assignment 1 : Encoding/Decoding
 * 3/7/2015
 */
import java.util.Scanner;

public class Encryption {

	public static void main(String[] args) {
		Scanner select = new Scanner(System.in);
        Scanner input = new Scanner(System.in);
        
        //Menu options
        System.out.println("To Encode a Message press 1");
        System.out.println("To Decode a Message press 2");
        int choice = select.nextInt();
        
        if(choice == 1){
        System.out.println("*********** ENCODING MACHINE ***********");	
        System.out.print("Enter the message you wish to encode: ");
        // Input string to encode
        String messageEnc= input.nextLine();
        
        //Day of the Month
        System.out.print("Enter the day of the month: ");
        int cipherShift = input.nextInt();
        
        input.close();
        
        // Method to Encrypt message
        cipherShift %= 15;
        
        String encoded= "";
        
        // Looping through each character and shifting
        for (int i = 0; i!= messageEnc.length(); i++) {
           int currentChar = messageEnc.charAt(i);
           for(int j = 0; j != cipherShift; j++) {
        	   --currentChar;
              if (currentChar < 65)
                 currentChar = 90;
          }
          encoded += (char)currentChar;
        }
        System.out.println("Your new encoded message is: " + encoded);
       }else{
    	   System.out.println("*********** DECODING MACHINE ***********");	
    	   System.out.println("Enter the message you wish to decode: ");
           // Input Encrypted code
           String messageDec= input.nextLine();
           
           //Day of the Month
           System.out.print("Enter the day of the month: ");
           int day = input.nextInt() % 15;
           
           // Method to reveal the code
           day %= 15;
           
           String decoded= "";
           
        // Looping through each character and shifting
           for (int i = 0; i!= messageDec.length(); i++) {
              int currentChar = messageDec.charAt(i);
              for(int j = 0; j != day; j++) {
                 if (++currentChar > 90)
                    currentChar = 65;
              }
              decoded += (char)currentChar;
           }
           System.out.println("The decoded message is: " + decoded);
       }

	}

}
