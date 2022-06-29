/////////////////////////////////////////////////////////////////
// Write a program which accept number from user and
// dispaly its factors in decreasing order 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : FactRev
//Description   : Write a program which accept 1 number from user and
//                dispaly its factors in decreasing order 
//input         : Integer
//output        : void
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void FactRev(int iNo){

    int iCnt=0;
    int iNoOfFactor=0;
    if(iNo<0){
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)==0){
           
             iNoOfFactor++;
              
        }
    }
    int factors[iNoOfFactor];
    int iCnt2=0;
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt)==0){
           factors[iCnt2]=iCnt;
           iCnt2++;     
        }
    }
    for (int i = iNoOfFactor-1; i >=0 ; i--)
    {
        printf("%d ",factors[i]);
    }
    printf("\n");
    
}
int main(){
    int iValue=0;
   
    printf("Enter Number \n");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 12
//output   : Multiplication of factors is: 144
///////////////////////////////////////////////////////////////