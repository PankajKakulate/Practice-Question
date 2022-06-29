/////////////////////////////////////////////////////////////////
// Accept N number from user and return difference between summation 
// of even elements and summation of odd  elements.
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////
//Function Name : Difference()
//Description   : Accept N number from user and return difference between summation  
//                of even elements and summation of odd  elements.
//input         : Integer
//output        : Integer
//Date          : 07/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int Difference(int arr[],int ilength){

    int iCnt=0,iSumEven=0,iSumOdd=0;
    for(iCnt=0;iCnt<ilength;iCnt++){
        if((arr[iCnt]%2)==0){
            iSumEven+=arr[iCnt];
        }else{
            iSumOdd+=arr[iCnt];
        }
    }

   
    return (iSumEven-iSumOdd);
}
int main(){
    int iSize=0,iRet=0,iCnt=0;
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
    iRet=Difference(p,iSize);
    
    printf("Result is %d \n",iRet);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 80 93 88
//output   : 53 (234-181)
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////