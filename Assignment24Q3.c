/////////////////////////////////////////////////////////////////
// Function name : Difference()
// Description   : Write a program which accept string from user and return differrence between frequency of small characters and frequency of capital character.
// Input         : char *
// Output        : Integer
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>

int Difference(char *str){
   int iCnt=0; 
   int iCountCap=0;
   int iCountSmall=0;
   
   while (*str!='\0')
   {
    if((97<=str[iCnt]) && (122>=str[iCnt])){
        iCountSmall++;
    }
    if((65<=str[iCnt]) && (90>=str[iCnt])){
        iCountCap++;
    }
    str++;
   }
   
   return (iCountSmall-iCountCap);
 
}
int main(){
    char cValue[20];
    int iRet=0;

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    iRet=Difference(cValue);
    printf("%d\n",iRet);

    return 0;
    }

/*
input           : MarvellouS 
output          : 6 (8-2)



Time Complexity : O(N)
*/