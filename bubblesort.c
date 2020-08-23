#include<stdio.h>
main()
{
    int a[5],i,j,temp;
    printf("Enter the elements:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {
            for(j=0;j<4-i;j++)
                if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    printf("Sorted array");
    for(int k=0;k<5;k++)
        printf("%d ",a[k]);
}
