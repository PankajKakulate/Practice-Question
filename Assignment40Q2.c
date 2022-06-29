////////////////////////////////////////////////////////////////////
// Function Name : createFile
// Description   :write application which accept file name from user and create that file .
// input         :char []
// output        :void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
void createFile(char Fanme[]){
    int fd=0;
    fd=creat(Fanme,0777);
    if(fd==-1){
        printf("Unble to create file \n");
        return ;
    }
    printf("File created successfully\n");
    close(fd);
}
int main(){
    char Fname[30];

    printf("Enter file name\n");
    scanf("%s",Fname);

    createFile(Fname);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : Demo.txt
// Output          : File created successfully
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////