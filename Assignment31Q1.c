////////////////////////////////////////////////////////////////////
// Function Name : OffBit
// Description   : write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.
// input         : unsigned int 
// output        : unsigned int 
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT OffBit(UINT iNo){
    UINT iMask=0X00000040;
    UINT iResult=0;
    iResult=iNo ^ iMask;
    return iResult;
    
}

int main(){
    UINT iRet=0;
    UINT iValue=0;
    printf("Enter the number: \n");
    scanf("%u",&iValue);

    iRet=OffBit(iValue);
    printf("Your Number is %u\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 79
// Output          : 15
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////