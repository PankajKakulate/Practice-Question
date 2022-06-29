/////////////////////////////////////////////////////////////////
// Function name : ChkAlpha()
// Description   : check wheather given char is Alphabet or not
// Input         : char
// Output        : bool
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char ch){
    if( ( (65<=ch) && (90>=ch) ) || ( (97<=ch) && (122>=ch) )){
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
    bRet=ChkAlpha(cValue);
    if(bRet==true){
        printf("It is Character\n");
    }else{
        printf("It is not Character\n");
    }
    return 0;
    }

/*
input           : F
output          : True
input           : &
output          : False
Time Complexity : O(N)
*/