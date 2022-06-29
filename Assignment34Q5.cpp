/////////////////////////////////////////////////////////////////
// Function name : Min()
// Description   : Write a generic program to N values from user and return maximum number.
// Input         : T, int
// Output        : T
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>
T Min(T *arr,int iSize){
   
    T iMin=arr[0];
    int icnt=0;
    for(icnt=1;icnt<iSize;icnt++){
       if(iMin>arr[icnt]){
        iMin=arr[icnt];
       }
    }
    return iMin;
}
int main(){
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.,8.7};
    int iMin=Min(arr,5);
    cout<<iMin<<endl;
    float fMin=Min(brr,4);
    cout<<fMin<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :10,20,30,40,50
                 
output          : 10
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/