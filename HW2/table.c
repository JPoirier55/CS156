//Jake Poirier
//HW2
//3/5/15
/* This program takes in two integers and creates a division table with
 *the numerator on the left and the denominator on the top
 *To exit the program enter 0 0;
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int width;
	int height;


	//while loop stays true until returning 0 and kicks out of loop
	while(1){
		printf("Width and height: \n");
		scanf("%d %d", &width, &height);


		//when user enters both 0 and 0 for width and height kick out of loop
		if(width ==0 && height ==0){
			printf("All done.\n");
			return 0;
		}

		else if(width <= 0 || height <= 0 || width > 100 || height > 100){
			printf("Please enter an integer between 1 and 99.\n");
		}else{
			//iterate through height and width to make table
			for(int j =0; j <=height; j++){
				for(int i = 0; i<= width; i++){

					//check for first location an print /
					if(i == 0 && j == 0 && width !=0){
						printf(" /");

						//check if equal then print spaces
					}else if( i == j){
						printf("       ");

						//check if either width or height are zero
						//to place table indices
					}else if(i == 0){
						printf("%2d", j);
					}else if(j == 0){
						printf("     %2d", i);
					}

					//if none of the above criteria are met,
					//print the value of height/width casted
					//to doubles
					else{
						double div = (double)j/(double)i;
						if(div > 9){
							printf(" %.3f", div);
						}else{
							printf("  %2.3f", div);
						}
					}

				}
				printf("\n");

			}
		}
	}

}


