/*INPUT:
1,2,3,4,5,6,7
OUTPUT:
7 1 6 2 5 3 4
ALGORITHM:
Step 1:  Intialise an array size, iterate and get array values.
Step 2: Take two pointer variables 'i' and 'j'
Step 3: Intialise i=0(minimum index value) and j=n-1(maximum index value)
Step 4: increment i to move left and decrement j to move right till i<j
Step 5: if the array size is odd in order to print the middle value (n%2==0) print the middle value. */

# include<stdio.h>
int main()
{
    int arr[50],k,n;
    scanf("%d",&n);
    for(k=0;k<n;k++)
       scanf("%d",&arr[k]);
    int i=0,j=n-1;
    while(i<j)
    {
        printf("%d ",arr[j--]);
        printf("%d ",arr[i++]);
    }
    if(n%2!=0)
    printf("%d",arr[i]);  //since n is odd write this if statement else not required
    return 0;
}


# include<stdio.h>
# define n 7
int main()
{
    int arr[n] = {1,2,3,4,5,6,7};
    int i=0,j=n-1;
    while(i<j)
    {
        printf("%d ",arr[j--]);
        printf("%d ",arr[i++]);
    }
    if(n%2!=0)
    printf("%d",arr[i]);  //since n is odd write this if statement else not required
    return 0;
}

