#include <stdio.h>
int main(){
    int a=10,b=5;
    char ch;
    printf("Enter an operator: ");
    scanf("%c",&ch);
    switch(ch){
        case '+' :{
            printf("%d",a+b);
            break;
        }
        case '-' :{
            printf("%d",a-b);
            break;
        }
        case '*' :{
            printf("%d",a*b);
            break;
        }
        case '/' :{
            printf("%d",a/b);
            break;
        }
     
    }
}