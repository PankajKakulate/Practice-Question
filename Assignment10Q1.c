/////////////////////////////////////////////////////////////////
// Accept N number from user and accept one another number as NO,
// check wheather NO is present or not
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : check()
//Description   : Accept N number from user and accept one another number as NO,
//                check wheather NO is present or not                
//input         : Integer
//output        : Bool
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

bool check(int arr[],int ilength,int iNo){

    int iCnt=0,iFreq=0;
    bool isPresent=false;
    for(iCnt=0;iCnt<ilength;iCnt++){
        if((arr[iCnt]==iNo)){   
         isPresent=true;
         break;
        }
        
    }
    return isPresent;
}
int main(){
    int iSize=0,iCnt=0,iRet=0,iValue=0;
    bool isPresent=false;
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

    isPresent=check(p,iSize,iValue);
   if(isPresent){
        printf("Number %d is Present \n",iValue);
   }else{
       printf("Number %d is Absent \n",iValue);
   }
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 66 93 88 
//          No: 66
//output   : Number 66 is Present
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////