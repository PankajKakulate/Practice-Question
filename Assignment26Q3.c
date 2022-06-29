/////////////////////////////////////////////////////////////////
// Function name : FistOccurChar()
// Description   : Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
// Input         : char * , char
// Output        : int
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
int FistOccurChar(char *str,char ch){
   int iCnt=0;
   int FirstOccurence=-1; 
   bool isFound=false;
   while (*str !='\0')
   {
    FirstOccurence++;
    if(tolower(str[iCnt])==tolower(ch) ){
        isFound=true;
        break;
    }  
    str++;
   }

   if(isFound==true){
        return FirstOccurence;
   }else{
    return -1;
   }
}
int main(){
    char cValue,arr[100];
    int iRet=0;
    printf("Enter the String: \n");
    scanf(" %[^'\n']s",arr);
    printf("Enter the char: \n");
    scanf(" %c",&cValue);

    iRet= FistOccurChar(arr,cValue);
    printf("%d\n",iRet);

    return 0;
    }

/*
input           : Marvellous 
                    e
output          : 4
Time Complexity : O(N)
*/