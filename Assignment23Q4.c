/////////////////////////////////////////////////////////////////
// Function name : CheckSpecial()
// Description   : Accept character from user. and check whether it is special symbol or not. 
// Input         : char
// Output        : bool
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckSpecial(char ch){
    
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
       return false;
    }else {
        return true;
    }
 
}
int main(){
    char cValue='\0';
    bool bRet=false;

    printf("Enter the char: \n");
    scanf("%c",&cValue);
    bRet=CheckSpecial(cValue);

    if(bRet==true){
        printf("It is special character\n");
    }else{
        printf("It is not special character\n");

    }
    return 0;
    }

/*
input           : Q
output          : false
input           : %
output          : true 


Time Complexity : O(N)
*/