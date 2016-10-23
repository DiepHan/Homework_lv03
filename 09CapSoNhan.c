#include<stdio.h>
#include<math.h>
void main()
{
    float u1,q;
    int n;
    printf("Nhap so dau:");scanf("%f",&u1);
    printf("Nhap cong boi:");scanf("%f",&q);
    printf("Nhap n:");scanf("%d",&n);
    printf("Tong n so dau:%0.2f\n",(u1*(1-pow(q,n))/(1-q)));
    printf("So hang tong quat:%0.2f",u1*pow(q,n-1));

}

