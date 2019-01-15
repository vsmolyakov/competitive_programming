#include <bits/stdc++.h>
using namespace std;

class PairProduct 
{
public:
    vector<int> findPair(int n, int a0, int step, long long p) 
    {
	map<int, int> I;
	for (int i = 0; i < n; ++i) 
        { 
            I[a0] = i; 
            if (a0 == 0) { if (p == 0) return {i,i}; } 
            else if (p % a0 == 0)
            {
                auto it = I.find(p/a0); 
                if (it != I.end()) return {i,it->second};
            }
	    a0 += step;
	}
	return {};
   }
};