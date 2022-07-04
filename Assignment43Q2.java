////////////////////////////////////////////////////////////////////
// Function Name : FileType
// Description   : write java program to accept  file name from user and check whether that file is regular file or not.
// input         : String
// output        : boolean
// Date          : 2/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.util.Set;
import java.io.*;
import java.io.File.*;
import java.util.stream.*;

class FileTypeProgram{
 
    public boolean FileType(String srcFile){
        boolean isRegular=false;
        try {
            
            File file=new File(srcFile);
            if(file.exists()){
                if(file.isFile()){
                isRegular= true;
                } else{
                    isRegular= false;
                }
            }else{
                System.out.println("Their no such file exist");
            }
        }
        catch (Exception e) {
            System.out.println("An error has occurred.");
            e.printStackTrace();
        }
        
        return isRegular;
    }
}


public class Assignment43Q2{
    public static void main(String args[]) {
        FileTypeProgram FTPObj=new FileTypeProgram();
        Scanner sInput=new Scanner(System.in);
        System.out.println("Enter the file name:");
        String FileName=sInput.nextLine();
        boolean isRegular=false;
        
        isRegular= FTPObj.FileType(FileName);
        if(isRegular){
            System.out.println("It Regular File");
        } else{
            System.out.println("It not Regular File");
        }
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the file name:
//                   Assignment42Q1.java
//                  
// Output          : It Regular File
//    
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////