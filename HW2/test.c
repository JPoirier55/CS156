#include <stdio.h>
#include <ctype.h>

int main(){
	char x;
	int y;
	printf("Enter a number");
	if(scanf("%d", &y)==1){
	printf("Y = %d" , y);
	}else{
	printf("Not a digit");
	}
	return 0; 
}
