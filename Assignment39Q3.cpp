
/////////////////////////////////////////////////////////////////
// Function name : SmallCase()
// Description   : Write a recursive program which accept string from user and count number of small character.
//                 
// Input         : char *
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int SmallCase(char *str){
    static int iCnt=0;
    if(*str!='\0'){
        if(*str>='a' && *str<='z')
        iCnt++;
        SmallCase(++str);
    }
    return iCnt;
    }
int main(){
    char arr[20];
    int iRet=0;
    printf("Enter String\n");
    scanf(" %[^'\n']s",arr);
    iRet= SmallCase(arr);
    printf("%d\n",iRet);
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :HE llo Wor id
                 
output          : 7
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/