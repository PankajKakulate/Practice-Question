/////////////////////////////////////////////////////////////////
// Accept one character from user and 
// check wheather that character is vowel (a,e,i,o,u) or not
/////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////////////
//Function Name : ChkVowel
//Description   : Accept one character from user and 
//                check wheather that character is vowel (a,e,i,o,u) or not
//input         : Character
//output        : Integer
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

int ChkVowel(char cValue){

    int iCnt=0;
   
    if(cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U'||cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u')
    {
        return TRUE;
    }else {
        return FALSE;
    }
   
}
int main(){
    char cValue='\0';
    BOOL bRet=FALSE;
    
    printf("Enter Characrter \n");
    scanf("%c",&cValue);

    bRet= ChkVowel(cValue);
    
    if(bRet==TRUE){
        printf("It is Vowel\n");
    }else{
        printf("It is not Vowel\n");
    }
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : A
//output   : It is Vowel
///////////////////////////////////////////////////////////////