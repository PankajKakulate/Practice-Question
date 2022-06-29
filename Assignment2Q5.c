/////////////////////////////////////////////////////////////////
// Accept number from user and check wheather number is even or odd
/////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////////////
//Function Name : ChkEven
//Description   : check wheather number is even or odd
//input         : Integer
//output        : Integer
//Date          : 24/04/2022
//Author        : Pankaj Keda Kakulate 
/////////////////////////////////////////////////////////////////

BOOL Check(int iNo){
    if(( iNo % 2) == 0){
        return TRUE;
    }else{
        return FALSE;
    }
}

int main(){
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=Check(iValue);
    
    if(bRet==TRUE){
        printf("Number is even\n");
    }else{
        printf("Number is odd\n");
    }
    return 0;
}

///////////////////////////////////////////////////////
// input  : 15
// output :Number is odd
///////////////////////////////////////////////////////