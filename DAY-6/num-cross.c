#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for( int j=0;j<(i*2)+num;j++){
            if(i==j){
                printf("%d",i+1);
            }
            else if(i+j ==  (num-1)){
                printf("%d",j+1);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
} 