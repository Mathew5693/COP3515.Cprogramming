#include <stdio.h>


void merge(int n, int *a1, int *a2, int *a3);

int main(void)
{
  int i;
  
  int N;
  printf("Please enter the length of the input array: ");
  scanf("%d", &N);

  int a[N];
  int a1[N];
  int b[2*N];
  

  printf("Enter %d numbers for the first array: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

 printf("Enter %d numbers for the second array: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a1[i]);


  merge(N, a, a1, b);

  printf("Output array:");
  for (i = 0; i < 2*N; i++)
    printf(" %d", b[i]);
  printf("\n");

  return 0;
}


void merge(int n, int *a1, int *a2,int *a3)
{

//pointers
int *p, *q, *r;

//points at the final array
q = a3;


//for loop that combines both arrays 
for(p = a1, r = a2;p < a1+n;p++, r++){


*q = *p;
*(q+1)= *r;
q+=2;
}

}    


//void merge(int n, int a1[], int a2[],int a3[])
//{
//	int i, j = 0;
//	for(i = 0; i < n; i++, j+=2){
//	   a3[j]= a1[i];
//	   a3[j+1] = a2[i];
//	}
//}    
