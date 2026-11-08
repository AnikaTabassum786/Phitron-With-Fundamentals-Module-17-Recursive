#include <stdio.h>

void love(int i,int n)
{
 if(i==n){
    return;
   }
    printf("I love Recursion\n");
    love(i+1,n);
}

int main()
{
    int i,n;
    scanf("%d",&n);
    love(i,n);
    return 0;
}