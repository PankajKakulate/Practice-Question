////////////////////////////////////////////////////////////////////
// Function Name : CountON
// Description   : write a program which accept one number from user and count number ON(1) bits in it without using % and / operator.
// input         : unsigned int 
// output        : int
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
int CountON(UINT iNo){
    UINT iMask=0X00000001;
    int iCnt=0,i=0;
    for ( i = 1; i <32 ; i++)
    {
        if ((iNo & iMask)!=0)
        {
         iCnt++;
        }
        iMask=iMask<<i;
    }
    
    return iCnt;
    
}

int main(){
    int iRet=0;
    UINT iValue=0;
    printf("Enter the number: \n");
    scanf("%u",&iValue);

    iRet=CountON(iValue);
    printf("Number of ON bit in given number is: %d\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 11
// Output          : 3
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////