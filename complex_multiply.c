#include<stdio.h>


//Mathew Apanovich
//U72055800
//COP3515

//This program will promt the user for two complex numbers
//The program will then use the multiply function to multiply the two complex numbers
//The user will then recieve the product of the two complex numbers that were multiplied

void multiply(double r1, double i1, double r2, double i2, double *r3, double *i3);



int main(){

double r1, i1, r2, i2, *r3, *i3;
double real3, imag3;

//assign pointers
r3 = &real3;
i3 = &imag3;

//promt for user inputs 
printf("\n---------------------------------------.\n");
printf("---------------------------------------.");
printf("\nMultiply Two Complex numbers.\n");
printf("Enter the First Complex Number in format = A + Bi.\n");
printf("Enter 'A':");
scanf("%lf", &r1);
printf("Enter 'B':");
scanf("%lf", &i1);
printf("Enter the Second Complex Number in format = C + Di.\n");
printf("Enter 'C':");
scanf("%lf", &r2);
printf("Enter 'D':");
scanf("%lf", &i2);
printf("---------------------------------------.\n");

//call funtion 
multiply(r1, i1, r2, i2, &real3, &imag3);


//if statement to print negative or positive output based on imaginary number
if ( i3 > 0){
printf("The multiplication of the two complex numbers = %.3lf + %.3lfi", real3, imag3);
printf("\n");
} else
printf("The multiplication of the two complex numbers = %.3lf %.3lfi", real3, imag3);



return 0;

}

void multiply(double r1, double i1, double r2, double i2, double *r3, double *i3){

//computes r3
*r3 = r1 * r2 - i1 * i2;

//computes i3
*i3 = r1 * i2 + i1 * r2;

}