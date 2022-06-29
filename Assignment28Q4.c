/////////////////////////////////////////////////////////////////
// Function name : StrCpySamll()
// Description   : Write a program which accept  string from user and copy that character of that string into another string by converting all capital characters into small case.
// Input         : char *, char*
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void StrCpySamll(char *src,char *dest){
   
   while(*src!='\0'){
       
        *dest=tolower(*src);
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
    StrCpySamll(arr,brr);
    
    printf("Copied String is: %s\n",brr);
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :MARVELLOUS PYTHON 2 
                 
output          : marvellous python 2
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/