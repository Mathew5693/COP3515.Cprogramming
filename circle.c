#include<stdio.h>


//Mathew Apanovich
//U72055800
//COP3515

//This program will accept an input, radius, from the user to calculate the area and circumference
//
//

void area_circum(double radius, double *area, double *circum);


int main(){

double radius, *area, *circum;
double a, c;

//accepts input from user to store in radius
printf("Please enter the Radius of the circle:");
scanf("%.3f", &radius);

//calls funtion and stores area in A and circumference at C
area_circum(radius, &a, &c);

//promts user with results of the funtion
printf("The Area for a circle with radius %.3f is %.3f.\n", radius, a);
printf("The Circumference for a circle with radius %.3f is %.3f.\n", radius, c);


return 0;

}



void area_circum(double radius, double *area, double *circum){

//equation for area with PI to the 8th decimal for accuracy
*area = 3.14159265 * (radius * radius);

//equation for circumference with PI to the 8th decimal for accuracy
*circum = 2.0 * 3.14159265 * radius;

}
