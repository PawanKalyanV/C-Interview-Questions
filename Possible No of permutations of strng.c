/* The task is to perform number of possible permutations */

#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int i , c, n=0 ,p=1 ;
 printf ( "enter a string: " );
 scanf ( "%s", &str );
 for( i=0 ; str[i]!='\0' ;i++ ) /*To find no of chars in string */
   {
   n++;
   }
  while (n!=0) /* To count number of Possible PerMutations */
   {
    p=p*2;
    n--;
   }
  for( i=0; i<n; i++ )
   {
    c=str[i];
    str[i]=str[i+1];
    str[i+1]=c;
    printf( "%s%s%s", c,str[i],str[i+1] );
   }
   return 0;
}
