/////////////////////////////////////////////////////////////////
// Function name : StrCpyX()
// Description   : Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
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
   
  while (*src!='\0')
  {
    *dest=*src;
    src++;
    dest++;
  }
   *dest='\0'; 
  
  
}
int main(){
    char arr[100];
    char brr[100];
    printf("Enter the String: \n");
    scanf(" %[^'\n']s",arr);
    
     StrCpyX(arr,brr);
    
    printf("Copied String is: %s\n",brr);
    return 0;
    }

/*
input           : abcd 
                 
output          : abcd
Time Complexity : O(N)
*/