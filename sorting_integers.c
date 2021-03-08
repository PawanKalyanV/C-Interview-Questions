
/* sort array of integers */

#include<stdio.h>

int sequential_sort (int *array, int size)
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

int selection_sort (int *array, int size)
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
int bubble_sort(int *array, int size)
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
    int n=5;

    int a[5] = {64, 25, 12, 11, 22};

    int exp[5] = {11, 12, 22, 25, 64};

    sequential_sort (a, 5);

    selection_sort (a, 5);

    bubble_sort (a, 5);

    for (int i=0; i < n; i++ ) {

      if (a[i] != exp[i]) {

        printf("\nThe elements are not sorted\n");

      }
    }
}


