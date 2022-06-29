/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a recursive program which display below pattern.
//                  1 2 3 4 5
// Input         : Nothing
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display(){
   static int iCountr=0;
    if(iCountr<5){
        iCountr++;
        cout<<iCountr<<"\t";
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
                 
output          : 1 2 3 4 5
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/