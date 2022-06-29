/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// return the largest number.
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Maximum()
//Description   : Accept N number from user and 
//                return the largest number.                
//input         : Integer
//output        : Integer
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int Maximum(int arr[],int ilength){

    register int iCnt=0;
    int iMax=arr[0];
    for(iCnt=1;iCnt<ilength;iCnt++){
        if((arr[iCnt]>iMax)){   
         iMax=arr[iCnt];
        }
        
    }
   return iMax;
    
}
int main(){
    int iSize=0,iRet=0;
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
    

    iRet= Maximum(p,iSize);
    printf("Largest number is: %d\n",iRet);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 66 93 88 
//          
//output   :Largest number is:  93
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////