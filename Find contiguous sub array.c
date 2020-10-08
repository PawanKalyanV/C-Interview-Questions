/* To find contiguous sub array which adds to given number */

#include<stdio.h>
main()
{
 int n, N, i, A=1,p=2;
 printf( "Enter the N value:" );
 scanf( "%d", &N );
 int arr[n];
 printf( "Enter the array:" );
 scanf( "%d", &arr[n] );
 for( i=0; i<arr[n]; i++)
 {
     if( arr[i]+arr[i+1] == N )
      {
        printf( "{ %d,%d }", arr[i], arr[i+1] );
      }
      else if( arr[i]+arr[i+1] < N )
      {
       A = arr[i]+arr[i+1];
       A = A + arr[i+p];
       p++;
      }
      else if( arr[i]+arr[i+1] > N )
      {
        i++;
      }
 }return 0;
}
