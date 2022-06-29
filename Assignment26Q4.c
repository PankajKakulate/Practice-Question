/////////////////////////////////////////////////////////////////
// Function name : LastOccurChar()
// Description   : Write a program which accept string from user and accept one character. Return index of Last occurrence of that character.
// Input         : char * , char
// Output        : int
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
int LastOccurChar(char *str,char ch){
   int iCnt=0;
   bool isFound=false;
   for(iCnt=strlen(str);iCnt>=0;iCnt--){
        if(tolower(str[iCnt])==tolower(ch) ){
            isFound=true;
            break;
        }  
   } first
   
   if(isFound==true){
        return iCnt;
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

    iRet= LastOccurChar(arr,cValue);
    printf("%d\n",iRet);

    return 0;
    }

/*
input           : Marvellous 
                 l
output          : 6
Time Complexity : O(N)
*/