/////////////////////////////////////////////////////////////////
// Function name : Sum()
// Description   : Write a recursive program which accept number from user and return summation of its digits.
//                 879 =24
// Input         : int
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int Sum(int iNo){
    int iDigit=0;
    static int iSum=0;
    if(iNo>0){
        iDigit=iNo%10;
        iSum+=iDigit;
        Sum(iNo/10);
    }
    return iSum;
    }
int main(){
    int iValue=0;
    int iRet=0;
    cout<<"Enter Number"<<endl;
    cin>>iValue;
    iRet= Sum(iValue);
    cout<<iRet<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :879
                 
output          : 24
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/