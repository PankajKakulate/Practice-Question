////////////////////////////////////////////////////////////////////
// Function Name : OnBit
// Description   : write a program which accept one number from user and on its first 4 bits. Return modified number.
// input         : unsigned int 
// output        : unsigned int 
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT OnBit(UINT iNo){
    UINT iMask=0X0000000F;
    UINT iResult=0;
    iResult=iNo | iMask;
    return iResult;
    
}

int main(){
    UINT iRet=0;
    UINT iValue=0;
    printf("Enter the number: \n");
    scanf("%u",&iValue);

    iRet=OnBit(iValue);
    printf("Your Number is %u\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 73
// Output          : 79
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////