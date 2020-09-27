#include<stdio.h>
main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
            for(j=0;j<n-1-i;j++)
                if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    printf("Sorted array is :");
    for(int k=0;k<n;k++)
        printf("%d ",a[k]);
}
