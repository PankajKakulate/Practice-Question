/////////////////////////////////////////////////////////////////
// Accept N number from user and display all such elements which 
// are multiples of 11.
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////
//Function Name : display()
//Description   : Accept N number from user and display all such elements which  
//                are multiples of 11.
//input         : Integer
//output        : void
//Date          : 07/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void display(int arr[],int ilength){

    int iCnt=0;//iDigit=0;
    printf("Result is : ");
    for(iCnt=0;iCnt<ilength;iCnt++){
       // iDigit=arr[iCnt]%10;
        if(((arr[iCnt]%11)==0)){   //&&((11*iDigit)==arr[iCnt])
           printf("%d ",arr[iCnt]);
        }
    }
    printf("\n");
}
int main(){
    int iSize=0,iCnt=0;
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
    display(p,iSize);
    
   
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 55 93 88
//output   : 66 55 88
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////