/////////////////////////////////////////////////////////////////
// Function name : Display()
// Description   : Accept character from user. and display its ASCII value in decimal, octal and hexadecimal format.
// Input         : char
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(char ch){
    
    printf(" dec oct Hex\n");
    printf("%d  %o  %x ",ch,ch,ch);
 
}
int main(){
    char cValue='\0';
   

    printf("Enter the char: \n");
    scanf("%c",&cValue);
    Display(cValue);

    
    return 0;
    }

/*
input           : A
output          : dec oct Hex
                   65 0101 0x41



Time Complexity : O(N)
*/