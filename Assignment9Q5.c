/////////////////////////////////////////////////////////////////
// Accept N number from user and accept one another number as NO,
// return frequency of no from it
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : check()
//Description   : Accept N number from user and accept one another number as NO,
//                return frequency of no from it                
//input         : Integer
//output        : Integer
//Date          : 07/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int check(int arr[],int ilength,int iNo){

    int iCnt=0,iFreq=0;
    for(iCnt=0;iCnt<ilength;iCnt++){
        if((arr[iCnt]==iNo)){   
         iFreq++;
        }
        
    }
    return iFreq;
}
int main(){
    int iSize=0,iCnt=0,iRet=0,iValue=0;
    int *p=NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
    if(p==NULL){
        printf("Unable to allocate Memory\n");
        return -1;
    }
    printf("Enter %d elements \n",iSize);

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet=check(p,iSize,iValue);
    printf("Frequency of %d is: %d\n",iValue,iRet);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 66 93 88 
//          No: 66
//output   : 2
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////