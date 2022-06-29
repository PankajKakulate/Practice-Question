/////////////////////////////////////////////////////////////////
// Write a program which accept number from user and
// dispaly all its non factors. 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : NonFact
//Description   : Write a program which accept 1 number from user and
//                dispaly all its non factors. 
//input         : Integer
//output        : void
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void NonFact(int iNo){

    int iCnt=0;
    if(iNo<0){
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)!=0){
           printf("%d ",iCnt); 
        }
    }
    printf("\n"); 
}
int main(){
    int iValue=0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 12
//output   : 5 7 8 9 10 11
///////////////////////////////////////////////////////////////