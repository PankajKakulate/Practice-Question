/////////////////////////////////////////////////////////////////
// Accept 1 number from user if number is less than 10 then
// print "Hello" otherwise print "Demo"
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//Function Name : Display
//Description   : if number is less than 10 then 
//                print "Hello" otherwise print "Demo" 
//input         : Integer
//output        : Void
//Date          : 24/04/2022
//Auther        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////

void Display(int iNo){
   
    if (iNo<10){
        printf("Hello");
        
    }else{
        printf("Demo");
    }
    
}
int main(){
    int iValue=0;
    
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}
///////////////////////////////////////////////////////////////
//input    : 11
//output   : Demo
///////////////////////////////////////////////////////////////