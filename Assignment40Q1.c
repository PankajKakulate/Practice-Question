////////////////////////////////////////////////////////////////////
// Function Name : openFile
// Description   :write application which accept file name from user and open that file in read mode.
// input         :char []
// output        :void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
void openFile(char Fanme[]){
    int fd=0;
    fd=open(Fanme,O_RDONLY);
    if(fd==-1){
        printf("Unble to open file \n");
        return ;
    }
    printf("file opened successfully\n");
    close(fd);
}
int main(){
    char Fname[30];

    printf("Enter file name\n");
    scanf(" %s",Fname);

    openFile(Fname);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : Assingment40Q1.c
// Output          : File opened successfully
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////