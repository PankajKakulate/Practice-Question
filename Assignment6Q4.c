/////////////////////////////////////////////////////////////////
// Write a Program which accept number from user 
// and count frequency of 4 in it
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : CountFour
//Description   : accept number from user  and 
//                count frequency of 4 in it
//input         : Integer
//output        : Integer
//Date          : 02/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int CountFour(int iNo){

    int iDigit=0;
    int iCntFour=0;
    if(iNo<0){
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==4)
        {
            iCntFour++;
        }
        iNo=iNo/10;
    }
    
    return iCntFour;
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);
    printf("%d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 922432
//output   : 1
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////