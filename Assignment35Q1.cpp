/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a generic program which accept one number from user. Print that value that number of times on screen. 
// Input         : T, int
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>
void Display(T value,int iSize){
    int icnt=0;
    for(icnt=0;icnt<iSize;icnt++){
        cout<<value<<"\t";
    }
    cout<<endl;
    }
int main(){
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :M 7
                 
output          : M M M M M M M
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/