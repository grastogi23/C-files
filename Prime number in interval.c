#include<stdio.h>
int checkprime(int n);
int main()
{
    int i,n1,n2,flag;
    printf("Enter the intervals here:");
    scanf("%d%d",&n1,&n2);
    printf("The prime numbers between the interval %d and %d are:",n1,n2);

        for(i = n1; i<=n2; i++)
    {
        flag= checkprime(i);
        if(flag==1)
            printf("%d  ",i);
    }



}
int checkprime(int n)

{
    int j,flag = 1;
    for(j=2;j<=n/2;j++)
{

    if (n%j==0)
        flag=0;
        break;
}
}
