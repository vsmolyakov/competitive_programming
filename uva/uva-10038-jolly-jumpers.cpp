#include <bitset>
#include <iostream>
using namespace std;

const int SIZE = 4096;

int main() {
    
    int n;
    while (cin >> n)
    {
        bitset<SIZE> bitvec;
        int a, b; cin >> b; bool is_jolly = true;
        for (int i = 1; i < n; i++)
        {
            a = b; cin >> b;
            int c = abs(b-a);
            if (c !=0 && c < n && !bitvec[c]) { bitvec.set(c); }
            else { is_jolly = false; }
        }
        is_jolly ? cout << "Jolly" << endl : cout << "Not jolly" << endl;
    }
    return 0;
}