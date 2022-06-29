////////////////////////////////////////////////////////////////////
// Function Name : chkBit
// Description   : write a program which accept one mumber and position from user and check whether bit at that position is on or off. If bit is on return true otherwise return false. 
// input         : unsigned int ,int
// output        : bool
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool chkBit(UINT iNo,int iPos){

    UINT iMask=0X00000001;
    UINT iResult=0; 

    if(iPos>32 || iPos<=0){
        printf("Invalid position");
        return 0;
    }
    iMask=iMask<<(iPos-1);
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
    int iPos=0;
    printf("Enter the number: \n");
    scanf("%u",&iValue);
    printf("Enter the position: \n");
    scanf("%d",&iPos);

    bRet=chkBit(iValue,iPos);
    if(bRet==true){
        printf("Bit is ON\n");
    }else{
        printf("Bit is OFF\n");
    }
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 10 2
// Output          : Bit is ON
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////