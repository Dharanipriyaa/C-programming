#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
     num=(num*2)+1;
    for(int i=0;i<=num/2;i++){
        if(i<num/2){
        for( int j=0;j<=i;j++){
            printf("*");
        }
            for(int s = 0;s<num-((i*2)+2);s++){
                printf(" ");
            }
            for(int k=0;k<=i;k++){
                printf("*");
            }}
    else if(i==num/2){
        for( int j=0;j<num;j++){
            printf("*");
        }
    }
        
        printf("\n");
    }
    for(int j=(num/2)-1;j>=0;j--){
        if(j==num/2){
        for( int i=0;i<num;i++){
            printf("*");
        }}
    
    else if (j<num/2){
        for( int i=0;i<=j;i++){
            printf("*");
        }
            for(int s = 0;s<num-((j*2)+2);s++){
                printf(" ");
            }
            for(int k=0;k<=j;k++){
                printf("*");
            }}
        
        printf("\n");
    }
}
