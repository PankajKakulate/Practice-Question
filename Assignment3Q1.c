/////////////////////////////////////////////////////////////////
// Write a program which accept 1 number from user and
// print that number of even numbers on screen
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : PrintEven
//Description   : Write a program which accept 1 number from user and
//                print that number of even numbers on screen
//input         : Integer
//output        : Void
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void PrintEven(int iNo){

    int iCnt=0;
    if(iNo<=0){
        return;
    }
    for ( iCnt = 1; iCnt <= (iNo*2); iCnt++)
    {
        if((iCnt%2)==0){
        printf("%d ",iCnt); 
        }
    }
    printf("\n");
}
int main(){
    int iValue=0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 10
//output   : 2 4 6 8 10 12 14 16 18 20 
///////////////////////////////////////////////////////////////