/* bubble sort for example */

#include<stdio.h>

int bubble_sort (int *array, int size)
{
    int i, j, temp;

    for (i=0; i <= size-1; i++) {

     for (j=0; j <= size-1; j++) {

       if (array[j] > array[j+1]) {

         temp = array[j];

         array[j] = array[j+1];

         array[j+1] = temp;

       }
     }
    }
}

int main()
{
    int i, n=5;

    int  a[5] = {64, 25, 10, 22, 12};

    int exp[5] = {10, 12, 22, 25, 64};

    bubble_sort (a, 5);

    for (i=0; a[i] != exp[i]; i++) {

      printf("\n Not sorted\n");

    }
}

