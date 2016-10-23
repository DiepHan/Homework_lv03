#include<stdio.h>
void main()
{
    int n,k,i,dem;
    scanf("%d%d",&n,&k);
    dem=0;
    for(i=1;i<n;i++)
        if(i%k==0)
            dem++;
    printf("%d",dem);

}
