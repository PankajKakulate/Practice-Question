/////////////////////////////////////////////////////////////////
// Program to check wheather given number is divisible by 5 or not
/////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////////////
//Function Name : Check
//Description   : check wheather given number is divisible by 5 or not
//input         : Integer
//output        : Integer
//Date          : 24/04/2022
//Author        : Pankaj Keda Kakulate 
/////////////////////////////////////////////////////////////////

BOOL Check(int iNo){
    if(( iNo % 5) == 0){
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
        printf("Divisible by 5\n");
    }else{
        printf("Not divisible by 5\n");
    }
    return 0;
}

///////////////////////////////////////////////////////
// input  : 15
// output :Divisible by 5
///////////////////////////////////////////////////////