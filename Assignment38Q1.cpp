/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a recursive program which display below pattern.
//                  5 * 4 * 3 * 2 * 1 * 
// Input         : int
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display(int iNo){
   
    if(iNo>0){
        printf("%d\t*\t",iNo);
        Display(--iNo);
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
input           :6
                 
output          : 5 * 4 * 3 * 2 * 1 *
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/