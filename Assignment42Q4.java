////////////////////////////////////////////////////////////////////
// Function Name : CreateFile
// Description   : write java program to accept file name from user and create new file of that name if i is not existing.
// input         : Nothing
// output        : void
// Date          : 1/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.io.*;

class CreateFile{

    public void CreateFileX(){

        try {
            Scanner sInput=new Scanner(System.in);
            System.out.println("Enter the file Name to Create:");
            String fileName=sInput.nextLine();

            File file=new File(fileName);
            if(file.exists()){
                System.out.println("File name already exist.");
            }else{
                file.createNewFile();
                System.out.println("File is Successfully Created.");
            }
        }
        catch (IOException e) {
            System.out.println("An error has occurred.");
            e.printStackTrace();
        }
        

    }
}


public class Assignment42Q4{
    public static void main(String args[]) {
       
        CreateFile cfObj=new CreateFile();
        cfObj.CreateFileX();
    }
}
////////////////////////////////////////////////////////////////////
// Input           : Enter the file Name to Create:
//                   Pankaj.txt
//                   
//                   
// Output          : File is Successfully Created.
//                   
//  
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////
