/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// display below pattern.
// # 1 * # 2 * # 3 * # 4 *
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept N number from user and 
//                display below pattern.  
//                   # 1 * # 2 * # 3 * # 4 *            
//input         : Integer
//output        : Void
//Date          : 20/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iNumber){
    printf("#\t");
    for(int iCnt=1;iCnt<=iNumber;iCnt++){
        if(iCnt==iNumber){
        printf("%d\t*",iCnt);

        }else{

        printf("%d\t*\t#\t",iCnt);
        }
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
//input    : N: 4
//          
//          
//output   : # 1 * # 2 * # 3 * # 4 *
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////