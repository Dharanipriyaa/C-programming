
#include <stdio.h>

int main()
{
    int a=10,b=2,temp;
    /*temp = a;
    a = b;
    b =temp;
    printf("a = %d, b = %d",a,b);*/
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a= %d ,b =%d",a,b);
    return 0;
}

