#include <stdio.h>
#include <iostream>
using namespace std;

char big[500][500], small[500][500];

int find(int n, int m) {
    int ans = 0, i, j, k, l;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i+m <= n && j+m <= n) {
                int cnt = 0;
                for(k = 0; k < m; k++) {
                    for(l = 0; l < m; l++) {
                        if(big[i+k][j+l] == small[k][l])
                            cnt++;
                    }
                }
                if(cnt == m*m)
                    ans++;
            }
        }
    }
    return ans;
}

void rotate(int n) {
    char tmp[n][n];
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            tmp[i][j] = small[n-j-1][i];
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
           small[i][j] = tmp[i][j];
    }
}

int main()
{
    int n, m;
    while(cin >> n >> m, n||m)
    {
        if (n == 0 && m == 0) break;
        
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> big[i][j];
        
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < m; ++j)
                cin >> small[i][j];                
        
        for (int i = 0; i < 4; i++)
        {
            if(i)
                putchar(' ');
            printf("%d", find(n, m));
            rotate(m);
        }
        printf("\n");
    }
    
    return 0;
}