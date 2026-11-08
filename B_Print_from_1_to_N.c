#include<stdio.h>

void recursion(int i,int n){
    if(i==n+1){
      return ;
    }
    printf("%d\n",i);
    recursion(i+1,n);
}

int main(){

    int i=1,n;
    scanf("%d",&n);
    recursion(i,n);
    return 0;
}