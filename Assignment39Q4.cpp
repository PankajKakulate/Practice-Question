
/////////////////////////////////////////////////////////////////
// Function name : Minimum()
// Description   : Write a recursive program which accept number from user and return its Minimum of digits.
//                 
// Input         : int
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int Minimum(int iNo){
    int iDigit=0;
    static int iMin=1;
    if(iNo>0){
        iDigit=iNo%10;
        if(iMin>iDigit)
        {
            iMin=iDigit;
        }
        Minimum(iNo/10);
    }
    return iMin;
    }
int main(){
    int ivalue=0;
    int iRet=0;
    cout<<"Enter Number"<<endl;
    cin>>ivalue;
    iRet= Minimum(ivalue);
    cout<<iRet<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :78129
                 
output          : 1
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/