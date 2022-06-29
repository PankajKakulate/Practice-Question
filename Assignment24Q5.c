/////////////////////////////////////////////////////////////////
// Function name : Reverse()
// Description   : Write a program which accept string from user and display it in reverse order.
// Input         : char *
// Output        : Void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void Reverse(char *str){
   int iCnt=0; 
   for(iCnt=strlen(str);iCnt>=0;iCnt--){
    printf("%c",str[iCnt]);
   } 
   
   printf("\n");
   
 
}
int main(){
    char cValue[20];
    

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    Reverse(cValue);
   

    return 0;
    }

/*
input           : MarvellouS
output          : SuollevraM



Time Complexity : O(N)
*/