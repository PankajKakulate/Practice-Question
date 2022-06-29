/////////////////////////////////////////////////////////////////
// Function name : SearchFirst()
// Description   : Write a generic program which accept N values from user.  search first occurrence of any specific value.
// Input         : T, int,T
// Output        : int
// Date          : 23/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>
int SearchFirst(T *arr,int iSize,T No){
    int icnt=0;
    for(icnt=0;icnt<iSize;icnt++){
        if(arr[icnt]==No){
            break;
        }
    }
    return icnt+1;
    }
int main(){
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=SearchFirst(arr,9,40);
    cout<<iRet<<endl;

    return 0;
    }

/*
//////////////////////////////////////////////////////////////
input           :10,20,30,10,30,40,10,40,10
                 
output          : 6
Time Complexity : O(N)
//////////////////////////////////////////////////////////////
*/