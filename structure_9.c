#include <stdio.h>
typedef struct sec
{
    int sec;
    int min;
    int hour;
} d;
int display(d g, d h)
{
    if (g.hour > h.hour)
    {
        return 1;
    }
    if (g.hour < h.hour)
    {
        return -1;
    }

    if (g.min > h.min)
    {
        return 1;
    }
    if (g.min < h.min)
    {
        return -1;
    }

    if (g.sec > h.sec)
    {
        return 1;
    }
    if (g.sec < h.sec)
    {
        return -1;
    }
    return 0;
}
int main()
{
    d d1 = {1, 12, 13};
    d d2 = {2, 12, 15};
    int result = display(d1, d2);
    printf(" After comparing  we get %d", result);
    return 0;
}
