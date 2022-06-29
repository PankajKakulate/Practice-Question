/////////////////////////////////////////////////////////////////
// Function name : ChkChar()
// Description   : Write a program which accept string from user and accept one character. check whether that char is present in string or not.
// Input         : char * , char
// Output        : bool
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch){
   int iCnt=0;
   bool isFound=false; 
   while (*str !='\0')
   {
    if(str[iCnt]==ch){
        isFound=true;
        break;
    }  
    str++;
   }

   
return isFound;
}
int main(){
    char cValue,arr[100];
    bool bRet=false;
    printf("Enter the String: \n");
    scanf(" %[^'\n']s",arr);
    printf("Enter the char: \n");
    scanf(" %c",&cValue);

    bRet= ChkChar(arr,cValue);
    if(bRet==true){
        printf("character found\n");
    }else{
        printf("character not found\n");

    }

    return 0;
    }

/*
input           : Marvellous 
                    e
output          : character found
Time Complexity : O(N)
*/