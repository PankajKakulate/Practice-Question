/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// display summation of digits of each number.
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : DigitsSum()
//Description   : Accept N number from user and 
//                display summation of digits of each number.                
//input         : Integer
//output        : Void
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int DigitsSum(int arr[],int ilength){

    register int iCnt=0;
    int iDigit=0,iNo=0,iDigitsSum=0;
    printf("Digits Summation are: \n");
    for(iCnt=0;iCnt<ilength;iCnt++){
       iNo=arr[iCnt];
       iDigitsSum=0;
       while (iNo!=0)
       {
           iDigit=iNo%10;
            iNo=iNo/10;
            iDigitsSum+=iDigit;    
       }
       
        printf("%d ",iDigitsSum);
    
       
        
    }
    printf("\n");
    
}
int main(){
    int iSize=0;
    int *p=NULL;
    register int iCnt=0;

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
    

    DigitsSum(p,iSize);
    
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 8225 665 3 76 953 858 
//          
//output   :Digits is:17 17 3 13 17 21
// Time Complexity: O(N*N)
///////////////////////////////////////////////////////////////