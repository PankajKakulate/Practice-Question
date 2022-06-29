/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a recursive program which display below pattern.
//                  A B C D E F
// Input         : Int
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display(int iNo){
   
    if(iNo>0){
        Display(--iNo);
        printf("%c\t",'A'+iNo);
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
                 
output          : A B C D E F
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/