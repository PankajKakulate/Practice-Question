/////////////////////////////////////////////////////////////////
// Accept one character from user and convert case of that character
// 
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : DisplayConvert
//Description   : Accept one character from user and 
//                convert case of that character
//input         : Character
//output        : Void
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue){

    if(cValue>=65 && cValue<=90)
    {
        printf("%c",cValue+32);
    }else if (cValue>=90 && cValue<=122){
        printf("%c",cValue-32);
    }
    
    printf("\n");
}
int main(){
    char cValue=0;
    
    printf("Enter Character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : A
//output   : a
///////////////////////////////////////////////////////////////