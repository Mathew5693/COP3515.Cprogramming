#include<stdio.h>

#define X 1000

//Mathew Apanovich
//U72055800
//COP3515

//This program will accept a string input up to 1000  
//it will then encode the string calling funtion encode
//the encode funtion then switches upper and lowercase letters based on n (25 – 12 = 13)
//the program then returns the statement that is encoded to the user.

void encode(char *s1, char *s2);


int main(){

//strings
char s1[X], s2[X];


//promts user for the message to encode
printf("Input: ");
fgets(s1, X, stdin);

//calls encode funtion
encode(s1, s2);


//prints encodes input to the user recieved from the encode funtion
printf("\nOutput:");
    printf(" %s", s2);
    printf("\n");

return 0;

}

void encode(char *s1, char *s2){

//pointers
char *p, *i;

    //set pointers p and i to s1 and s2, checks length with null terminator, iterates p and i
    for (p = s1, i = s2; *p != '\0'; p++, i++) {
    
        //if loop to test for lowercase a to z then replace using n (25 – 12 = 13)
        if (*p >= 'a' && *p <= 'z') {
            *i = 'z' - (*p - 'a');
        } 
        
        //else if loop to test for uppercase A to Z then replace using n (25 – 12 = 13)
        else if (*p >= 'A' && *p <= 'Z') {
            *i = 'Z' - (*p - 'A');
        } else {
            *i = *p;
        }
    }

}