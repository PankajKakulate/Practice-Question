/////////////////////////////////////////////////////////////////
// Function name : Multiply()
// Description   : Write a generic program to multiply two numbers.
// Input         : T, T
// Output        : T
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>
T Multiply(T no1,T no2){
   T ans;
   ans=no1*no2;
   return ans;
  
}
int main(){
    int iRet= Multiply(10,20);
    cout<<iRet<<endl;
    float fRet=Multiply(10.0f,20.0f);
    cout<<fRet<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :10 20
                 
output          : 200
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/