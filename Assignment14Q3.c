/////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and
// display below pattern.
// A A A A A 
// B B B B B
// C C C C C
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : Pattern()
//Description   : Accept number of rows and number of columns from user and
//                display below pattern.  
//                  A A A A A            
//                  B B B B B           
//                  C C C C C          
//input         : Integer,Integer
//output        : Void
//Date          : 21/06/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol){
  register char ch='\0';
    for(int i=1, ch='A';i<=(iRow);i++,ch++){
        
            for(int j=1;j<=iCol;j++){
            
            printf("%c\t",ch);
        
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
//input    : 3  5
//          
//          
//output   : 
//           A A A A A 
//           B B B B B  
//           C C C C C 
//           
// Time Complexity: O(2N)
///////////////////////////////////////////////////////////////