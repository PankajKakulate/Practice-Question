/////////////////////////////////////////////////////////////////
// Function name : strtoggleX()
// Description   : Write a program which accept string from user and toggle the case.
// Input         : char *
// Output        : Void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void strtoggleX(char *str){
   int iCnt=0; 
   while (*str !='\0')
   {
    if(str[iCnt]>=65 && str[iCnt]<=90){
        printf("%c",tolower(str[iCnt]));

    }else{
        printf("%c",toupper(str[iCnt]));
    }    
    str++;
   }
   
   printf("\n");
   
 
}
int main(){
    char cValue[20];
    

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    strtoggleX(cValue);
   

    return 0;
    }

/*
input           : MarvellouS
output          : mARVELLOUs



Time Complexity : O(N)
*/