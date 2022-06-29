/////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and
// display below pattern.
// * # * #
// * # * #
// * # * #
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept number of rows and number of columns from user and
//                display below pattern.  
//                  * # * #           
//                  * # * #           
//                  * # * #           
//input         : Integer,Integer
//output        : Void
//Date          : 21/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol){
   
    for(int i=1;i<=iRow;i++){
       for(int j=1;j<=iCol;j++){
        if((j%2)==0){
            printf("#\t");
        }else{
            printf("*\t");
        }
       }
        printf("\n");
    }
    printf("\n");
}
int main(){
    int iValue1=0,iValue2=0;
    printf("Enter number of elements\n");
    scanf("%d %d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);

    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 4  3
//          
//          
//output   : 
//           5 4 3 2 1
//           5 4 3 2 1
//           5 4 3 2 1
// Time Complexity: O(2N)
///////////////////////////////////////////////////////////////