#include<stdio.h>
#include<stdlib.h>

   int n=4;
   int d[4][4];
   int min(int a,int b)
  {
     if(a>b)
     return b;
     else if(b>a)
     return a;
     else return a;
  } 


 
   void floyd(int d[4][4],int n)
  {  for(int k=0;k<n;k++)
      { for(int i=0;i<n;i++)
        { for(int j=0;j<n;j++)
	   {  d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	   }
        }
      }
	for(int i=0;i<n;i++)
        { for(int j=0;j<n;j++)
          printf("%d\t",d[i][j]);
		printf("\n");
        }
  }



   void main()
 { 
   printf("Enter the elements of the matrix\n");
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      scanf("%d",&d[i][j]);
   floyd(d,n);
    
 }
  


