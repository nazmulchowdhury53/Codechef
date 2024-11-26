#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> v(N);
        for (int i = 0; i < N; ++i) {
            cin >> v[i];
        }

        if (N % 3 == 0) {
            if (N % 2 == 1) {
                cout << v[N / 2] << endl;
            } else {
                cout << v[0] << " " << v[N - 1] << endl;
            }
        } else {
            cout << v[0] + v[N - 1] << endl;
        }
    }

    return 0;
}
