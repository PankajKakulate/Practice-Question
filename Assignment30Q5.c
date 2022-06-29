////////////////////////////////////////////////////////////////////
// Function Name : chkBit
// Description   : write a program which checks wheather First and last is ON or OFF.FIrst bit means number 1 and last bit means bit number 32.
// input         : unsigned int 
// output        : bool
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool chkBit(UINT iNo){
    UINT iMask=0X80000001;
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
// Input           : 2147483649
// Output          : Bit is ON
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////