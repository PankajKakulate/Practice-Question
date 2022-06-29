/////////////////////////////////////////////////////////////////
// Function name : ChkVowel()
// Description   : Write a program which accept string from user and check wheather it contains vowels in it or not.
// Input         : char *
// Output        : Boolean
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

bool ChkVowel(char *str){
   int iCnt=0; 
   char cTemp='\0';
   bool isContainsVowel=false;
   while (*str!='\0')
   {
    cTemp=tolower(str[iCnt]) ;
    if(cTemp=='a' ||cTemp=='i'|| cTemp=='o'||cTemp=='u'||cTemp=='e'){
          isContainsVowel= true;

    }
    str++;
   }
   
   
 return isContainsVowel;
}
int main(){
    char cValue[20];
    bool bRet=0;

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    bRet=ChkVowel(cValue);
    if(bRet==true){
        printf("Contains Vowel\n");
    }else{
        printf("There is no Vowels\n");
    }

    return 0;
    }

/*
input           : Demo
output          : Contains Vowel



Time Complexity : O(N)
*/