/////////////////////////////////////////////////////////////////
// Function name : Max()
// Description   : Write a generic program to N values from user and return maximum number.
// Input         : T, int
// Output        : T
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>
T Max(T *arr,int iSize){
   
    T iMax=arr[0];
    int icnt=0;
    for(icnt=1;icnt<iSize;icnt++){
       if(iMax<arr[icnt]){
        iMax=arr[icnt];
       }
    }
    return iMax;
}
int main(){
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.,8.7};
    int iMax=Max(arr,5);
    cout<<iMax<<endl;
    float fMax=Max(brr,4);
    cout<<fMax<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :10,20,30,40,50
                 
output          : 50
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/