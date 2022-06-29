////////////////////////////////////////////////////////////////////
// Function Name : displayFile
// Description   :write application which accept file name from user and read all data from that file and display contents on screen.
// input         :char []
// output        :void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define FILESIZE 1024
void displayFile(char Fanme[]){
    int fd=0;
    int iRet=0;
    char buffer[FILESIZE];
    fd=open(Fanme,O_RDONLY);
    if(fd==-1){
        printf("Unble to open file \n");
        return ;
    }
    while((iRet=read(fd,buffer,FILESIZE))!=0){
        write(1,buffer,iRet);
    }
    close(fd);
}
int main(){
    char Fname[30];

    printf("Enter file name\n");
    scanf("%s",Fname);

    displayFile(Fname);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : Demo.txt
// Output          : Content in the File are :
//                   Pankaj Keda kakulate
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////