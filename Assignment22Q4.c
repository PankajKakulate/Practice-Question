/////////////////////////////////////////////////////////////////
// Function name : ChkSmall()
// Description   : check wheather given char is Small case or not
// Input         : char
// Output        : bool
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool ChkSmall(char ch){
    if( ( (97<=ch) && (122>=ch) )){
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
    bRet=ChkSmall(cValue);
    if(bRet==true){
        printf("It is Small case Character\n");
    }else{
        printf("It is not a Small case Character\n");
    }
    return 0;
    }

/*
input           : g
output          : True
input           : D
output          : False
Time Complexity : O(N)
*/