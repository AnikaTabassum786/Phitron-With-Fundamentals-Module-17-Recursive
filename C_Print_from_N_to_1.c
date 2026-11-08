#include<stdio.h>

void recursion(int i,int n){
    if(i==n+1){
      return ;
    }
    
    recursion(i+1,n);
    printf("%d",i);

    if(i>1){
        printf(" ");
    }
}

int main(){

    int i=1,n;
    scanf("%d",&n);
    recursion(i,n);
    return 0;
}