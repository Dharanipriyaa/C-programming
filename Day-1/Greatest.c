#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    (a>b && a>c && a>d)? printf("%d",a): (b>c && b>a && b>d) ? printf("%d",b):(c>a && c>b && c>d)?printf("%d",c): printf("%d",d);
    return 0;
}