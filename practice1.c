#include <stdio.h>
int main()
{
    int a = 10, b = 20, c, d, e, s, g, r = 10, h = 10, f, i;

    //area of rectangle

    printf("Area of rectangle by predefined values=%d\n", a * b); //predefined

    printf("enter the value of c and d="); //user defined
    scanf("%d%d", &c, &d);

    printf("Area of rectangle by user defined=%d\n", c * d);

    //area of circle and cylinder

    printf("Enter the value of r(radius)=");
    scanf("%d", &e);
    s = 3.14 * e * e;
    printf("area of circle=%d\n", s);

    //area of clyinder

    g = 3.14 * r * r * h;
    printf("area of cylinder=%d\n", g);

    //℉ to ℃

    printf("enter the value of farenheit=");
    scanf("%d", &f);
    i = (f - 32) * 5 / 9;
    printf("In Degree celsius(℃)= %d\n", i);

    // //exponential form
    // printf("The value of 2  to the power of 5 will be=\n%f\n", pow(2, 5));

    return 0;
}