////////////////////////////////////////////////////////////////////
// Function Name : FileSize
// Description   :write application which accept file name from user and display size of the file.
// input         :char []
// output        :int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define FILESIZE 1024
int FileSize(char Fanme[]){
    int fd=0;
    int iRet=0;
    char buffer[FILESIZE];
    int iSize=0;
    fd=open(Fanme,O_RDONLY);
    if(fd==-1){
        printf("Unble to open file \n");
        return ;
    }
    printf("File opened successfully\n");
   
    while((iRet=read(fd,buffer,FILESIZE))!=0){
        iSize=iSize+iRet;
    }
    close(fd);
    return iSize;
}
int main(){
    char Fname[30];
    int iRet=0;
    printf("Enter file name\n");
    scanf("%s",Fname);

    iRet= FileSize(Fname);
    printf("File size is :%d\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : Demo.txt
// Output          : File Size is :21
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////