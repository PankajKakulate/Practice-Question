////////////////////////////////////////////////////////////////////
// Function Name : CountCapital
// Description   : write application which accept file name from user and count number of capital characters from that file.
// input         : char []
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
int CountCapital(char Fanme[]){
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
          if(buffer[i]>='A' && buffer[i]<='Z') {
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
    
    printf("Enter file name\n");
    scanf("%s",Fname);

     iRet=CountCapital(Fname);
     printf("Total %d capital letter found in File\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : Demo.txt
// Output          : 4
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////