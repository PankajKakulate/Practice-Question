/////////////////////////////////////////////////////////////////
// Function name : DisplaySchedule()
// Description   : Accept division of student from user and depends ion the division display exam timing.
// Input         : char
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<ctype.h>
void DisplaySchedule(char ch){
    ch=toupper(ch);
   switch (ch)
   {
   case 'A': printf("Your exam at 7 AM\n");break;
   case 'B': printf("Your exam at 8.30 AM\n");break;
   case 'C': printf("Your exam at 9.20 AM\n");break;
   case 'D': printf("Your exam at 10.30 AM\n");break;
    
   
   default:printf("invalid division\n");
    break;
   }
}
int main(){
    char cValue='\0';
    

    printf("Enter the division: \n");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);
    
    return 0;
    }

/*
input           : C
output          : Your exam at 9.20 AM
input           : d
output          : Your exam at 10.30 AM
Time Complexity : O(N)
*/