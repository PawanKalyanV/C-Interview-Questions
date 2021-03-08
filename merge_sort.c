
/* merge sort algorithm */

#include<stdio.h>

//int sort(int low, int middle, int high, int *array, int count)

int printElements(int low, int high, int *array)
{
     int middle = 0 ;

     if (low == high) {

     printf("%d ",array[low]);

     return 0;

     }

     middle = (low+high)/2;

     printElements(low, middle, array);

     printElements(middle + 1, high, array);

    // sort(low, middle, high, array, count);

}

int main()
{
     int n=5;

     int a[5] = { 11, 3, 6, 2, 10 };

     printElements(0, 4, a);
}

