////////////////////////////////////////////////////////////////////
// Function Name : writeFile
// Description   :write application which accept file name from user and one string from user. write that string at the end of file.
// input         :char [],char []
// output        :Void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void writeFile(char Fanme[],char Data[]){
    int fd=0;
    int iRet=0;
    
    fd=open(Fanme,O_RDWR|O_APPEND);
    if(fd==-1){
        printf("Unble to open file \n");
        return ;
    }
    
    iRet=write(fd,' ',1);
    iRet=write(fd,Data,strlen(Data));
    printf("%d bytes gets successfuly written in  the file\n",iRet);
    close(fd);
    
}
int main(){
    char Fname[30],Data[1024];
    
    printf("Enter file name\n");
    scanf("%s",Fname);

    printf("Enter  the data that you want to write: \n");
    scanf(" %[^'\n']s",Data);

     writeFile(Fname,Data);
    
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : Demo.txt
// Output          : Enter file name
//                   Enter  the data that you want to write: 
//                   Software Developer
//                   18 bytes gets successfuly written in  the file

// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////