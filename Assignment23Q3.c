/////////////////////////////////////////////////////////////////
// Function name : DisplayCamel()
// Description   : Accept character from user. if char is capital then display all the character from the input char til z. if input character is small then print all the char in reverse order till a. In other cases return directly. 
// Input         : char
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<ctype.h>
void DisplayCamel(char ch){
    char cCnt='\0';
    if(ch>=65 && ch<=90){
        for(cCnt=ch;cCnt<=90;cCnt++){
            printf("%c ",cCnt);
        }
    }else if(ch>=97 && ch<=122){
        for(cCnt=ch;cCnt>=97;cCnt--){
            printf("%c ",cCnt);
        }
    }else{
        printf("%c\n",ch);
    }
  printf("\n");
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
output          : Q R S T U V W X Y Z
input           : e
output          : e d c b a 
input           : 4
output          : 4

Time Complexity : O(N)
*/