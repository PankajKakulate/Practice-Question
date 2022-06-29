/////////////////////////////////////////////////////////////////
// Accept N number from user and accept Range,
// Display all element from that range
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Range()
//Description   : Accept N number from user and accept Range,
//                Display all element from that range                
//input         : Integer
//output        : void
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Range(int arr[],int ilength,int iStart,int iEnd){

    register int iCnt=0;
    printf("Numbers in Range are :\n");
    for(iCnt=0;iCnt<ilength;iCnt++){
        if((iStart<arr[iCnt])&& (iEnd>arr[iCnt])){   
          printf("%d ",arr[iCnt]);
         
        }
        
    }
    printf("\n");
    
}
int main(){
    int iSize=0,iStart=0,iEnd=0;
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
    printf("Enter the START number \n");
    scanf("%d",&iStart);

    printf("Enter the END number \n");
    scanf("%d",&iEnd);

    Range(p,iSize,iStart,iEnd);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 76 93 88 
//          No: 66
//output   :Numbers in range Are: 85 66 76 88
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////