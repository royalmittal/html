//c program of finding standard deviation using pointers
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,n,*p,*q;
    float sum=0,mean,sd,*r;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    q=(int*)malloc(n*sizeof(int));
    r=(float*)malloc(n*sizeof(float));
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        q[i]=p[i]-mean;
    }
    for(i=0;i<n;i++)
    {
        r[i]=q[i]*q[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+r[i];
    }
    sd=sqrt(sum/n);
    printf("the standard deviation is %f",sd);
    return 0;
}