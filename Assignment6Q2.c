/////////////////////////////////////////////////////////////////
// Write a Program which accept number from user 
// and check wheather it contains 0 in it or not
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

/////////////////////////////////////////////////////////////////
//Function Name : ChkZero
//Description   : accept number from user  and 
//                check wheather it contains 0 in it or not
//input         : Integer
//output        : Integer
//Date          : 02/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo){

    int iDigit=0;
    BOOL isZero=FALSE;
    if(iNo<0){
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            isZero=TRUE;
            break;
        }
        iNo=iNo/10;
    }
    
    return isZero;
}
int main(){
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);
    if(bRet){
        printf("It Contains Zero\n");
    }else{
        printf("There is no Zero\n");
    }
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 1095
//output   : It Contains Zero
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////