////////////////////////////////////////////////////////////////////
// Function Name : chkBit
// Description   : write a program which checks wheather 7th,15th,21st & 28 bit is ON or OFF.
// input         : unsigned int 
// output        : bool
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool chkBit(UINT iNo){
    UINT iMask=0X00020010;
    UINT iResult=0;
    iResult=iNo & iMask;
    if (iResult==0)
    {
        return false;
    }else{
        return true;
    }
    
}

int main(){
    bool bRet=false;
    UINT iValue=0;
    printf("Enter the number: \n");
    scanf("%u",&iValue);

    bRet=chkBit(iValue);
    if(bRet==true){
        printf("Bit is ON\n");
    }else{
        printf("Bit is OFF\n");
    }
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 131088
// Output          : Bit is ON
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////