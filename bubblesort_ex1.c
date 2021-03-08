/* bubble sort for example (5 1 4 2 8) */

#include<stdio.h>

int sort_int(int *array, int size)
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

    int  a[5] = {5, 1, 4, 2, 8};

    sort_int (a, 5);

    for (i=0; i<n; i++) {

      printf("%d\n",a[i]);

    }
}


