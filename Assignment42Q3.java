////////////////////////////////////////////////////////////////////
// Function Name : WriteFileX
// Description   : write java program to accept file name from user and open that file in write mode and write some data at the end of file.
// input         : Nothing
// output        : void
// Date          : 1/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.io.*;

class WriteFile{

    public void WriteFileX(){

        try {
            Scanner sInput=new Scanner(System.in);
            System.out.println("Enter the file Name to open:");
            String fileName=sInput.nextLine();

            FileWriter Writer=new FileWriter(fileName,true);
            System.out.println("Enter Data to Write:");
            String fileData=sInput.nextLine();
            
            Writer.append(fileData);
            Writer.close();
            System.out.println("Successfully written.");
        }
        catch (IOException e) {
            System.out.println("An error has occurred.");
            e.printStackTrace();
        }
        

    }
}


public class Assignment42Q3{
    public static void main(String args[]) {
       
        WriteFile wfObj=new WriteFile();
        wfObj.WriteFileX();
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the file Name to open:
//                   Demo.txt
//                   Enter Data to Write:
//                   He is a software developer.
// Output          : Successfully written.
//                   
//  
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////
