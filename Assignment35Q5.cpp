/////////////////////////////////////////////////////////////////
// Function name : Reverse()
// Description   : Write a generic program which accept N values from user.  and reverse the contents.
// Input         : T, int,T
// Output        : void
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>
void Reverse(T *arr,int iSize){
    int icnt=0;
    for(icnt=iSize-1;icnt>=0;icnt--){
        cout<<arr[icnt]<<" ";
    }
    cout<<endl;
    }
int main(){
    int arr[]={10,20,30,10,30,40,10,40,10};
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Reverse(arr,9);
    

    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :10,20,30,10,30,40,10,40,10
                 
output          : 10 40 10 40 30 10 30 20 10
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/