////////////////////////////////////////////////////////////////////
// Function Name : main
// Description   : write java program to accept file name from user and open that file.
// input         : String []
// output        : void
// Date          : 1/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.io.*;

public class Assignment42Q1{
    public static void main(String args[]) {
        try {
            Scanner sInput=new Scanner(System.in);
            System.out.println("Enter the file Name to open:");
            String fileName=sInput.nextLine();
            File file=new File(fileName);
            if(file.isFile())
            System.out.println("File opened Succeessfully");
            else
            System.err.println("Error: No such file.");
                      
        } catch (Exception e) {
            System.err.println("Error: No such file.");
        }

        
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the file Name to open:
//                   Demo.txt
// Output          : File opened Succeessfully  
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////