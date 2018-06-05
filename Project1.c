#include <stdio.h>
#include <math.h>
#include <stdint.h>



int main()
{


//ints for program
	int coinS = 0;
	int choicE;
	int changE = 0;
	int i = 0;
  int starT = 1;



//menu print for user
printf("Check out our selection\n");
printf("\nAirheads - 25 cents\n");
printf("Fun Dip - 40 cents\n");
printf("Gummi Bears - 20 cents\n\n");
printf("At any time, input 0 to select your candy!\n");
scanf("%d", &starT);


//loop to start start taking change until 0 is entered
if(starT == 0)
{
printf("Insert Coins:\n");
coinS = coinS + coinS;

}
//selection menu for user.
printf("Please select from the following menu: 1 -- Airheads, 2 -- Fun Dip, 3 -- Gummi Bears\n");
printf("Enter your choice:\n");
scanf("%d" , &choicE);


//switch statement to compare selection and provide user with required info.
switch(choicE){

case 1:

if(i == 0 && coinS > 25){
changE = coinS - 25;
printf("You have selected Airheads!\n");
printf("Candy dispensing...\n");
printf("Your change is %d\n:", changE);
i++; //cancels loop to prevent multiple unwanted purchases of airheads
}
else
{
//printf("You have Insufficient funds! Please enter more change.\n");
printf("Your current amount is %d\n", coinS);
}

break;

case 2:

if(i == 0 && coinS > 40){
changE = coinS - 40;
printf("You have selected Fun Dip!\n");
printf("Candy dispensing...\n");
printf("Your change is %d\n:", changE);
i++; //cancels loop to prevent forcing multiple unwanted purchases of fun dip
} 
else
{
//printf("You have Insufficient funds! Please enter more change.\n");
printf("Your current amount is %d\n", coinS);
}

break;

case 3:

if(i == 0 && coinS > 20){
changE = coinS - 20;
printf("You have selected Gummi Bears!\n");
printf("Candy dispensing...\n");
printf("Your change is %d\n:", changE);
i++; //cancels loop to prevent forcing multiple unwanted purchases of fun dip
}
else
{
//printf("You have Insufficient funds! Please enter more change.\n");
printf("Your current amount is %d\n", coinS);
}

break;

default:
starT = 1;
//printf("Please enter 0 to start selection.\n");
break;


}




return 0;

}
