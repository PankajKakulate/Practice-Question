////////////////////////////////////////////////////////////////////
// Function Name : ToggleBit
// Description   : write a program which accept one number and position from user and toggle  bit of that number. Return modified number.
// input         : unsigned int ,int
// output        : unsigned int 
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo,int iPos){
    UINT iMask=0X00000001;
    UINT iResult=0;
    iMask=iMask<<(iPos-1);
    iResult=iNo ^ iMask;
    return iResult;
    
}

int main(){
    UINT iRet=0;
    UINT iValue=0;
    int iPos=0;
    printf("Enter the number: \n");
    scanf("%u",&iValue);
    printf("Enter the position: \n");
    scanf("%d",&iPos);

    iRet=ToggleBit(iValue,iPos);
    printf("Your Number is %u\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 4026531871
// Output          : 16// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////