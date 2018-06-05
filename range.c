#include<stdio.h>


//Mathew Apanovich
//U72055800
//COP3515

//This program accepts inputs up to 99 and stores them into an array
//the program also accepts a range for the array input by the user
//the program then computes if the array has consecutive numbers with the same value
//the program will also compute if the numbers with in the array are in a given range.


//function to check if there are consecutive numbers with in the array that have the same value
int consecutive(int a[], int n);


//function to check if the elements of the array are with in a given range
int inRange(int a[], int n, int low, int high);

int main(){

int a[99], n, low, high, i = 0;
int r = 0, c = 0;

  //asks user for array length up to 99
  printf("\nEnter the length of the array:");
  scanf("%d", &n);
  
  //asks user for numbers to store in array of given length
  printf("\nEnter the elements of the array:");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    }
  
  //promts user for the low and high
  printf("\nEnter low and high:");
  scanf("%d %d", &low, &high);
  
  //call functions
  c = consecutive(a, n);
  r = inRange(a, n, low, high);
  
  
  //will promt user with response based off input and calculations of the funtions
  printf("Output:\n");
  
  if(c > 0){
  printf("There are three consecutive numbers with the same value in the array.\n");
  }
  else
  {
  printf("The array does not contain three consecutive numbers with the same value.\n");
  }
  
  if(r > 0){
  printf("All numbers are in the range.\n");
  }
  else
  {
  printf("There are elements in the array that are not in the range.\n");
  }



return 0;
}

//function to check if there are consecutive numbers with in the array that have the same value
int consecutive(int a[], int n){

int i = 0, j = 0, t = 0;


//loop to compare array in order to find re occuring numbers of the same value
for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
        if (a[i] == a[j]) {
        t = t++; //counts if a number occurs more once
        }
      }
    }
    
//assuming the same number occurs more than 3 times, will return 1 or 0 if it does not
if(t >= 3){
return 1;
}
else
{
return 0;
}

}


//function to check if the elements of the array are with in a given range
int inRange(int a[], int n, int low, int high){

  int largest_index, smallest_index, i = 0;
  
  
//finds the largest index in the array  
  for(i = 1; i < n; i++){
      if(a[i] > a[largest_index]){
      largest_index = a[i];
      }
  }
  
//finds the smallest index in the array  
  for(i = 1; i < n; i++){
    if(a[i] < a[smallest_index]){
      smallest_index = a[i];
      }
    }
  
//and statement to check if the array elements fall between both low and high ranges 
  if(smallest_index >= low && largest_index <= high){
  return 1; //returns 1 if true
  }
  else{
  return 0; //false if not true
  }

}