
#include <stdio.h>

int main()
{
    int num,mul =1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        mul*=i;
    }
     printf("%d",mul);
}