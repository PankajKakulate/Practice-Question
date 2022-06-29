/////////////////////////////////////////////////////////////////
// Accept N number from user and accept one another number as NO,
// return index of Last occurrence of that NO.
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : LastOccurence()
//Description   : Accept N number from user and accept one another number as NO,
//                return index of Last occurrence of that NO.                
//input         : Integer
//output        : Integer
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int LastOccurence(int arr[],int ilength,int iNo){

    int iFreq=0,iFirstOccurr=-1;
    register  int iCnt=0;
    for(iCnt=0;iCnt<ilength;iCnt++){
        if((arr[iCnt]==iNo)){   
            iFirstOccurr=iCnt;
         
        }
        
    }
    return iFirstOccurr;
}
int main(){
    int iSize=0,iCnt=0,iRet=-1,iValue=0;
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

    iRet=LastOccurence(p,iSize,iValue);
    if (iRet==-1)
    {
        printf("There is no such number\n");
    }else
    {
           printf("Last Occurrence of Number %d is index :%d \n",iValue,iRet);
    }
     
   
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 66 93 88 
//          No: 66
//output   :Last Occurrence of Number 66 is index 3
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////