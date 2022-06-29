/////////////////////////////////////////////////////////////////
// Write a Program which accept number from user 
// and count frequency of 2 in it
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : CountTwo
//Description   : accept number from user  and 
//                count frequency of 2 in it
//input         : Integer
//output        : Integer
//Date          : 02/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int CountTwo(int iNo){

    int iDigit=0;
    int iCntTwo=0;
    if(iNo<0){
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
        {
            iCntTwo++;
        }
        iNo=iNo/10;
    }
    
    return iCntTwo;
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);
    printf("%d\n",iRet);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 922432
//output   : 3
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////