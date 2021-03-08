/* selection sort for example */

#include<stdio.h>

int selection_sort(int *array, int size)
{
    int i, j, temp;

    for (i=0; i <= size-1; i++) {

     for (j=i+1; j <= size-1; j++) {

       if (array[i] > array[j]) {

         temp = array[i];

         array[i] = array[j];

         array[j] = temp;

       }
     }
    }
}

int main()
{
    int i, n=5;

    int  a[5] = {64, 25, 10, 22, 12};

    int exp[5] = {10, 12, 22, 25, 64};

    selection_sort(a, 5);

    for (i=0; a[i] != exp[i]; i++) {

      printf("\nNot sorted\n");

    }
}

