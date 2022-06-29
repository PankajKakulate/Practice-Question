/////////////////////////////////////////////////////////////////
// Function name : StrCpyX()
// Description   : Write a program which accept  string from user and copy that character of that string into another string by removing all white spaces.
// Input         : char *, char*
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void StrCpyX(char *src,char *dest){
   int iCnt=0;
   while(*src!='\0'){
        if(*src!=' '){
        *dest=*src;
        dest++;
        }
        src++;
   }
   
   *dest='\0';
}
int main(){
    char arr[100]="Marvellous Infosystems";
    char brr[100];
    
    
    StrCpyX(arr,brr);
    
    printf("Copied String is: %s\n",brr);
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           : Marvellous Infosystems
                 
output          : MarvellousInfosystems
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/