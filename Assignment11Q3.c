/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// return the difference between largest and Smallest number.
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Diference()
//Description   : Accept N number from user and 
//                return the difference between largest and Smallest number.                
//input         : Integer
//output        : Integer
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int Diference(int arr[],int ilength){

    register int iCnt=0;
    int iMax=arr[0],iMin=arr[0];
    
    for(iCnt=1;iCnt<ilength;iCnt++){
        if((arr[iCnt]>iMax)){   
         iMax=arr[iCnt];
        }

        if((arr[iCnt]<iMin)){
            iMin=arr[iCnt];
        }
        
    }
   return (iMax-iMin);
    
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
    

    iRet= Diference(p,iSize);
    printf("Diference is: %d\n",iRet);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 85 66 3 66 93 88 
//          
//output   :Diference is:90
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////