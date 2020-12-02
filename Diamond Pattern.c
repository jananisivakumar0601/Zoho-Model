/*
OUTPUT:
  *
 ***
*****
 ***
  *
  Pseudocode:
  splitting the pattern into two so two major for loops.
  
  Step 1:
  iyh for loop is for iterating n times
  step 2:
  printing spaces by using jth for loop with the condition totalrow(n)-currentrow(i)
  step 3:
  printing stars using kth for loop with the condition (2*i)-1.
*/

#include <stdio.h>

int main()
{
    int i,j,n=3,k;
    for(i=1;i<=n;i++)  //print     *
    {                             ***
        for(j=1;j<=n-i;j++)      *****
        {
        printf(" ");   // For printing spaces
        }
        for(k=1;k<=(2*i)-1;k++)
        {
        printf("*");   // For printing stars
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--) //print  ***
    {                             *
        for(j=1;j<=n-i;j++)
        {
            printf(" ");  // for spaces
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");  //for stars
        }
        printf("\n");
    }
    
    return 0;
}
