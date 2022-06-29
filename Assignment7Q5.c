/////////////////////////////////////////////////////////////////
// Write a Program which accept number from user 
// and return diffrence between summation of even digit
// and summation of odd digits.
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : CountDiff
//Description   : accept number from user  and 
//                return diffrence between summation of even digit
//                and summation of odd digits.
//input         : Integer
//output        : Integer
//Date          : 02/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int CountDiff(int iNo){

    int iDigit=0;
    int iSumEven=0;
    int iSumOdd=0;
    if(iNo<0){
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            iSumEven=iSumEven+iDigit;
        }else{
            iSumOdd=iSumOdd+iDigit;
        }
        iNo=iNo/10;
    }
    
    return (iSumEven-iSumOdd);
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("%d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 5733
//output   : -18
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////