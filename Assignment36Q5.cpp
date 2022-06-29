/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Write a recursive program which display below pattern.
//                  a b c d e f
// Input         : Nothing
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display(){
   static int iCountr=0;
    if(iCountr<6){
        
        printf("%c\t",'a'+iCountr);
        iCountr++;
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
                 
output          : a b c d e f
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/