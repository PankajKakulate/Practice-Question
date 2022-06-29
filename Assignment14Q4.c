/////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and
// display below pattern.
// 4 4 4 4 4
// 3 3 3 3 3
// 2 2 2 2 2
// 1 1 1 1 1
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept number of rows and number of columns from user and
//                display below pattern.  
//                  4 4 4 4 4
//                  3 3 3 3 3
//                  2 2 2 2 2
//                  1 1 1 1 1          
//input         : Integer,Integer
//output        : Void
//Date          : 21/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol){
  
    for(int i=iRow;i>0;i--){
        
            for(int j=1;j<=iCol;j++){
            
            printf("%d\t",i);
        
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
//input    : 4  5
//          
//          
//output   : 
// 4 4 4 4 4
// 3 3 3 3 3
// 2 2 2 2 2
// 1 1 1 1 1
//           
// Time Complexity: O(2N)
///////////////////////////////////////////////////////////////