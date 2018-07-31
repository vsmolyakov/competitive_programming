#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        int temp_i = i;
        int temp_j = j;

        if (i > j) swap(i, j);
        int max_cycle_len = 0;

        while (i <= j)
        {
            unsigned int n = i;
            int cycle_len = 1;

            while (n != 1)
            {
                if (n % 2 == 1) n = 3 * n + 1;
                else n /= 2;
                cycle_len++;
            }
            max_cycle_len = max(cycle_len, max_cycle_len);
            ++i;
        }
        printf("%d %d %d\n", temp_i, temp_j, max_cycle_len);
    }

    return 0;
}
