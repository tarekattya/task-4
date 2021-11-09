#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int M , N   ;
	printf("please entre the num of rows :  ");
	scanf("%d", &M);
		printf("please entre the num of colmns :  ");
	scanf("%d", &N);
	int array [M][N] ;
		for ( int i=0 ;i<M ; i++ )
	{
		for (  int j=0 ; j< N; j++)
		{
		array [i][j]=rand()%10 ;
		}
		printf("\n");
	}


	for ( int i=0 ;i<M ; i++ )
	{
		for (  int j=0 ; j< N; j++)
		{
			printf("%d \t", array[i][j]);
		}
		printf("\n");
	}

	int x ;
	printf("enter the number to find : ");
	scanf("%i" , &x);
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (x == array[i][j]){
                printf("found in array ");
            }
        
            else if ( x ==! array[i][j]){
                printf("not found in array ");
            }
        }
        
    }


	return 0;
	
}
