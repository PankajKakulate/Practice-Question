/////////////////////////////////////////////////////////////////
// Function name : StrCpyToggle()
// Description   : Write a program which accept  string from user and copy that character of that string into another string by toggling the case.
// Input         : char *, char*
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void StrCpyToggle(char *src,char *dest){
   
   while(*src!='\0'){
       if(*src>='A' && *src<='Z'){
        *dest=tolower(*src);
       }else{
            *dest=toupper(*src);
       }
        
        dest++;
        src++;
   }
   
   *dest='\0';
}
int main(){
    char arr[100];
    char brr[100];
    
    printf("Enter the String :\n");
    scanf(" %[^'\n']s",arr);
    StrCpyToggle(arr,brr);
    
    printf("Copied String is: %s\n",brr);
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :Marvellous Python 3 
                 
output          : mARVELLOUS pYTHON 3
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/