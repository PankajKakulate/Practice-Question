////////////////////////////////////////////////////////////////////
// Function Name : DisplayN
// Description   : write application which accept file name from user and one count from user and read that number of characters from starting position.
// input         : char [],int
// output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define FILESIZE 1024
void DisplayN(char Fanme[],int iSize){
    int fd=0;
    int iRet=0;
    char buffer[FILESIZE];
    int iCount=0,i=0;
    fd=open(Fanme,O_RDWR);
    if(fd==-1){
        printf("Unble to open file \n");
        return ;
    }
    
    lseek(fd,0,0);
    read(fd,buffer,iSize);
    write(1,buffer,iSize);
    
    close(fd);
    
}
int main(){
    char Fname[30];
    int iRet=0;
    int iValue;
    
    printf("Enter file name\n");
    scanf("%s",Fname);

    printf("Enter the number of Character\n");
    scanf(" %d",&iValue);

     DisplayN(Fname,iValue);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 12
// Output          : Pankaj Kedar  
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////