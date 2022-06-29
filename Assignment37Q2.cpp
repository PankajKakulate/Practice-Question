/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a recursive program which display below pattern.
//                  1 2 3 4 5
// Input         : Int
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display(int iNo){
   static int iCnt=0;
    if(iCnt<iNo){
        
        iCnt++;
        cout<<iCnt<<"\t";
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
                 
output          : 1 2 3 4 5
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/