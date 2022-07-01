#include<stdio.h>
 void printMaxActivities(int s[], int f[], int n)
{
    int i, j;

    printf ("Following activities are selected:");
    i = 0;
    printf("a%d,", i);
    for (j = 1; j < n; j++)
    {
       if (s[j] >= f[i])
      {
          printf ("a%d,", j);
          i = j;
      }
    }
}
int main()
{   int N=0,a=0;
    printf("enter number of activity:");
    scanf("%d",&N);
    int st[N],ft[N];
    printf("Enter value in start time  array:Enter %d entries:\n",N);
   for(int a=0;a<N;a++)
         scanf("%d",&st[a]);
    printf("Enter value in finish time  array(in ascending sorted order:Enter %d entries:\n",N);
   for(int a=0;a<N;a++)
        scanf("%d",&ft[a]);
    printMaxActivities(st, ft, N);
    return 0;
}
