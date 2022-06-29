/////////////////////////////////////////////////////////////////
// Write a program which accept number from user and
// dispaly its multiplication of factors; 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : MultFact
//Description   : Write a program which accept 1 number from user and
//                dispaly its multiplication of factors; 
//input         : Integer
//output        : Integer
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int MultFact(int iNo){

    int iCnt=0;
    int mult=1;
    if(iNo<0){
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)==0){
           // if((iCnt%2)==0)
              //printf("%d ",iCnt); 
              mult=mult*iCnt;
        }
    }
    return mult;
}
int main(){
    int iValue=0;
    int iRet=0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("Multiplication of factors is: %d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 12
//output   : Multiplication of factors is: 144
///////////////////////////////////////////////////////////////