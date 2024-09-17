#include <iostream>
#include <string.h>

int main()
{
    char t[] = "AABACDAABADFRETAABAASDFAAABA";
    char p[] = "AABA";
    int s = strlen(t);
    int r = strlen(p);
    int max = (s - r) + 1;
    int index = 0;
    printf("Maximum shifting number of time: %d\n\n", max);
    for (int k = 0; k <= max; k++)
    {
        int l;
        for (l = 1; l <= r; l++)
        {
            if (p[l] != t[k + l - 1])
            {
                break;
            }
        }
        if (l == r)
        {
            index = k;
            printf("pattern found in Index: %d\n", index);
        }
    }

    return 0;
}