/////////////////////////////////////////////////////////////////
// Function name : AddN()
// Description   : Write a generic program to N values from user and return addition of that values.
// Input         : T, int
// Output        : T
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>
T AddN(T *arr,int iSize){
   
    T sum=arr[0];
    int icnt=0;
    for(icnt=1;icnt<iSize;icnt++){
        sum=sum+arr[icnt];
    }
    return sum;
}
int main(){
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.,8.7};
    int iSum=AddN(arr,5);
    cout<<iSum<<endl;
    float fSum=AddN(brr,4);
    cout<<fSum<<endl;
    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :10,20,30,40,50
                 
output          : 150
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/