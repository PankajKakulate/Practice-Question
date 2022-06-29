/////////////////////////////////////////////////////////////////
// Function name : Multiply()
// Description   : Write a generic program to Largest number from three Numbers.
// Input         : T, T,T
// Output        : T
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>
T Multiply(T no1,T no2,T no3){
   
    if(no1>no2 && no1>no3){
            return no1;
    }

    if(no2>no1 && no2>no3){
            return no2;
    }

    if(no3>no2 && no3>no1){
            return no3;
    }
}
int main(){
    int iRet= Multiply(10,20,30);
    cout<<iRet<<endl;
    float fRet=Multiply(10.0f,20.0f,30.0f);
    cout<<fRet<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :10,20,30
                 
output          : 30
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/