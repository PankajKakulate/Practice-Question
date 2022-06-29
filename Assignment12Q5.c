/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// display below pattern.
// 2 4 6 8 10 12 14 16
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept N number from user and 
//                display below pattern.  
//                  2 4 6 8 10 12 14 16            
//input         : Integer
//output        : Void
//Date          : 20/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iNumber){
   
    for(int iCnt=1;iCnt<=iNumber;iCnt++){
       
        printf("%d\t",(iCnt*2));

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
//input    : N: 8
//          
//          
//output   : 2 4 6 8 10 12 14 16
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////