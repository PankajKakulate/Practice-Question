/////////////////////////////////////////////////////////////////
// Function name : DisplayASCII()
// Description   : Display ASCII table
// Input         : Nothing
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<ctype.h>
void DisplayASCII(){
    printf("Dec Hex oct Char \n");
    for(int iCnt=0;iCnt<255;iCnt++){
        printf("%d  %x  %o  %c\n",iCnt,iCnt,iCnt,iCnt);
    }
 
}
int main(){
   
    DisplayASCII();
    
    return 0;
    }

/*
input           : 
output          : 
Time Complexity : O(N)
*/