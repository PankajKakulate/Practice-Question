/////////////////////////////////////////////////////////////////
// Function name : ChkDigit()
// Description   : check wheather given char is Digit or not
// Input         : char
// Output        : bool
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char ch){
    if( ( (48<=ch) && (57>=ch) )){
        return true;
    }else{
        return false;
    }
}
int main(){
    char cValue='\0';
    bool bRet=false;

    printf("Enter the Character: \n");
    scanf("%c",&cValue);
    bRet=ChkDigit(cValue);
    if(bRet==true){
        printf("It is Digit\n");
    }else{
        printf("It is not a Digit\n");
    }
    return 0;
    }

/*
input           : 7
output          : True
input           : d
output          : False
Time Complexity : O(N)
*/