
/////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and
// display below pattern.
//  * * * #
//  * * # @
//  * # @ @
//  # @ @ @      
//  
//  
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept number of rows and number of columns from user and
//                display below pattern.  
//                  * * * #
//                  * * # @
//                  * # @ @
//                  # @ @ @ 
//input         : Integer,Integer
//output        : Void
//Date          : 21/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol){
    
    for(int i=iRow;i>0;i--){
       
            for(int j=1;j<=iCol;j++){
               if(i==j){
                    printf("#\t");
               }else if(i<j){
                printf("@\t") ;               
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
    
    if(iValue1 !=iValue2){
        printf("Invalid input! row and column needs to be same ");
    }else{
        Pattern(iValue1,iValue2);
    }
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 4 4
//          
//          
//output   : 
//  * * * #
//  * * # @
//  * # @ @
//  # @ @ @ 
//           
// Time Complexity: O(2N)
///////////////////////////////////////////////////////////////