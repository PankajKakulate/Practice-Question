
/////////////////////////////////////////////////////////////////
// Function name : Reverse()
// Description   : Write a recursive program which accept number from user and return its Reverse number.
//                 
// Input         : int
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int Reverse(int iNo){
    int iDigit=0;
    static int iRev=0;
    if(iNo>0){
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        Reverse(iNo/10);
    }
    return iRev;
    }
int main(){
    int ivalue=0;
    int iRet=0;
    cout<<"Enter Number"<<endl;
    cin>>ivalue;
    iRet= Reverse(ivalue);
    cout<<iRet<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :78129
                 
output          : 92187
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/