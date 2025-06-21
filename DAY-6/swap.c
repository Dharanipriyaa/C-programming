#include<stdio.h>
void swap()
{
    //function definition
    int a=5,b=7;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
    
}
int main(){
//function call
swap();
return 0;
}