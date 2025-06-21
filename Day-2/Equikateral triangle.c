#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 sides: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a,b,c >0){
    if(a==b && b==c){
        printf("Its an equilateral triangle.");
    }
    else if(a+b>c || a+c>b || b+c>a){
        printf("Its an right angled triangle.");
    }
    else{
       printf("It is not a triangle.");
    }}
    else{
        printf("It is not a triangle");
    }
    return 0;
}

