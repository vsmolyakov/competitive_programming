#include <bits/stdc++.h>
using namespace std;

class CalkinWilfReversed
{
public:
    long long getDepth(long long a, long long b)
    {   
        if (a > b) return getDepth(b, a);
        else if (a == 1) return b-1;
        else return b/a + getDepth(b%a, a);
    }    
};