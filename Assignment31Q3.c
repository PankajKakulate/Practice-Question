////////////////////////////////////////////////////////////////////
// Function Name : ToggleBit
// Description   : write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
// input         : unsigned int 
// output        : unsigned int 
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo){
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

    iRet=ToggleBit(iValue);
    printf("Your Number is %u\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 137
// Output          : 201
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////