
/////////////////////////////////////////////////////////////////
// Function name : Fact()
// Description   : Write a recursive program which accept number from user and return its factorial.
//                 
// Input         : int
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int Fact(int iNo){
    static int iFact=1;
    if(iNo>0){
        iFact*=iNo;
        Fact(--iNo);
    }
    return iFact;
    }
int main(){
    int ivalue=0;
    int iRet=0;
    cout<<"Enter Number"<<endl;
    cin>>ivalue;
    iRet= Fact(ivalue);
    cout<<iRet<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :4
                 
output          : 24
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/