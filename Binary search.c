#include<stdio.h>
main()
{
    int n,top,mid,bot,p;
    printf("Number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number: ");
    scanf("%d",&p);
    top=0;
    bot=n-1;
    //mid=(top+bot)/2;
    int k=0;
    while((top<=bot) && (k!=1))
    {
        mid=(top+bot)/2;
        if(a[mid]==p)
            k=1;
        else if(a[mid]>p)
            bot=mid-1;
        else//a[mid]<p
            top=mid+1;
    }
    if(k==1)
        printf("The element %d was found at %d position",p,mid);
    else
        printf("Not found");
}
