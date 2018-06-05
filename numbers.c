#include<stdio.h>
#include<stdlib.h>

//Mathew Apanovich
//U72055800
//COP3515

//This program will accept a command line of numbers from the user
//the command like, ./find_smallest will find the smallest number entered by the user
//it will then print out the number to the user
//


int main(int argc, char *argv[]){


int i, S;

// sets S (for smallest) to the first number entered by the user from the command line
S = atoi(argv[1]);

//for loop to iterate though number of inputs from command line
for(i = 2; i<argc; i++){

//if statement comparing S with the next number froom the command line
if (atoi(argv[i]) < S){
  //sets S as the smaller number if true
  S = atoi(argv[i]);
  }

}

//outputs results ot the user
printf("\nOutput:");
    printf(" The smallest number is %d.", S);
    printf("\n");

return 0;

}