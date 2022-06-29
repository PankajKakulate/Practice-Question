/////////////////////////////////////////////////////////////////
// Accept two numbers from user and display first number in 
// second number of times
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : Display
//Description   : display first number in second number of times
//input         : Integer,Integer
//output        : Void
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency){

    int iCnt=0;
    if(iFrequency<0){
        iFrequency=-iFrequency;
    }
    for ( iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ",iNo);
    }
    printf("\n");
}
int main(){
    int iValue=0;
    int iCount=0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    printf("Enter frequency \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 11 -3
//output   : 11 11 11
///////////////////////////////////////////////////////////////