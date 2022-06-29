/////////////////////////////////////////////////////////////////
// Function name : struprX()
// Description   : Write a program which accept string from user and display it in Lower Case.
// Input         : char *
// Output        : Void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
void struprX(char *str){
   int iCnt=0; 
   while (*str !='\0')
   {
    printf("%c",toupper(str[iCnt]));
    str++;
   }
   
   printf("\n");
   
 
}
int main(){
    char cValue[20];
    

    printf("Enter the String: \n");
    scanf(" %[^'\n']s",cValue);
    struprX(cValue);
   

    return 0;
    }

/*
input           : MarvellouS
output          : MARVELLOUS



Time Complexity : O(N)
*/