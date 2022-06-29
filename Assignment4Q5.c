/////////////////////////////////////////////////////////////////
// Write a program which accept number from user and
// return difference between summation of all its factors and non factors 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : FactDiff
//Description   : Write a program which accept 1 number from user and
//                return difference between summation of all its factors and non factors 
//input         : Integer
//output        : Integer
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int FactDiff(int iNo){

    int iCnt=0;
    int iSumOfFact=0;
    int iSumOfNonFact=0;
    int iFactDiff=0;

    if(iNo<0){
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)==0){
            iSumOfFact=iSumOfFact+iCnt;
        }else{
            iSumOfNonFact=iSumOfNonFact+iCnt;
        }
    }

    if(iSumOfFact>iSumOfNonFact){
        return (iSumOfFact-iSumOfNonFact);
    }else
    {
        return (iSumOfNonFact-iSumOfFact);
    }
     
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 12
//output   : 34
///////////////////////////////////////////////////////////////