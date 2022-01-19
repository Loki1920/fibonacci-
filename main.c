#include<stdio.h>
int main()
{
  int a,b,n,i,result;
  printf("number of terms :");
  scanf("%d",&n);

  a=0;
  b=1;
  for(i=1;i<=n;i++)
  {
    printf("%d\n",a);
    result = a+b;
    a=b;
    b=result;
    
  }
  return 0;
}