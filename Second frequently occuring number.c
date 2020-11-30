/*
Input:
7  //n value
1
1
5
3
1
5
4
Output:
2  // 2 time(s) 5 ocuur. 
*/
#include <stdio.h>
int main()
{
    int arr[50],i,j,n,count,b[50],k=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            count++;
            arr[j]='#';
            }
        }
        if(arr[i]!='#')
        {
            b[k]=count; //putting count values into an array
            //printf("%d-%d\n",arr[i],b[k]);  o/p : 1-3 times,5-2 times, 3-1 time, 4-1 time
             k++;
        }
    }
    /*for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);  //printing those count values from an array   o/p: (3 2 1 1)
    }*/
    printf("\nMax value ");
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i]>b[j])  //sorting the array in an ascending order
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("%d ",b[k-2]); //to print the second max value
   return 0;
}
