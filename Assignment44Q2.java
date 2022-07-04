////////////////////////////////////////////////////////////////////
// Function Name : CopyDataFromFile
// Description   : write java program to accept directory name from user and write names of all files from that directory into one newly created file names as "Marvellous.txt".
// input         : String,String
// output        : void
// Date          : 03/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.util.Set;
import java.util.StringTokenizer;
import java.io.*;
import java.io.File.*;
import java.util.stream.*;
import java.nio.file.*;

class CopyDataFromFile{
 
    public void CopyDataFromFileX(String DirectoryName,String dstFile )throws IOException{
        File file=new File(DirectoryName);
        File fileToWrite=new File(dstFile);
        FileWriter fWrite=new FileWriter(dstFile);
        BufferedWriter out = new BufferedWriter(fWrite);
        try {
            
            String line = "";   
            if(file.isDirectory()){
               // System.out.println("Files are:");
                for(File f:file.listFiles())
                {
                    if(f.isFile()){
                       // System.out.println("File Name: "+f.getName());
                       
                       out.write(f.getName()+" ;|");
                       out.newLine();
                       out.write("File Length: "+f.length()+" ;|"); 
                       out.newLine();
                                              

                    }
                    
                }
            }else{
                
                System.out.println("Directory is not Exits.");
            }
        }
        catch (Exception e) {
            System.out.println("An error has occurred.");
            e.printStackTrace();
        }finally{
            if(fWrite!=null){
                out.close();
            }
        
        }
       System.out.println("File Written Successfully!"); 

    }
}


public class Assignment44Q2{
    public static void main(String args[])throws IOException {
       
        CopyDataFromFile CDFFdObj=new CopyDataFromFile();
            Scanner sInput=new Scanner(System.in);
            System.out.println("Enter the Directory Path:");
            String DirectoryName=sInput.nextLine();
            System.out.println("Enter the File Name:");
            String FileName=sInput.nextLine();

            CDFFdObj.CopyDataFromFileX(DirectoryName,FileName);
    }
}
////////////////////////////////////////////////////////////////////
// Input           : D:\Marvellous_Infosystem\Classes\LB\Assignments
//                   Enter the File Name:
//                   Infosystem.txt
// Output          : File Written Successfully!          
//    
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////