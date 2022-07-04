////////////////////////////////////////////////////////////////////
// Function Name : CreateDir
// Description   : write java program to accept directory name from user and create that directory.
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

class CreateDirProgram{
 
    public void CreateDir(String srcFile){
        
        try {
            
            File file=new File(srcFile);
            if(file.exists()){
               System.out.println("Directory is aleady exist!!!");
            }else{
                file.mkdirs();
                System.out.println("Directory is created successfully.");
            }
        }
        catch (Exception e) {
            System.out.println("An error has occurred.");
            e.printStackTrace();
        }
        
       
    }
}


public class Assignment43Q3{
    public static void main(String args[]) {
        CreateDirProgram CDPObj=new CreateDirProgram();
        Scanner sInput=new Scanner(System.in);
        System.out.println("Enter the directory name that you want to create:");
        String FileName=sInput.nextLine();
        boolean isRegular=false;
        
         CDPObj.CreateDir(FileName);
        
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the directory name that you want to create:
//                   Testing
//                                     
// Output          : Directory is aleady exist!!!
//
// Input           : Enter the directory name that you want to create:
//                   Testing2
//                                     
// Output          : Directory is created successfully. 
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////