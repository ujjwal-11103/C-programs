#include <iostream>
using namespace std;
int main()
{
    string name = "Ujjwal";
    cout << "The entered name is = " << name << " Cool\n";
    printf("%d", 6 + 6);
    int num;
    long int lnum;
    char ch;
    float frac;
    double lfrac;

    scanf("%d %ld %c %f %lf", &num, &lnum, &ch, &frac, &lfrac);
    printf(
        "%d %s%ld %s%c %s%f %s%lf",
        num, "\n", lnum, "\n", ch, "\n", frac, "\n", lfrac);

    return 0;
}