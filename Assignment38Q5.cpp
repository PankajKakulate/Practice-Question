
/////////////////////////////////////////////////////////////////
// Function name : Product()
// Description   : Write a recursive program which accept number from user and return its Product of digits.
//                 
// Input         : int
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int Product(int iNo){
    int iDigit=0;
    static int iMult=1;
    if(iNo>0){
        iDigit=iNo%10;
        iMult*=iDigit;
        Product(iNo/10);
    }
    return iMult;
    }
int main(){
    int ivalue=0;
    int iRet=0;
    cout<<"Enter Number"<<endl;
    cin>>ivalue;
    iRet= Product(ivalue);
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