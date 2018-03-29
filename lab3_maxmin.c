#include <stdio.h>
/*	This program simply takes numbers from user and stops 
when a negative number is entered. 
prints the status, max and min values of inputs
status is -1 if the first entry is not positive
 */
int getMinAndMax(int *min, int *max );

int main(){
	printf("Enter positive values \n");
	int status=0, max=0, min=0; 
	status= getMinAndMax(&min, &max);

	printf("s:%d, min:%d, max:%d\n",status, min, max );
	
	return 0;
} 

int getMinAndMax(int *min, int *max ){
	int number, status=0, minn=1000, maxx=-1000;

	scanf("%d", &number);
	if(number<=0)
		status=-1;//error

	while(number>0){
		if(number>maxx)
			maxx=number;
		if(number<minn)
			minn=number;

		scanf("%d", &number);//next element
	}
	*min=minn;
	*max=maxx;

	return status; 
}

