#include <stdio.h>
#include <stdlib.h>
#include <string.h>		// to define a variable type and support the arrays of characters

typedef int bool;		// we used boolean to activate and deactivate the the status like 0/1
#define true 1
#define false 0

struct coffee {			//the object (coffee) include 4 components
	char name[20];		// the name of the coffee
	int  price;			// the price of it
	int  quantity;		// the quantity that the machine has
	int id;				// the id of this coffee 
};
	
int main(int argc, char *argv[]) {
	int order = 0;					//the option that will be chosen by customer
	bool temp = true;				//activating the boolean (1)
	
	struct coffee c2 = {"Turkish Coffee", 	(int)8 , (int)10, (int)2};		//assigning values into the structure (attributes)
	struct coffee c3 = {"American Coffee", 	(int)10, (int)02, (int)3}; 		//
	struct coffee c4 = {"Capuccino", 		(int)11, (int)10, (int)4};		//
	struct coffee c5 = {"Espresso", 		(int)9 , (int)10, (int)5};		//
	struct coffee c6 = {"Latte", 			(int)12, (int)10, (int)6};		//
	struct coffee c7 = {"Mocha", 			(int)12, (int)10, (int)7};		//
	
	while(temp){
		
		printf("Welcome to my Coffee Mechine \n\n\n");
		printf("%1s%15s		%6s		%6s\n\n", "Number" ,"Type","Price", "Avalable cups");
		
		printf("%3d 	%15s		%5.0d		%3d\n",c2.id, c2.name,c2.price, c2.quantity);			//printing the: Codes (ids), coffee types and prices in order
		printf("%3d 	%15s		%5.0d		%3d\n",c3.id, c3.name,c3.price, c3.quantity);			//
		printf("%3d 	%15s		%5.0d		%3d\n",c4.id, c4.name,c4.price, c4.quantity);			//
		printf("%3d 	%15s		%5.0d		%3d\n",c5.id, c5.name,c5.price, c5.quantity);			//
		printf("%3d 	%15s		%5.0d		%3d\n",c6.id, c6.name,c6.price, c6.quantity);			//
		printf("%3d 	%15s		%5.0d		%3d\n",c7.id, c7.name,c7.price, c7.quantity);			//
		
		printf("\n\n What would you like to drink? enter the number of the coffee type please :) \n");
		scanf("%d",&order);
		
		if (order == c2.id){										//using if and else if ,the program will decrease the amount of coffee cups 
			if(c2.quantity>0){										//according to the customer's choice
				c2.quantity = c2.quantity-1;						//when the customer choose a cup, its quantity decreased by one (-1)
				printf("Enjoy the drink!\n");						//the order is done
			} else {												//
				printf("Sorry! Please choose another type. \n");		//when the quantity is consumed the machine offer another choice
			}
		} else if (order == c3.id){									//
			if(c3.quantity>0){										//
				c3.quantity = c3.quantity-1;						//
				printf("Enjoy the drink!\n");						//
			} else {												//
				printf("Sorry! Choose another type. \n");			//
			}
		} else if (order == c4.id){									//
			if(c4.quantity>0){										//
				c4.quantity = c4.quantity-1;						//
				printf("Enjoy the drink!\n");						//
			} else {												//
				printf("Sorry! Choose another type. \n");			//
			}
		} else if (order == c5.id){									//
			if(c5.quantity>0){										//
				c5.quantity = c5.quantity-1;						//
				printf("Enjoy the drink!\n");						//
			} else {												//
				printf("Sorry! Choose another type. \n");			//
			}
		} else if (order == c6.id){									//
			if(c6.quantity>0){										//
				c6.quantity = c6.quantity-1;						//
				printf("Enjoy the drink!");							//
			} else {												//
				printf("Sorry! Choose another type. \n");			//
			}
		} else if (order == c7.id){									//
			if(c7.quantity>0){										//
				c7.quantity = c7.quantity-1;						//
				printf("Enjoy the drink!\n");						//
			} else {												//
				printf("Sorry! Choose another type. \n");			//
			}
		}
		printf("\n\n\n Would you like to drink Another coffee? (1 for YES, 0 for NO) \n");		//bool temp: 1 OR 0
		scanf("%d",&temp);																		//
		
	}
	
	int num;
   	FILE *fp;
   	fp = fopen("D:\\Program.txt","w");										//create a text file to storage the daily report
	
   	fprintf(fp,"Report about the sells: \n\n\n");							//the header of the report
	fprintf(fp,"%15s		%6s\n\n","Type","       Quantity");
	
	fprintf(fp,"%3d %15s		%5.0d\n",c2.id, c2.name,c2.quantity);		//the details inside the daily report
	fprintf(fp,"%3d %15s		%5.0d\n",c3.id, c3.name,c3.quantity);		//
	fprintf(fp,"%3d %15s		%5.0d\n",c4.id, c4.name,c4.quantity);		//
	fprintf(fp,"%3d %15s		%5.0d\n",c5.id, c5.name,c5.quantity);		//
	fprintf(fp,"%3d %15s		%5.0d\n",c6.id, c6.name,c6.quantity);		//
	fprintf(fp,"%3d %15s		%5.0d\n",c7.id, c7.name,c7.quantity);		//
	
	fclose(fp);																//closing the file
	
	return 0;
}

