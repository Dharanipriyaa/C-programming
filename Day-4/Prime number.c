#include<stdio.h>
#include<stdbool.h>
int main(){
    int num;
    scanf("%d",&num);
    bool prime = true;

    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=0;
        }}
    if(prime){
        printf("prime");
    }    
    else{
            printf("Not a prime num");
        }
}
