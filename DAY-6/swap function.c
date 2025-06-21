#include<stdio.h>
int swap(int a,int b)
{
    //function definition
    //swap--function variable
    a=a^b;
    b=a^b;
    a=a^b;
    return a;
    
}
int main(){
//function call
printf("%d\n",swap(10,5)); //(10,5)--arguments /parameters
printf("%d\n",swap(3,4));
printf("%d\n",swap(2,1));
printf("%d\n",swap(4,9));
return 0;
}