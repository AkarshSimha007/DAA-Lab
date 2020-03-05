#include<stdio.h>
#include<stdlib.h>

   int n=4;
   int r[4][4];
   int max(int a,int b)
  {
     if(a>b)
     return a;
     else if(b>a)
     return b;
     else return a;
  } 


 
   void warshall(int r[4][4],int n)
  {  for(int k=0;k<n;k++)
      { for(int i=0;i<n;i++)
        { for(int j=0;j<n;j++)
	   {  r[i][j]=max(r[i][j],r[i][k]&&r[k][j]);
	   }
        }
      }
	for(int i=0;i<n;i++)
        { for(int j=0;j<n;j++)
          printf("%d\t",r[i][j]);
		printf("\n");
        }
  }



   void main()
 { 
   printf("Enter the elements of the matrix\n");
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      scanf("%d",&r[i][j]);
   warshall(r,n);
    
 }
  

