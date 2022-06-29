/////////////////////////////////////////////////////////////////
// Write a program which accept number from user and
// return summation of all its non factors 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : SumNonFact
//Description   : Write a program which accept 1 number from user and
//                return summation of all its non factors 
//input         : Integer
//output        : Integer
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int SumNonFact(int iNo){

    int iCnt=0;
    int iSum=0;
    if(iNo<0){
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)!=0){
            iSum=iSum+iCnt;
        }
    }
    return iSum; 
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 12
//output   : 50
///////////////////////////////////////////////////////////////