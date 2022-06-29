/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a recursive program which display below pattern.
//                  5 4 3 2 1
// Input         : Nothing
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display(){
   static int iCountr=5;
    if(iCountr>0){
        
        cout<<iCountr<<"\t";
        iCountr--;
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
                 
output          : 5 4 3 2 1
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/