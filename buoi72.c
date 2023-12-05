#include <stdio.h>
int main()
{
    int a[1000], i, dem = 1000;
    int f;

    for (i = 0; i < dem; i++)
    {
        a[i] = i + 1;
    }
    printf("nhap mot so: ");
    scanf("%d", &f);

    int st = 0, fi = -1;
    int low = 0, hi = dem - 1, mid;
    while (low <= hi)
    {
        st++;
        if (a[low] == f)
        {
            fi = low;
            break;
        }
        if (a[hi] == f)
        {
            fi = hi;
            break;
        }
        mid = (hi + low) / 2;
        if (a[mid] == f)
        {
            fi = mid;
            break;
        }
        else if (f < a[mid])
        {
            hi = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (fi == -1)
    {
        printf("%d khong co trong mang.\n", f);
    }
    else
    {
        printf("%d trong mamg nam o cot %d va sau %d hang.\n ", f, fi, st);
    }

    return 0;
}