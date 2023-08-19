#include<stdio.h>
/*
1
21
321
4321
54321
*/
main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d",(i-j+1));
    }
    printf("\n");
  }
  
}
