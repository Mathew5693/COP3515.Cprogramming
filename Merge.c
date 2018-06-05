#include<stdio.h>


//Mathew Apanovich
//U72055800
//COP3515

//this program will take in two arrays of the same length
//the program will then merge both of the arrays into one array
//the program does not sort the merged array

void merge(int n, int a1[], int a2[], int a3[]);


int main(){

int n, a1[99], a2[99], a3[99], i;

  //asks user for array length up to 99
  printf("\nEnter the length of the array:");
  scanf("%d", &n);
  
  //asks user for numbers to store in array of given length in array 1
  printf("\nEnter the elements of the First array:");
  for (i = 0; i < n; i++) {
    scanf("%d", &a1[i]);
    }
    
  //asks user for numbers to store in array of given length in array 2
  printf("\nEnter the elements of the Second array:");
  for (i = 0; i < n; i++) {
    scanf("%d", &a2[i]);
    }
    
    //call merge funtion
    merge(n, a1, a2, a3);
    


return 0;

}

//merge funtion to create array 3 and print results.
void merge(int n, int a1[], int a2[], int a3[]){

  int i = 0, j = 0, arrTotal = 0;
  
  
  //size of the third array
  arrTotal = n * 2;
  
  //merge a1 to a3
  for(i=0;i < n;i++){
  a3[i] = a1[i];
  }
  //merge a2 to a3  
  for(j=0;j < n; j++){
  a3[i] = a2[j];
  i++;
  }

  //prints out the merged array, a3
  printf("Output:");
  printf("\nThe output array is :");
    for(i=0; i < arrTotal; i++)
    {
        printf("%d ", a3[i]);
    }
	printf("\n");
  
}
