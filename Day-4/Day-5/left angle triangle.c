#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int s=0;s<(num-i)-1;s++){
            printf(" ");
        }
        for( int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
} 