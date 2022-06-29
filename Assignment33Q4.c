////////////////////////////////////////////////////////////////////
// Function Name : ChkBit
// Description   : write a program which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF.
// input         : unsigned int,int ,int 
// output        : bool
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChkBit(UINT iNo, int iPos1,int iPos2){
    UINT iMask1=0X00000001;
    UINT iMask2=0X00000001;
    iMask1=iMask1<<(iPos1-1);
    iMask2=iMask2<<(iPos2-1);
    
    if (((iNo | iMask1)!=0) || ((iNo | iMask2)!=0)  )
        {
         return true;
        }else{
            return false;
        }
    
}

int main(){
    UINT iValue=0;
    int iPos1=0,iPos2=0;
    bool bRet=false;
    printf("Enter the number: \n");
    scanf("%u",&iValue);
    printf("Enter the position 1: \n");
    scanf("%d",&iPos1);
    printf("Enter the position 2: \n");
    scanf("%d",&iPos2);
    bRet=ChkBit(iValue,iPos1,iPos2);

    if(bRet==true){
        printf("Bit os ON\n");
    }else{
        printf("Bit is OFF\n");
    }
    
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 10 3 7
 // Output          : Bit os ON
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////