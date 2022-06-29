/////////////////////////////////////////////////////////////////
// Accept N number from user and check wheather that numbers 
// contains 11 in it or not.
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : check()
//Description   : Accept N number from user and check wheather that numbers
//                contains 11 in it or not.
//input         : Integer
//output        : bool
//Date          : 07/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

bool check(int arr[],int ilength){

    int iCnt=0;
    for(iCnt=0;iCnt<ilength;iCnt++){
        if((arr[iCnt]==11)){   
         break;
        }
        
    }
    if(iCnt==ilength){
        return false;
    }else{
        return true;
    }
}
int main(){
    int iSize=0,iCnt=0;
    bool bRet=false;
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
    bRet=check(p,iSize);
    if(bRet==true){
        printf(" 11 is present\n");
    }else{
        printf(" 11 is absent\n");
    }

    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 11 80 93 88 
//output   : 11 is present
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////