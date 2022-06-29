/////////////////////////////////////////////////////////////////
// Accept N number from user and return frequency of 11 from it
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : check()
//Description   : Accept N number from user and return frequency of 11 from it
//                
//input         : Integer
//output        : Integer
//Date          : 07/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int check(int arr[],int ilength){

    int iCnt=0,iFreq=0;
    for(iCnt=0;iCnt<ilength;iCnt++){
        if((arr[iCnt]==11)){   
         iFreq++;
        }
        
    }
    return iFreq;
}
int main(){
    int iSize=0,iCnt=0,iRet=0;
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
    iRet=check(p,iSize);
    printf("Frequency of 11 is: %d\n",iRet);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 11 3 80 11 111 
//output   : 2
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////