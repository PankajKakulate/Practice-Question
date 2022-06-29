/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// display all such numbers which contains 3 digits in it.
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Digits()
//Description   : Accept N number from user and 
//                display all such numbers which contains 3 digits in it.                
//input         : Integer
//output        : Void
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int Digits(int arr[],int ilength){

    register int iCnt=0;
    int iDigit=0,iNo=0,iCntDigits=0;
    printf("3 Digit numbers are: \n");
    for(iCnt=0;iCnt<ilength;iCnt++){
       iNo=arr[iCnt];
       iCntDigits=0;
       while (iNo!=0)
       {
           iDigit=iNo%10;
            iNo=iNo/10;
            iCntDigits++;    
       }
       if(iCntDigits==3){
           printf("%d ",arr[iCnt]);
       }
       
        
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
    

    Digits(p,iSize);
    
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 8225 665 3 76 953 858 
//         
//output   :Digits is:665 953 858
// Time Complexity: O(N*N)
///////////////////////////////////////////////////////////////