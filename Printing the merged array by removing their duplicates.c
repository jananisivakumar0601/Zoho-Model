/*
INPUT:
Get the size of 1st and 2nd array using 'm' and 'n'
5
6
First Array
1
2
3
4
6
Second Array
4
3
6
7
8
9

OUTPUT:
Merged Array after Removing duplicates are
1 2 3 4 6 7 8 9 
*/

#include <stdio.h>

int main()
{
    int a[50],b[50],c[50],i,j,m,n,k,count,arr[100],l=0,temp;
    printf("Get the size of 1st and 2nd array using 'm' and 'n'\n");
    scanf("%d",&m);
    scanf("%d",&n);
    printf("First Array\n");
    for(i=0;i<m;i++)
    {
       scanf("%d",&a[i]);
       c[i] = a[i];       //Creating new array c[i] and adding first array into them
    }
    printf("Second Array\n");
    k=i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        c[k] = b[i];        //Merging second array into c[k]
        k++;
    }
    for(i=0;i<k;i++)
    {
        count=1;
    for(j=i+1;j<k;j++)
    {
        if(c[i]==c[j])
        {
        count++;
        c[j] = '#';
        }
    }
    if(c[i]!='#')
    {
       arr[l] = c[i];
       //printf("%d ",arr[l]);  //Removing duplicates and printing
       l++;
    }
    }
   for(i=0;i<l;i++)
   {
       for(j=i+1;j<l;j++)
       {
          if(arr[i]>arr[j])
          {
              temp = arr[i];
              arr[i] = arr[j];  //Sorting in ascending order
              arr[j] = temp;
          }
       }
   }
   printf("Merged Array after Removing duplicates are\n");
   for(i=0;i<l;i++)
   printf("%d ",arr[i]);
    return 0;
}
