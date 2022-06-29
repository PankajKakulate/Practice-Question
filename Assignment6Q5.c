/////////////////////////////////////////////////////////////////
// Write a Program which accept number from user 
// and count frequency of such a digit which are less than 6
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : Count
//Description   : accept number from user  and 
//                count frequency of such a digit which are less than 6
//input         : Integer
//output        : Integer
//Date          : 02/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int Count(int iNo){

    int iDigit=0;
    int iCnt=0;
    if(iNo<0){
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
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

    iRet=Count(iValue);
    printf("%d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 9440
//output   : 3
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////