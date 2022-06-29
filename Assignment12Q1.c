/////////////////////////////////////////////////////////////////
// Accept N number from user and 
// display below pattern.
// A B C D E
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept N number from user and 
//                display below pattern.                
//input         : Integer
//output        : Void
//Date          : 16/05/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iNumber){
    register char ch='\0';
    for(int iCnt=0,ch='A';iCnt<iNumber;iCnt++,ch++){
        printf("%c\t",ch);
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
//output   :A B C D E
// Time Complexity: O(N)
///////////////////////////////////////////////////////////////
