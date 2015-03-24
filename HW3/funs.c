/*Jake Poirier CS156 HW3 -- March 20, 2015 */


/* The purpose of this program is to show a basic UI and allow the user to 
enter a character which corresponds to the type of function they would like to run.
there is a help menu which can be accessed by typing h at the prompt:

		h = help
		q = quit
		a = show brief amendment description
		t = convert a temperature to a letter
*/

#include <stdio.h>

void print_menu();
void bill_of_rights();
char temp_to_letter(double);

int main(){
	/*Declaration of variables --> running is whether or not loop is running
	amendment is an int corresponding to the 10 choices of amendments
	temperature is the double corresponding to the user's input temp
	command is the char that the users inputs to navigate through the program
	*/

	int running = 1;
	int amendment;
	double temperature = 0.0;
	char command;
	
	//introduction to program
	printf("CS156 puts the \"shun\" in \"function\"! \n");
	
	//loop continues until q is pressed, thus making running = 0 and breaking out of the while loop
	//this loop keeps the program asking questions
	while(running == 1){
		printf("Do what? ");
		scanf("\n%c", &command);
		
		//switch statement that will use the user prompt to either print 
		//menu, ask for an amendment, ask temp, or quit
		switch(command){
			case 'h':
			print_menu();
			break;
			case 'q':
			running = 0;
			break;
			case 'a':
			printf("Which amendment? ");
			scanf("\n%d", &amendment);
			printf("Amendment #%d is ", amendment);
			bill_of_rights(amendment);
			break;
			case 't':
			printf("What temperature? ");
			scanf("\n%lf", &temperature);
			char tempChar = temp_to_letter(temperature);
			printf("%.1f is %c\n",temperature, tempChar);
			break;
			default:
			printf("Invalid command \'%c\'; \'h\' for help.\n", command); 
			break;
		}
		

	}
}
//print menu will print the menu that shows which key to press for each function
void print_menu(){
	printf("q - quit\nh - help\na - display a one-word summary of the given amendment\nt - translate a temperature to a feeling\n");
	
}
//bill of rights will take in an int and tell you the brief summary of that particular amendment
void bill_of_rights(int amendment){

	switch(amendment){
		case 1:
		printf("expression\n");
		break;
		case 2:
		printf("arms\n");
		break;
		case 3:
		printf("quartering\n");
		break;
		case 4:
		printf("search\n");
		break;
		case 5:
		printf("process\n");
		break;
		case 6:
		printf("speedy\n");
		break;
		case 7: 
		printf("jury\n");
		break;	
		case 8:
		printf("bail\n");
		break;
		case 9:
		printf("other\n");
		break;
		case 10:
		printf("states\n");
		break;
		default:
		printf("UNKNOWN\n");
		break; 
	}	
}
/*temp to letter will take in a double from the user as a temperature and return a character letter
corresponding to that particular temperature range
*/
char temp_to_letter(double temperature){
	if(temperature >= 212)
		return 'B';
	else if(temperature >= 100 && temperature <212)
		return 'H';
	else if(temperature >= 70 && temperature < 100)
		return 'W';
	else if(temperature >= 50 && temperature < 70)
		return 'N';
	else if(temperature >= 32 && temperature < 50)
		return 'C';
	else
		return 'F';
	
}
