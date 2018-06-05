#include<stdio.h>


//Mathew Apanovich
//U72055800
//COP3515

//This program will accept inputs and store them into an array 
//the user will then input where they want to slice the array
//the funtion will then re organize the array based on the slicing position putting that number first
//the user will then be given the new array with the numbers infront of the sliced position in the back of the list

void rearrange(int n, int *a1, int s, int *a2);


int main(){

int i, n;

//promts user for length of the array and stores it in n
printf("Enter the length of the array: ");
scanf("%d", &n);

int a1[n], s, a2[n];

//promts user for the elements that the array will store 
printf("Enter %d the elements of the array: ", n);
  for (i = 0; i < n; i++){
    scanf("%d", &a1[i]);
    }
    
//promts user for the slicing position
printf("Enter the slicing position: ");
scanf("%d", &s);

//calls funtion
rearrange(n, a1, s, a2);


//promts user with result of the function
printf("The output array is:");
  for (i = 0; i < n; i++){
    printf(" %d", a2[i]);
    printf("\n");
    }

return 0;

}



void rearrange(int n, int *a1, int s, int *a2){

//pointers 
int *p, *q, S;

S = s -1;

//loop that will update the new array numbers following and including the slicing point 
for(p = a2, q = a1+S;q < a1+n;p++,q++){

*p = *q;

}

//loop to update the prevent duplicated inputs and puts the numbers from the front of the slicing point in the back
for(q = a1; q < a1+S;q++){
*p = *q;
p++;
}

}