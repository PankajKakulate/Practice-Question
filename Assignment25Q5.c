/////////////////////////////////////////////////////////////////
// Function name : CountWhite()
// Description   : Write a program which accept string from user and count number of white spaces.
// Input         : char *
// Output        : Intger
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
int CountWhite(char *str){
   int iCnt=0,counter=0; 
   while (*str !='\0')
   {
    if(str[iCnt]==' '){
        counter++;

    }  
    str++;
   }
   
return counter;
}
int main(){
    char cValue[100];
    int iRet=0;

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    iRet= CountWhite(cValue);
    printf("Total number of white spaces are: %d\n",iRet);

    return 0;
    }

/*
input           : Marvellous Infosystems by Piyush Manohar Khairnar 
output          : Total number of white spaces are: 5



Time Complexity : O(N)
*/