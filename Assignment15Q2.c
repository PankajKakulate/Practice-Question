
/////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and
// display below pattern.
// 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10
// 1 3 5 7 9
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept number of rows and number of columns from user and
//                display below pattern.  
//                  2 4 6 8 10
//                  1 3 5 7 9
//                  2 4 6 8 10
//                  1 3 5 7 9
//input         : Integer,Integer
//output        : Void
//Date          : 21/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol){
   int iCnt=0;
    for(int i=1;i<=iRow;i++){
            iCnt=1;
            for(int j=1;j<=iCol;j++){
                
                if((i%2)==0){
                    printf("%d\t",iCnt);
                    iCnt=iCnt+2;
                }else{
                    printf("%d\t",j*2);
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
//input    : 4  4
//          
//          
//output   : 
// 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10
// 1 3 5 7 9
//           
// Time Complexity: O(2N)
///////////////////////////////////////////////////////////////