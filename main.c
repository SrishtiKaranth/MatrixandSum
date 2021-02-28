#include <stdio.h>
void main()
{
  int array[3][3],a,b,sum;
       printf("Enter the elements of the array \n");
  for(a=0;a<3;a++)
  {
      for(b=0;b<3;b++)
      {
	      printf("element - [%d],[%d] : ",a,b);
	      scanf("%d",&array[a][b]);
      }
  }

 printf("The matrix is : \n");
  for(a=0;a<3;a++)
  {printf("\n");
      for(b=0;b<3;b++)
           printf("%d \t",array[a][b]);
  }
 printf("\n");
 for(a= 0;a< 3;a++)
  	{
   		sum= sum+ array[a][a];
  	}

 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d",sum );

 return;
}
