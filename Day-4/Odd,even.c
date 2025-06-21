
#include <stdio.h>

int main()
{
    //int num;
    //scanf("%d",&num);
    for(int i=0;i<10;i++){
    if(i%2==0){
        printf("%d",i);
        printf("-even\n");
    }
    else{
        printf("%d",i);
        printf("-odd\n");
    }
}

	return 0;
}