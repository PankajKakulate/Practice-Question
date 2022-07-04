////////////////////////////////////////////////////////////////////
// Function Name : CheckSumCalculate
// Description   : write java program to accept file name from user and calculate checksum of that file and display on screen.
// input         : String
// output        : void
// Date          : 2/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.util.Set;
import java.io.*;
import java.io.File.*;
import java.util.stream.*;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

class CheckSumCalculateProgram{
 
    public void CheckSumCalculate(String srcFile) throws IOException, NoSuchAlgorithmException{
        // create a file object referencing any file from
        // the system of which checksum is to be generated
        File file = new File(srcFile);
 
        // instantiate a MessageDigest Object by passing
        // string "MD5" this means that this object will use
        // MD5 hashing algorithm to generate the checksum
        MessageDigest mdigest = MessageDigest.getInstance("MD5");
 
        // Get the checksum
        String checksum = checksum(mdigest, file);
 
        // print out the checksum
        System.out.println(checksum);
    }
    private static String checksum(MessageDigest digest,File file)throws IOException
    {
        // Get file input stream for reading the file
        // content
        FileInputStream fis = new FileInputStream(file);
 
        // Create byte array to read data in chunks
        byte[] byteArray = new byte[1024];
        int bytesCount = 0;
 
        // read the data from file and update that data in
        // the message digest
        while ((bytesCount = fis.read(byteArray)) != -1)
        {
            digest.update(byteArray, 0, bytesCount);
        };
 
        // close the input stream
        fis.close();
 
        // store the bytes returned by the digest() method
        byte[] bytes = digest.digest();
 
        // this array of bytes has bytes in decimal format
        // so we need to convert it into hexadecimal format
 
        // for this we create an object of StringBuilder
        // since it allows us to update the string i.e. its
        // mutable
        StringBuilder sb = new StringBuilder();
       
        // loop through the bytes array
        for (int i = 0; i < bytes.length; i++) {
           
            // the following line converts the decimal into
            // hexadecimal format and appends that to the
            // StringBuilder object
            sb.append(Integer.toString((bytes[i] & 0xff) + 0x100, 16).substring(1));
        }
 
        // finally we return the complete hash
        return sb.toString();
    }
}


public class Assignment43Q4{
    public static void main(String args[])  throws IOException, NoSuchAlgorithmException {
        CheckSumCalculateProgram CDPObj=new CheckSumCalculateProgram();
        Scanner sInput=new Scanner(System.in);
        System.out.println("Enter the file name:");
        String FileName=sInput.nextLine();
        boolean isRegular=false;
        
         CDPObj.CheckSumCalculate(FileName);
        
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the file name:
//                   Assignment42Q1.java
//                   Testing
//                                     
// Output          : 6e5406134cdb8e13df689afa9320895e
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////