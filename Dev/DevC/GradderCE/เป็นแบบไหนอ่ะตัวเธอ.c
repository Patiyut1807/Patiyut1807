#include <stdio.h>
int main()
{
    int n[1000] = {};
    int i = 0, ts1, ts2, re;
    do
    {

        scanf("%d", &n[i]);
        if (n[i] == 0)
        {
            break;
        }
        i++;
    } while (1);

    if (n[1] > n[0])
    {
        ts2 = 1;
    }
    else if (n[0] > n[1])
    {
        ts2 = 0;
    }
    else
    {
        if (n[2] != 0)
        {
            if (n[2] > n[1])
            {
                ts2 = 1;
            }
            else if (n[1] > n[2])
            {
                ts2 = 0;
            }
        }
    }

    for (int j = 0; j < ((sizeof(n) / 1000) - 1); j++)
    {
        if (n[j] == n[j + 1])
        {
            if (n[j + 1] < n[j + 2])
            {
                ts1 = 1;
            }
            else if (n[j + 1] < n[j + 2])
            {
                ts1 = 0;
            }
        }

        else if (n[j + 1] > n[j])
        {
            ts1 = 1;
        }
        else if (n[j] > n[j + 1])
        {
            ts1 = 0;
        }

        if ((ts1 == ts2) && (n[j + 1] > n[j]))
        {
            re = 1;
        }
        else if ((ts1 == ts2) && (n[j + 1] < n[j]))
        {
            re = 2;
        }
        else if ((ts1 != ts2))
        {
            re = 3;
        }
    }

    switch (re)
    {
    case 1:
        printf("Ascending Sort Order");
        break;

    case 2:
        printf("Descending Sort Order");
        break;

    case 3:
        printf("Unsorted Order");
        break;
    }
    return 0;
}