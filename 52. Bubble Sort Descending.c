#include <stdio.h>

void bubbleSort(int array[], int size){

   for(int step=0; step<size; step++){

    for(int i=0; i< size-step-1; i++){

        if(array[i]<array[i+1]){

            int temp = array[i];
            array[i] = array[i+1];
            array[i+1]= temp;
        }
    }
   }
}

//print array
void printArray(int array[], int size) {
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
int n, data[100],i;
  printf("How many elements you want to sort?\n Enter the number:  ");
  scanf("%d", &n);

  printf("Enter data elements: ");
  for(i=0; i<n; i++){
     scanf("%d", &data[i]);
  }
  //int n = sizeof(data) / sizeof(data[0]);
  printf("Unsorted Array:\n");
  printArray(data, n);

  // perform quicksort on data
  bubbleSort(data, n);

  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
