
/* linear search algorithm */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, count=0, b, n=6;

    int arr[6] = {2, 3, 4, 5, 6, 7};

    scanf("%d ",&b);

    for (i=0; i<n; i++) {

      if (arr[i] == b) {

	 count = i+1;
	 break;
      }
      else
	 count = 0;
    }

    if (count != 0) {

       printf("\nItem found at %d  ",count);
    }
    else {

       printf("\nNot in the list  ");
    }
}
