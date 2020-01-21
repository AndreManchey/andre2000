#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,r,c,sum,mat1[100][100],min,max;
	float mean;
	printf("\n Maximum Value on System %d",RAND_MAX);

	//Entering Dimension of Matrix//

	printf("\n enter no. of rows of matrix");
	scanf("%d",&r);
	printf("\n Enter no. of columns of Matrix");
	scanf("%d",&c);


	//Randomising Matrix Values//

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mat1[i][j]=rand()%101;
		}
	}

	//Displaying Entered Matrix//

	printf("\nEntered matrix is : \n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",mat1[i][j]);

		}
		printf("\n");
	}


	//Row wise -mean,minimum and max of the matrices//

/*	for(i=0;i<r;i++)
	{
		min=mat1[i][0];
		max=mat1[i][0];

	 	for(j=0;j<c;j++)
	  	{
	 		if(mat1[i][j]<min)
	 			min=mat1[i][j];

	 		else if(mat1[i][j]>max)
	 			max=mat1[i][j];

	   		sum+=mat1[i][j];
	 	 }

	  	mean=sum/c;

	  	printf("For Row - %d \n",i);
	  	printf("min - %d \n",min);
	  	printf("max Row - %d \n",max);
	  	printf("mean Row - %f \n",mean);
	}
*/
	for(j=0;i<c;j++)
	{
		min=mat1[0][j];
		max=mat1[0][j];

	 	for(i=0;j<r;i++)
	  	{
	 		if(mat1[i][j]<min)
	 			min=mat1[i][j];

	 		else if(mat1[i][j]>max)
	 			max=mat1[i][j];

	   		sum+=mat1[i][j];
	 	 }

	  	mean=sum/r;

	  	printf("For column - %d \n",j);
	  	printf("min - %d \n",min);
	  	printf("max column - %d \n",max);
	  	printf("mean column - %f \n",mean);
	}
}

