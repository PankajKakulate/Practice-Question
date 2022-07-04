////////////////////////////////////////////////////////////////////
// Function Name : ListFilesFromDirWithSizes
// Description   : write java program to accept directory name from user and display all names of files from that directory and size of each file on screen.
// input         : String
// output        : void
// Date          : 02/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.util.Set;
import java.io.*;
import java.io.File.*;
import java.util.stream.*;
import java.nio.file.*;

class ListFilesFromDirWithSizes{
 
    public void ListFilesFromDirWithSizesX(String DirectoryName ){

        try {
            
            File file=new File(DirectoryName);
            if(file.isDirectory()){
                System.out.println("Files are:");
                for(File f:file.listFiles())
                {
                    if(f.isDirectory()){
                        System.out.println("Directory Name: "+f.getName()+"\t\tFile Size: "+f.length()+" Bytes");
                    }else
                    System.out.println("File Name: "+f.getName()+"\t\tFile Size: "+f.length()+" Bytes");
                }
            }else{
                
                System.out.println("Directory is not Exits.");
            }
        }
        catch (Exception e) {
            System.out.println("An error has occurred.");
            e.printStackTrace();
        }
        

    }
}


public class Assignment43Q5{
    public static void main(String args[]) {
       
        ListFilesFromDirWithSizes lffdObj=new ListFilesFromDirWithSizes();
            Scanner sInput=new Scanner(System.in);
            System.out.println("Enter the Directory Name to list file name:");
            String DirectoryName=sInput.nextLine();
        lffdObj.ListFilesFromDirWithSizesX(DirectoryName);
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the Directory Name to list file name:
//                   D:\Marvellous_Infosystem\Classes\LB\Assignments
// Output          : Files are:
//                   File Name: Assignment42Q1.java          File Size: 1323 Bytes
//                   File Name: Assignment42Q2.java          File Size: 1926 Bytes
//                   Directory Name: Testing2                File Size: 0 Bytes
//    
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////