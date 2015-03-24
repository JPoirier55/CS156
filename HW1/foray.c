#include <stdio.h>

int main(){

	int x,y;
	
	printf("Enter the two numbers: ");
	scanf("%d %d", &x, &y);
	
	printf("Dividing %d by %d gives us %f.\n", x,y,((double)x/(double)y));
	if(x > y){
		printf("The difference is %d.\n" , x-y);
		printf("%d is larger.\n", x);
		
	}else if(x == y){
		printf("%d and %d are equal.\n", x, y);
	}else{
		printf("The difference is %d.\n", y-x);
		printf("%d is larger.\n", y);
	}
	if(x % 7 == 0 && y % 7 ==0)
		printf("Both are  divisible by seven.\n");
	else if(x % 7 ==0)
		printf("Only %d is divisible by seven.\n" , x);
	else if( y%7==0)
		printf("Only %d is divisible by seven.\n" , y);
	else	printf("Neither are divisible by seven.\n");
}
