////////////////////////////////////////////////////////////////////
// Function Name : ListRegularFiles
// Description   : write java program to accept directory name from user and display all names of files from that directory which are regular file.
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

class ListRegularFiles{
 
    public void ListRegularFilesX(String DirectoryName ){

        try {
            
            File file=new File(DirectoryName);
            if(file.isDirectory()){
                System.out.println("Files are:");
                for(File f:file.listFiles())
                {
                    if(f.isFile()){
                        System.out.println("File Name: "+f.getName());
                    }
                    
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


public class Assignment44Q1{
    public static void main(String args[]) {
       
        ListRegularFiles lffdObj=new ListRegularFiles();
            Scanner sInput=new Scanner(System.in);
            System.out.println("Enter the Directory Name to list regular file names:");
            String DirectoryName=sInput.nextLine();
        lffdObj.ListRegularFilesX(DirectoryName);
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the Directory Name to list regular file names:
//                   D:\Marvellous_Infosystem\Classes\LB\Assignments
// Output          : Files are:
//                   File Name: Assignment42Q1.java          
//                   File Name: Assignment42Q2.java          
//    
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////