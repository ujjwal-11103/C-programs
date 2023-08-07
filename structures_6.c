#include <stdio.h>
struct complex
{
    int real;
    int imag;
};
void display(struct complex g)
{
        printf("The real number is =%d\n", g.real);
        printf("The imaginari number is =%d\n", g.imag);
}
int main()
{
    struct complex c[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the real number of %d number=\n", i + 1);
        scanf("%d", &c[i].real);
        printf("Enter the complex number of %d number=\n", i + 1);
        scanf("%d", &c[i].imag);
    }
    for (int i = 0; i < 3; i++)
    {
        display(c[i]);
    }
    return 0;
}