//largest of two no's using if else
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a ,&b);
    if(a>b){
        printf("%d is the largest\n",a);
}else if(a<b){
    printf("%dis the largest\n",b);
}else{
    printf("both are equal\n");
}
return 0;
}
