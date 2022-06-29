
/////////////////////////////////////////////////////////////////
// Function name : Maximum()
// Description   : Write a recursive program which accept number from user and return its Maximum of digits.
//                 
// Input         : int
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int Maximum(int iNo){
    int iDigit=0;
    static int iMax=1;
    if(iNo>0){
        iDigit=iNo%10;
        if(iMax<iDigit)
        {
            iMax=iDigit;
        }
        Maximum(iNo/10);
    }
    return iMax;
    }
int main(){
    int ivalue=0;
    int iRet=0;
    cout<<"Enter Number"<<endl;
    cin>>ivalue;
    iRet= Maximum(ivalue);
    cout<<iRet<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :78129
                 
output          : 9
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/