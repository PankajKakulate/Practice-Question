/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// return product of all odd elements.
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Product()
//Description   : Accept N number from user and 
//                return product of all odd elements.                
//input         : Integer
//output        : Integer
//Date          : 08/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int Product(int arr[],int ilength){

    register int iCnt=0;
    int iProduct=1;
    for(iCnt=0;iCnt<ilength;iCnt++){
        if((arr[iCnt]%2)!=0){   
         iProduct*=arr[iCnt];
        }
        
    }
   return iProduct;
    
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
    

    iRet= Product(p,iSize);
    printf("Product of all odd number is: %d\n",iRet);
    free(p);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 6
//          Elements : 15 66 3 70 10 88 
//          No: 66
//output   :Product of all odd number is: 45
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////