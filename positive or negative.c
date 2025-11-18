//positive,negative or zero
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    if(a>0){
        printf("given no is positive\n");
    }else if(a<0){
        printf("given no is negative\n");
    }else{
        printf("given no is zero\n");
    }
    return 0;
}
