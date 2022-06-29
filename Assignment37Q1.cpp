/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a recursive program which display below pattern.
//                  * * * * * 
// Input         : int
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display(int iNo){
   static int iCnt=0;
    if(iCnt<iNo){
        
        cout<<"*\t";
        iCnt++;
        Display(iNo);
    }
    
    }
int main(){
    int iValue=0;
    cout<<"Enter Number"<<endl;
    cin>>iValue;
    Display(iValue);
    cout<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :5
                 
output          : * * * * *
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/