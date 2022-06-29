/////////////////////////////////////////////////////////////////
// Function name : DisplayDigit()
// Description   : Write a program which accept string from user and display only digits from that string.
// Input         : char *
// Output        : Void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void DisplayDigit(char *str){
   int iCnt=0; 
   while (*str !='\0')
   {
    if(str[iCnt]>=48 && str[iCnt]<=57){
        printf("%c",str[iCnt]);

    }  
    str++;
   }
   
   printf("\n");
   
 
}
int main(){
    char cValue[20];
    

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    DisplayDigit(cValue);
   

    return 0;
    }

/*
input           : Marve89llouS121
output          : 89121



Time Complexity : O(N)
*/