/////////////////////////////////////////////////////////////////
// Function name : StrCpyRev()
// Description   : Write a program which accept  string from user and copy that characterof that string into another string in reverse order. 
// Input         : char *, char*
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void StrCpyRev(char *src,char *dest){
   int iCnt=0;
   while(*src!='\0'){
    src++;
    iCnt++;
   }
   while(iCnt!=0)
   {
     src--;
    *dest=*src;
    
    iCnt--;
    dest++;
   } 
   *dest='\0';
}
int main(){
    char arr[100]="Marvellous Infosystems";
    char brr[100];
    
    
    StrCpyRev(arr,brr);
    
    printf("Copied String is: %s\n",brr);
    return 0;
    }

/*
input           : Marvellous Infosystems
                 
output          : smetsysofnI suollevraM
Time Complexity : O(N)
*/