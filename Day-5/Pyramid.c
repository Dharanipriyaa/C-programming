#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int temp =i;
        for(int s=0;s<(num-i)-1;s++){
            printf(" ");
        }
        for( int j=0;j<(i*2)+1;j++){
            printf("%d",abs(temp--)); //abs(i-j)
        }
        printf("\n");
    }
} 
