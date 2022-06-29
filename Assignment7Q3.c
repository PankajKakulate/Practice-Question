/////////////////////////////////////////////////////////////////
// Write a Program which accept number from user 
// and return the count of digits in between 3 and 7.
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : CountRange
//Description   : accept number from user  and 
//                return the count of digits in between 3 and 7.
//input         : Integer
//output        : Integer
//Date          : 02/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int CountRange(int iNo){

    int iDigit=0;
    int iCnt=0;
    if(iNo<0){
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if((iDigit>3)&&(iDigit<7))
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    
    return iCnt;
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);
    printf("%d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 9442
//output   : 1
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////