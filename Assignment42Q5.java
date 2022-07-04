////////////////////////////////////////////////////////////////////
// Function Name : ListFilesFromDir
// Description   : write java program to accept directory name from user and display all names of files from that directory.
// input         : Nothing
// output        : void
// Date          : 01/07/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
import java.lang.*;
import java.util.Scanner;
import java.util.Set;
import java.io.*;
import java.io.File.*;
import java.util.stream.*;

class ListFilesFromDir{
 
    public void ListFilesFromDirX(){

        try {
            Scanner sInput=new Scanner(System.in);
            System.out.println("Enter the Directory Name to list file name:");
            String DirectoryName=sInput.nextLine();
            File file=new File(DirectoryName);
            if(file.isDirectory()){
                System.out.println("Files are:");
                for(File f:file.listFiles())
                {
                    if(f.isDirectory()){
                        System.out.println("Directory Name: "+f.getName());
                    }else
                    System.out.println("File Name: "+f.getName());
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


public class Assignment42Q5{
    public static void main(String args[]) {
       
        ListFilesFromDir lffdObj=new ListFilesFromDir();
        lffdObj.ListFilesFromDirX();
    }
}
////////////////////////////////////////////////////////////////////
// Input           : D:\Marvellous_Infosystem\Classes\LB\Programs\ClassPrograms
// Output          : Files are:
//                   File Name: Bitwise.jpeg
//                   File Name: Complete DS.png
//                   File Name: Doubly LL Empty.png
//                   File Name: Doubly LL more than one node.png
//                   File Name: Doubly LL Single node.png
//                   Directory Name: Marvellous LB Applications
//    
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////




















/*
 * 
 
    public Set<String> listFilesUsingDirectoryStream(String dir) throws IOException {
        Set<String> fileList = new HashSet<>();
        try (DirectoryStream<Path> stream = Files.newDirectoryStream(Paths.get(dir))) {
            for (Path path : stream) {
                if (!Files.isDirectory(path)) {
                    fileList.add(path.getFileName()
                        .toString());
                }
            }
        }
        return fileList;
    }


  File file=new File(DirectoryName);
            if(file.isDirectory()){
                System.out.println("Files are:");
                for(File f:file.list())
                {
                    System.out.println(f.getName());
                }
            }else{
                file.createNewFile();
                System.out.println("Directory is not Exits.");
            }

   public Set<String> listFilesUsingJavaIO(String dir) {
        return Stream.of(new File(dir).listFiles())
          .filter(file -> !file.isDirectory())
          .map(File::getName)
          .collect(Collectors.toSet());
    }

 */