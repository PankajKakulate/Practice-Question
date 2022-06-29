/////////////////////////////////////////////////////////////////
// Function name : ChkCapital()
// Description   : check wheather given char is Capital or not
// Input         : char
// Output        : bool
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool ChkCapital(char ch){
    if( ( (65<=ch) && (90>=ch) )){
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
    bRet=ChkCapital(cValue);
    if(bRet==true){
        printf("It is Capital Character\n");
    }else{
        printf("It is not a Capital Character\n");
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