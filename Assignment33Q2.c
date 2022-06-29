////////////////////////////////////////////////////////////////////
// Function Name : CommonBits
// Description   : write a program which accept two numbers from user and display position of common ON bits from that two numbers.
// input         : unsigned int 
// output        : void
// Date          : 25/06/2022
// Author        : Pankaj Keda Kakulate
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
void CommonBits(UINT iNo1, UINT iNo2){
    UINT iMask=0X00000001;
    int i=0;
    for ( i = 1; i <32 ; i++)
    {
        if (((iNo1 & iMask)!=0) && ((iNo2 & iMask)!=0)  )
        {
         printf("%d ",i);
        }
        iMask=iMask<<i;
    }
    printf("\n");
    
    
}

int main(){
    UINT iValue1=0,iValue2=0;
    printf("Enter the first number: \n");
    scanf("%u",&iValue1);
    printf("Enter the second number: \n");
    scanf("%u",&iValue2);
    CommonBits(iValue1,iValue2);
    
    return 0;
}
////////////////////////////////////////////////////////////////////
// Input           : 10 15  (1010  1111)
// Output          : 2 4
// Time Complexity :O(N)
////////////////////////////////////////////////////////////////////