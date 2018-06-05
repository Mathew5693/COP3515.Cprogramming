#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define MAX_LEN 1000


//Mathew Apanovich
//U72055800
//COP3515

//this program reads in a file
//the file contains the radius height weight of a cylinder
//the program then reads the inputs of the file and calculates the volume of each cylinder
//the program then sorts and outputs the cylinders by volume size lowest to high

//cylinder structure 
struct cylinder{

double radius;
double height;
double weight;
double volume;

};

struct cylinder create_cylinder(double rad, double hei, double wei);
struct cylinder my_cylinders[MAX_LEN];
void selection_sort(struct cylinder my_cylinders[], int n);

int main(){

    //struct array used to store volume and send it sort funtion to be sorted
    struct cylinder my_cylinders[MAX_LEN];

    //file pointers
    FILE * pFile;
    FILE * oFile;
    
    //incrementers
    int i, n = 0;
    //place holders
    double rad, hei, wei;

    
    //opens file, if there is a null or error it will print a warning to user
    
    pFile = fopen("cylinders.txt", "r");
    if(pFile == NULL){
    printf("Error opening file\n");
    return 1;
    }
    
    
    //while loop that tests if fscanf is succussful and then stores them into my_cylinders array using create cylinder struct
    //incriment n until end of file is met
    
    while(fscanf(pFile, "%lf,%lf,%lf", &rad, &hei, &wei) != EOF){
    my_cylinders[n] = create_cylinder(rad, hei, wei);
    n++;
    }



    //test output of while loop
    /*
    printf("%d\n\n", n);
    for(i = 0; i < n;i++){
    printf("%d      %lf      %lf      %lf      %lf \n\n", i, my_cylinders[i].radius, my_cylinders[i].height, my_cylinders[i].volume, my_cylinders[i].weight);
 
    }
     */
     
     
    //call sort funtion
    selection_sort(my_cylinders, n);
    
 
    //opens out file to be written into
    oFile = fopen("sorted_cylinders.txt", "w");
    if(oFile == NULL)
    { 
      printf("Error opening file\n");
      return 1;
    }
    
    
    //for loop to print new file information
    fputs("#      Radius         Height       Volume        Weight\n", oFile);
    for(i = 0;i < n;i++){
   
    fprintf(oFile, "%d      %lf      %lf      %lf      %lf \n\n", i, my_cylinders[i].radius, my_cylinders[i].height, my_cylinders[i].volume, my_cylinders[i].weight);
    
    }

    //house keeping closing files
    fclose(pFile);
    fclose(oFile);
    
return 0;

}


void selection_sort(struct cylinder my_cylinders[], int n){

int i, largest = 0, temp;

  if (n == 1)
    return;

  for (i = 1; i < n; i++)
    if (my_cylinders[i].volume > my_cylinders[largest].volume)
      largest = i;

  if (largest < n - 1) {
    temp = my_cylinders[n-1].volume;
    my_cylinders[n-1].volume = my_cylinders[largest].volume;
    my_cylinders[largest].volume = temp;
  }

  //selection_sort(cylinder my_cylinder[].volume, n - 1);
}


struct cylinder create_cylinder(double rad, double hei, double wei){

struct cylinder temp;
temp.radius = rad;
temp.height = hei;
temp.weight = wei;
temp.volume = (22/7) * (rad * rad) * hei;
return temp;

}