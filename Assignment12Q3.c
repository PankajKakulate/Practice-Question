/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// display below pattern.
// 1 * 2 * 3 * 4 * 5 *
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept N number from user and 
//                display below pattern.  
//                   1 * 2 * 3 * 4 * 5 *             
//input         : Integer
//output        : Void
//Date          : 20/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iNumber){
    
    for(int iCnt=1;iCnt<=iNumber;iCnt++){
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}
int main(){
    int iValue=0;
    printf("Enter number of elements\n");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;

}
///////////////////////////////////////////////////////////////
//input    : N: 5
//          
//          
//output   : 1 * 2 * 3 * 4 * 5 *
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////