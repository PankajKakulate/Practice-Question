/////////////////////////////////////////////////////////////////
// Accept 1 number from user and print that number of * on screen
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : Accept
//Description   : print n times * on screen 
//input         : Integer
//output        : Void
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Accept(int iNo){
    int iCnt=0;
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
    printf("\n");
}
int main(){
    int iValue=0;
    
    printf("How many times you want to print * on screen\n");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 5
//output   : * * * * *
///////////////////////////////////////////////////////////////