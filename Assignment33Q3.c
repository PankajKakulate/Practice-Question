////////////////////////////////////////////////////////////////////
// Function Name : chkBit
// Description   : write a program which accept one number from user and check whether 9th r 12th bit is on or off.
// input         : unsigned int 
// output        : bool
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool chkBit(UINT iNo){
    UINT iMask1=0X00001000;
    UINT iMask2=0X00008000;
    
    
    if ((iNo | iMask1)==0 || (iNo | iMask2)==0)
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
// Input           : 257
// Output          : Bit is ON
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////