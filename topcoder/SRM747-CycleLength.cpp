#include <bits/stdc++.h>
using namespace std;

class CycleLength
{
public:
    long long next(long long x, int a, int b, int m)
    {
         return (x * a + b) % m;
    }
    
    int solve(int seed, int a, int b, int m)
    {
        long long state = seed;
        long long slow = next(state, a, b, m);
        long long fast = next(next(state, a, b, m), a, b, m);        
        cout << state << " " << slow << " " << fast << " ";
       
        //floyd's cycle detection
        int period = 1;
        while(slow != fast)
        {            
            slow = next(slow, a, b, m);
            fast = next(next(fast, a, b, m), a, b, m);
            cout << slow << " " << fast << " ";
            period++;
        }           
        return period;
    }
    
};
