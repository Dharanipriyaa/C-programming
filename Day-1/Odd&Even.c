
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("The number is even.");
    }
    else if(a%2 != 0){
        printf("The number is odd.");
    }
    else{
        printf("Enter a valid number.");
    }
    return 0;
} 
