#include <stdio.h>
int main(){
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch<='Z' || ch>='a' && ch<='z'){
        printf("Its an alphabet.");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Its a number.");
    }
    else{
        printf("Its a special character.");
    }
    return 0;
}