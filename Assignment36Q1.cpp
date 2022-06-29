/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a recursive program which display below pattern.
//                  * * * * *
// Input         : Nothing
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display(){
   static int iSize=5;
    if(iSize>0){
        cout<<"*\t";
        iSize--;
        Display();
    }
    
    }
int main(){
    
    Display();
    cout<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :
                 
output          : * * * * *
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/