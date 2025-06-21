#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for( int j=0;j<(i*2)+num;j++){
            if(i==j){
                printf("%c",'A'+i);
            }
            else if(i+j ==  (num-1)){
                printf("%c",'A'+j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

