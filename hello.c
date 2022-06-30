#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      for(i=1;i<=(n*2-1);i++)
      {
          for(j=1;j<=(n*2-1);j++)
          {
              if(i==j&&j==n)
              printf("%d ",n/n);
              else if((j==2&&i==2)&&j!=n)
              printf("%d ",n-1);
              else
              printf("%d ",n);
              
          }
          
          printf("\n");
      }
    return 0;
}
