#include<stdio.h>

int main() {
    int a[50], size, i;

    // Asking user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Ensuring the array size is within bounds
    if (size > 50) {
        printf("Size exceeds the limit of 50\n");
        return 1;
    }

    // Taking array input from user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
  //inserting at specific position
  // int num, pos;
  // printf("Enter the position you want to insert");
  // scanf("%d", &pos);
  // printf("Enter data:");
  // scanf("%d", &num);
  // for (int j =size -1; j>= pos-1; j--){
  //   a[j+1]= a[j];   
  // }
  //      a[pos-1]=num;

  //inserting at beginning
 //  int num,k;
 // printf("Enter data:");
 //  scanf("%d", &num); 
 //  for(k=size-1; k>=0; k--){
 //    a[k+1]=a[k];
 //  }
 //  a[0]= num;

  //inserting at the last
  int num,k;
  printf("Enter data:");
  scanf("%d", &num);
  a[size]= num;

    // Printing/traversing each element of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < size+1; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}

