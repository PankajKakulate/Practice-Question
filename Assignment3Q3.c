/////////////////////////////////////////////////////////////////
// Write a program which accept number from user and
// print even factors of that number 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : DisplayFactor
//Description   : Write a program which accept 1 number from user and
//                print even factors of that number 
//input         : Integer
//output        : Void
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo){

    int iCnt=0;
    if(iNo<0){
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%iCnt)==0){
            if((iCnt%2)==0)
              printf("%d ",iCnt); 
        }
    }
    printf("\n");
}
int main(){
    int iValue=0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 36
//output   : 2 4 6 12 18 36
///////////////////////////////////////////////////////////////