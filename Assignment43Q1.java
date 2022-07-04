////////////////////////////////////////////////////////////////////
// Function Name : CopyFile
// Description   : write java program to accept two file names from user and open first file and create new file (second name)and copy the data from first file into newly created file.
// input         : String, String
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

class CopyFileProgram{
 
    public void CopyFile(String srcFile,String dstFile){

        try {
            
            File fileFirst=new File(srcFile);
            File secondFile=new File(dstFile);
            if(fileFirst.isFile()){
                
                Scanner sc =new Scanner(fileFirst);
                secondFile.createNewFile();
                FileWriter fileWriter =new FileWriter(dstFile,true);

                while(sc.hasNextLine()){
                    fileWriter.write(sc.nextLine());    
                }
                fileWriter.close();
                sc.close();
                System.out.println("File copied Succeessfully");
            } else
            System.err.println("Error:"+srcFile +" No such file in this location.");
        }
        catch (Exception e) {
            System.out.println("An error has occurred.");
            e.printStackTrace();
        }
        

    }
}


public class Assignment43Q1{
    public static void main(String args[]) {
        CopyFileProgram CFPObj=new CopyFileProgram();
        Scanner sInput=new Scanner(System.in);
        System.out.println("Enter the First file name:");
        String FirstFileName=sInput.nextLine();
        System.out.println("Enter the Second file name:");
        String SecondFileName=sInput.nextLine();
        
        CFPObj.CopyFile(FirstFileName,SecondFileName);
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the First file name:
//                   Assignment42Q1.java
//                   Enter the Second file name:
//                   Copy2.txt
// Output          : File copied Succeessfully
//    
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////