////////////////////////////////////////////////////////////////////
// Function Name : CountChar
// Description   : write application which accept file name from user and count number of occurences of that character from that file.
// input         : char [],char
// output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define FILESIZE 1024
int CountChar(char Fanme[],char ch){
    int fd=0;
    int iRet=0;
    char buffer[FILESIZE];
    int iCount=0,i=0;
    fd=open(Fanme,O_RDWR);
    if(fd==-1){
        printf("Unble to open file \n");
        return -1;
    }
    
    while ((iRet=read(fd,buffer,FILESIZE))!=0)
    {
       
        for (i = 0; i < iRet; i++)
        {
          if(buffer[i]==ch) {
            iCount++;
          }
        }
    }
    
    
    close(fd);
    return iCount;
}
int main(){
    char Fname[30];
    int iRet=0;
    char cValue;
    
    printf("Enter file name\n");
    scanf("%s",Fname);

    printf("Enter the Character\n");
    scanf(" %c",&cValue);

     iRet=CountChar(Fname,cValue);
     printf("Frequency of %c is %d\n",cValue,iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : K
// Output          : Frequency of K is 2 
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////