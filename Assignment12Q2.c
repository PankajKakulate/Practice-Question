/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// display below pattern.
// 5 # 4 # 3 # 2 # 1 #
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept N number from user and 
//                display below pattern.  
//                   5 # 4 # 3 # 2 # 1 #              
//input         : Integer
//output        : Void
//Date          : 20/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iNumber){
   
    for(int iCnt=iNumber;iCnt>0;iCnt--){
        printf("%d\t#\t",iCnt);
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
//output   : 5 # 4 # 3 # 2 # 1 #
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////