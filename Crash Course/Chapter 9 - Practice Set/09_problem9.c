#include <stdio.h>

typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} DT;

int compare(DT d1, DT d2)
{
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
    else
    {
        return 0; // Dates are equal
    }
}

int main()
{
    DT d1 = {12, 4, 2154};
    DT d2 = {12, 8, 2154};
    printf("%d\n", compare(d1, d2));
    return 0;
}