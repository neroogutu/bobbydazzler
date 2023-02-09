#include <stdio.h>
#include<math.h>

int main()
{
    float a,b,c,root1,root2,denominator;
    printf("find the root of a quadratic equation\n");
    printf("enter the value of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("enter the value of c");
    scanf("%f",&c);
    denominator=b*b-(4*a*c);
    if(denominator==0)
    {
        printf("the roots are real and equal\n");
        root1=-b/(2*a);
        root2=-b/(2*a);
        printf("root 1 is %f\n",root1);
        printf("root 2 is %f\n",root2);
    }
    else if(denominator>0)
    {
        printf("roots are real and different\n");
        root1=(-b+sqrt(denominator)/(2*a));
        root2=(b+sqrt(denominator)/(2*a));
    }
    else
    {
        printf("roots are not real\n");
    }
    return 0;
}
