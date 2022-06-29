
/////////////////////////////////////////////////////////////////
// Function name : StrLen()
// Description   : Write a recursive program which accept string from user and count number of characters.
//                 
// Input         : char *
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int StrLen(char *str){
    static int iCnt=0;
    if(*str!='\0'){
        iCnt++;
        StrLen(++str);
    }
    return iCnt;
    }
int main(){
    char arr[20];
    int iRet=0;
    cout<<"Enter String"<<endl;
    cin>>arr;
    iRet= StrLen(arr);
    cout<<iRet<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :Pankaj
                 
output          : 6
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/