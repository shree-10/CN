import java.io.*;
import java.lang.*;
import java.util.Scanner;

public class xor_symmetric {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string ");
        String Msg = sc.next();
        char key = '$';
        String CTxt = "";
        for (int i = 0; i < Msg.length(); i++) {
            CTxt += (char) (Msg.charAt(i) ^ key);
        }
        System.out.println("Encrypted String is " + CTxt);
        String DTxt = "";
        for (int i = 0; i < CTxt.length(); i++) {
            DTxt += (char) (CTxt.charAt(i) ^ key);
        }
        System.out.println("Decrypted String is : " + DTxt);
    }
}
