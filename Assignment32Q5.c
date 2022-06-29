////////////////////////////////////////////////////////////////////
// Function Name : ToggleBit
// Description   : write a program which accept one number from user and toggle contents of first and last nibble of the number. return modified number.
// input         : unsigned int
// output        : unsigned int 
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo){
    UINT iMask=0XF000000F;
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
// Input           : 10 3
// Output          : 14
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////