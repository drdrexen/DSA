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
//DELETING FROM A SORTED array
int pos;
printf("Enter the position from which you want to delete data");
scanf("%d", &pos);
for(i=pos-1; i<size-1; i++){
  a[i] = a[i+1];
}

//DELETION FROM AN UNSORTED array
// int pos;
// ptintf("Enter the position from which you want to delete data")
// scanf("%d", &pos);
// a[pos-1]= a[size-1];
   // Printing/traversing each element of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < size-1; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");



return 0;

}
 
