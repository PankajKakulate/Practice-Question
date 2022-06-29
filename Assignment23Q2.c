/////////////////////////////////////////////////////////////////
// Function name : DisplayCamel()
// Description   : Accept character from user. if char is small display its corresponding capital char , and if it small then display its corresponding capital. in other cases display as it is.
// Input         : char
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<ctype.h>
void DisplayCamel(char ch){
    if(ch>=65 && ch<=90){
        printf("%c\n",tolower(ch));
    }else if(ch>=97 && ch<=122){
        printf("%c\n",toupper(ch));
    }else{
        printf("%c\n",ch);
    }
  
}
int main(){
    char cValue='\0';
    

    printf("Enter the char: \n");
    scanf("%c",&cValue);
    DisplayCamel(cValue);
    
    return 0;
    }

/*
input           : Q
output          : q
input           : m
output          : M
input           : 4
output          : 4
input           : %
output          : %


Time Complexity : O(N)
*/