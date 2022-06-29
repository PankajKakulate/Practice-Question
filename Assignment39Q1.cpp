
/////////////////////////////////////////////////////////////////
// Function name : WhiteSpace()
// Description   : Write a recursive program which accept string from user and count number of white spaces.
//                 
// Input         : char *
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int WhiteSpace(char *str){
    static int iCnt=0;
    if(*str!='\0'){
        if(*str==' ')
        iCnt++;
        WhiteSpace(++str);
    }
    return iCnt;
    }
int main(){
    char arr[20];
    int iRet=0;
    printf("Enter String\n");
    scanf(" %[^'\n']s",arr);
    iRet= WhiteSpace(arr);
    printf("%d\n",iRet);
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :HE llo Wor id
                 
output          : 3
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/