/////////////////////////////////////////////////////////////////
// Function name : CountChar()
// Description   : Write a program which accept string from user and accept one character. Return freqeuncy of that character.
// Input         : char * , char
// Output        : int
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
int CountChar(char *str,char ch){
   int iCnt=0;
   int isFoundCnt=0; 
   while (*str !='\0')
   {
    if(tolower(str[iCnt])==tolower(ch) ){
        isFoundCnt++;
        
    }  
    str++;
   }

   
return isFoundCnt;
}
int main(){
    char cValue,arr[100];
    int iRet=0;
    printf("Enter the String: \n");
    scanf(" %[^'\n']s",arr);
    printf("Enter the char: \n");
    scanf(" %c",&cValue);

    iRet= CountChar(arr,cValue);
    printf("%d\n",iRet);

    return 0;
    }

/*
input           : Marvellous 
                    e
output          : 1
Time Complexity : O(N)
*/