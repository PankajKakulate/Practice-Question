/////////////////////////////////////////////////////////////////
// Function name : StrCpySmall()
// Description   : Write a program which accept string from user and copy Small Character of that string into another string. 
// Input         : char *, char*
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void StrCpySmall(char *src,char *dest){
   
  while (*src!='\0' )
  {
    if((*src>='a' && *src<='z')||*src==' '){
        *dest=*src;
        dest++;
    }
    src++;
  }
   *dest='\0'; 
  
  
}
int main(){
    char arr[100];
    char brr[100];
    printf("Enter the String: \n");
    scanf(" %[^'\n']s",arr);
    
     StrCpySmall(arr,brr);
    
    printf("Copied String is: %s\n",brr);
    return 0;
    }

/*
input           : Marvellous Multi OS 
                 
output          : arvellous ulti  
Time Complexity : O(N)
*/