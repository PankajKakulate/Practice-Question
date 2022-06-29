/////////////////////////////////////////////////////////////////
// Write a Program which accept number from user 
// and return multiplication of all digits.
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : MultDigits
//Description   : accept number from user  and 
//                return multiplication of all digits.
//input         : Integer
//output        : Integer
//Date          : 02/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int MultDigits(int iNo){

    int iDigit=0;
    int iMult=1;
    if(iNo<0){
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit!=0){
        iMult=iMult*iDigit;
        }
        iNo=iNo/10;
    }
    
    return iMult;
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);
    printf("%d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 9440
//output   : 144
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////