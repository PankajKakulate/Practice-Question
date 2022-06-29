/////////////////////////////////////////////////////////////////
// Function name : StrCatX()
// Description   : Write a program which accept 2 strings from user and concat second string after fisrt string.
// Input         : char *, char*
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void StrCatX(char *src,char *dest){
   
  while (*src!='\0' )
  {
    src++;
  }
  *src=' ';
  src++;  
  while (*dest!='\0')
  {
    *src=*dest;
    src++;
    dest++;
  }
  
   *dest='\0'; 
  
  
}
int main(){
    char arr[100]="Marvellous Infosystems";
    char brr[100]="Logic Building";
    
    
    StrCatX(arr,brr);
    
    printf("Copied String is: %s\n",arr);
    return 0;
    }

/*
input           : Marvellous Infosystems
                 Logic Building
output          : Marvellous Infosystems Logic Building  
Time Complexity : O(N)
*/