/////////////////////////////////////////////////////////////////
// Function name : StrRexX()
// Description   : Write a program which accept string from user and reverse that string in place.
// Input         : char * 
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void StrRexX(char *str){
   int iCnt=0;
   for(iCnt=strlen(str);iCnt>=0;iCnt--){
        printf("%c",str[iCnt]);
   } 
   printf("\n");
}
int main(){
    char arr[100];
    printf("Enter the String: \n");
    scanf(" %[^'\n']s",arr);
    
     StrRexX(arr);
    

    return 0;
    }

/*
input           : abcd 
                 
output          : dcba
Time Complexity : O(N)
*/