////////////////////////////////////////////////////////////////////
// Function Name : ToggleBitRange
// Description   : write a program which accept one number, two position for range from user and Toggle all bits from that range.
// input         : unsigned int,int ,int 
// output        : nsigned int
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT ToggleBitRange(UINT iNo, int iPos1,int iPos2){
    UINT iMask=0X00000001;
    int i=0;
    UINT Result=0;

    for(i=(iPos1-1); i<iPos2; i++){
        iMask=iMask<<i;
        Result =iNo ^ iMask;
        iNo=Result;
    }
    
    return Result;
}

int main(){
    UINT iValue=0;
    int iPos1=0,iPos2=0;
    UINT iRet=0;
    printf("Enter the number: \n");
    scanf("%u",&iValue);
    printf("Enter the start position : \n");
    scanf("%d",&iPos1);
    printf("Enter the end position : \n");
    scanf("%d",&iPos2);
    iRet=ToggleBitRange(iValue,iPos1,iPos2);

    printf("Toggled number is :%u\n",iRet);
    
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 897 9 13
 // Output          : 134349441
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////