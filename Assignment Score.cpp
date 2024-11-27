#include <iostream>
#include <vector>
#include <numeric>
using namespace std;



int main() {
     int T;
    cin >> T;

    while (T--) {
        int N,a,c,b,d,e;
        cin >> N;
 vector<int> v(N);
        for (int i = 0; i < N; ++i) {
            cin >> v[i];
        }
 a = accumulate(v.begin(), v.end(), 0);
        b = ((N + 1) * 100) / 2;
c = b -a;
 if (c > 100) {
            cout << -1 << endl;
        } else {
            cout << max(0, c) << endl;
        }
    }
    return 0;
}

