////////////////////////////////////////////////////////////////////
// Function Name : ReadFileX
// Description   : write java program to accept file name from user and open that file and display the contents on screen.
// input         : Nothing
// output        : void
// Date          : 1/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.io.*;

class ReadFile{

    public void ReadFileX(){
        try {
            Scanner sInput=new Scanner(System.in);
            System.out.println("Enter the file Name to open:");
            String fileName=sInput.nextLine();
            File file=new File(fileName);
            if(file.isFile()){
                System.out.println("File opened Succeessfully");
                Scanner sc =new Scanner(file);
                System.out.println("Data from file is as below:");
                while(sc.hasNextLine()){
                    System.out.println(sc.nextLine());
                }
                sc.close();
            }
            else
            System.err.println("Error: No such file.");

                        
        } catch (FileNotFoundException e) {
         System.err.println("Error: No such file.");
        }catch(Exception e){
            e.printStackTrace();
        }

    }
}


public class Assignment42Q2{
    public static void main(String args[]) {
       
        ReadFile rfObj=new ReadFile();
        rfObj.ReadFileX();
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the file Name to open:
//                   Demo.txt
// Output          : File opened Succeessfully
//                   Data from file is as below:
//                   Pankaj Keda Kakulate
//  
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////
