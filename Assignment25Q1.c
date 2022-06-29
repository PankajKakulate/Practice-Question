/////////////////////////////////////////////////////////////////
// Function name : strlwrX()
// Description   : Write a program which accept string from user and display it in Lower Case.
// Input         : char *
// Output        : Void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void strlwrX(char *str){
   int iCnt=0; 
   while (*str !='\0')
   {
    printf("%c",tolower(str[iCnt]));
    str++;
   }
   
   printf("\n");
   
 
}
int main(){
    char cValue[20];
    

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    strlwrX(cValue);
   

    return 0;
    }

/*
input           : MarvellouS
output          : marvellous



Time Complexity : O(N)
*/