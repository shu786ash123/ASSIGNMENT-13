#include<stdio.h>
int sum(int);
int main()
{
       int x,s;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       s = sum(x);
       printf("SUM OF FIRST %d ODD NATURAL NUMBER IS %d ",x,s);
       return 0;
}
int sum(int n)
{
       if(n==1)
              return 1;
       return (2*n-1+sum(n-1));
}

