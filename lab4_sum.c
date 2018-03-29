#include <stdio.h>
/*	This program simply takes an input from user and prints
 the sum of numbers up to it from 1
 for instance  
 if line =4 prints
 1 = 1
 1 + 2 = 3
 1 + 2 + 3 = 6
 1 + 2 + 3 + 4 = 10
 */
int main(){
	int line, i, j, sum=1;

	printf("Enter  a line number: \n");
	scanf("%d", &line);

	for(i=1; i<=line; i++){
		sum=1;
		if(i==1)
			printf("1 = 1 \n");
		else{
			printf("1 ");
			for(j=2; j<=i; j++){
				printf("+ %d ", j );
				sum+=j;
			}
			printf("= %d\n",sum );
		}
	}

	return 0;
}