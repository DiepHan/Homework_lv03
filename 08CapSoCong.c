#include<stdio.h>
#include<math.h>
void main()
{
    float u1,d;
    int n;
    printf("Nhap so dau:");scanf("%f",&u1);
    printf("Nhap cong sai d:");scanf("%f",&d);
    printf("Nhap n:");scanf("%d",&n);
    printf("Tong n dau tien:%0.2f\n",(n*(2*u1+(n-1)*d))/2);
    printf("So hang tong quat:%0.2f",u1+((n-1)*d));

}
