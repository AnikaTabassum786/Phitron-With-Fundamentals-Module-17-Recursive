#include<stdio.h>

void hello(int i,int n){
    if(i==0){
     return;
    }
    printf("%d\n",i);
    hello(i-1,n);
}

int main(){

    int n;
    scanf("%d",&n);

    int i=n;
    hello(i,n);

    return 0;
}