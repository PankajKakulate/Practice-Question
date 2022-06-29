//////////////////////////////////////////////////////
// Write a program to divide two numbers 
/////////////////////////////////////////////////////

#include<stdio.h>
/////////////////////////////////////////////////////////////////
//
//Function Name:    Divide
//Description:      used to perform division of 2 numbers
//Input:            Integer, Integer
//output:           Integer
//Date:             23/04/2022
//Author:           Pankaj Keda Kakulate
//
/////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2){
    int iAns=0;
    if(iNo2==0){
        return -1;
    }
    iAns=iNo1/iNo2;

    return iAns;
}

int main(){
    int iValue1=15,iValue2=5;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);
    printf("Division is %d\n",iRet);
    return 0;

}
/////////////////////////////////////////////////////////////
//
//Input:  15 5
//Output: 3
//
/////////////////////////////////////////////////////////////