////////////////////////////////////////////////////////////////////
// Function Name : OffBit
// Description   : write a program which accept one number and position from user off that bit. return modified number.
// input         : unsigned int ,int
// output        : unsigned int 
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT OffBit(UINT iNo,int iPos){
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

    iRet=OffBit(iValue,iPos);
    printf("Your Number is %u\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 10 2
// Output          : 8
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////