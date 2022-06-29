/////////////////////////////////////////////////////////////////
// Accept N number from user and return frequency of even numbers 
// and odd numbers
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////
//Function Name : Frequency()
//Description   : Accept N number from user and return frequency of even numbers.
//                and odd numbers
//input         : Integer
//output        : Integer
//Date          : 07/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int Frequency(int arr[],int ilength){

    int iCnt=0,iEvenFreq=0,iOddFreq=0;
    for(iCnt=0;iCnt<ilength;iCnt++){
        if(((arr[iCnt]%2)==0)){   
          iEvenFreq++;
        }else{
            iOddFreq++;
        }
    }
    return (iEvenFreq-iOddFreq);
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
    iRet=Frequency(p,iSize);
    printf("differnce between Frequency of even and odd is: %d\n",iRet);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 80 93 88 90
//output   : 1
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////