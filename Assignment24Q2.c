/////////////////////////////////////////////////////////////////
// Function name : CountSmall()
// Description   : Write a program which accept string from user and count number of Small characters.
// Input         : char *
// Output        : Integer
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountSmall(char *str){
   int iCnt=0; 
   int iCountCap=0;
   
   while (*str!='\0')
   {
    if((97<=str[iCnt]) && (122>=str[iCnt])){
        iCountCap++;
    }
    str++;
   }
   return iCountCap;
 
}
int main(){
    char cValue[20];
    int iRet=0;

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    iRet=CountSmall(cValue);
    printf("%d\n",iRet);

    return 0;
    }

/*
input           : Marvellous 
output          : 9



Time Complexity : O(N)
*/