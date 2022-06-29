/////////////////////////////////////////////////////////////////
// Function name : StrNCpyX()
// Description   : Write a program which accept string from user and copy the contents of that string into another string upto the given lenth. (Implement strcpy() function)
// Input         : char *, char*
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void StrNCpyX(char *src,char *dest,int iCnt){
   
  while (*src!='\0' && (iCnt!=0))
  {
    *dest=*src;
    src++;
    dest++;
    iCnt--;
  }
   *dest='\0'; 
  
  
}
int main(){
    char arr[100];
    char brr[100];
    printf("Enter the String: \n");
    scanf(" %[^'\n']s",arr);
    
     StrNCpyX(arr,brr,10);
    
    printf("Copied String is: %s\n",brr);
    return 0;
    }

/*
input           : Marvellous Multi os
                 
output          : Marvellous
Time Complexity : O(N)
*/