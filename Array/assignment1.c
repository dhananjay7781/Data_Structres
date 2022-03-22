

#include <stdio.h>

void print_arr(int (*arr) [3][3] , int plane )
{
	printf("plane %d:\n",plane);

	for(int i=0 ; i<3 ; ++i)
	{
		for(int j=0 ; j<3 ; ++j)
		{
			printf("%d ",arr[plane][i][j]);
		}
		printf("\n");
	}

}

void main() {
	int i , j ,k ,t ;

	int arr[2][3][3] = {{1,2,3,4,5,6,7,8,9},{1,12,13,14,15,16,17,3,9}};
	
//	printf("plane 1:\n");
	print_arr(arr , 0);
//	printf("plane 2:\n");
	print_arr(arr , 1);
	int check ;
	printf("Same Elements in two plane:\n");
	for(i=0 ; i<3 ; ++i)
	{
		for(j=0 ; j<3 ; ++j)
		{ 
			check = 0 ;

                 	for(k=0 ; k<3 ; ++k)
			{
				for(t=0 ; t<3 ; ++t)
				{
					if(arr[0][i][j] == arr[1][k][t])
					{
						check = 1 ;
						printf("%d  ",arr[0][i][j]);
						break;
					}
				}

					if(check==1)
					{
						break ;
					}
		
			}
			if(check == 1)
			{
				++arr[0][i][j] ;
				++arr[1][k][t] ;
				break;
			}
	
		}
	}
	printf("\n");
	print_arr(arr , 0);
	print_arr(arr , 1);

	printf("\n");	
}
