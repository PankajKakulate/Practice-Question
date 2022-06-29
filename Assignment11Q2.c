/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// return the Smallest number.
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Minimum()
//Description   : Accept N number from user and 
//                return the Smallest number.                
//input         : Integer
//output        : Integer
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int Minimum(int arr[],int ilength){

    register int iCnt=0;
    int iMin=arr[0];
    for(iCnt=1;iCnt<ilength;iCnt++){
        if((arr[iCnt]<iMin)){   
         iMin=arr[iCnt];
        }
        
    }
   return iMin;
    
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
    

    iRet= Minimum(p,iSize);
    printf("Smallest number is: %d\n",iRet);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 66 93 88 
//          
//output   :Smallest number is:  3
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////