#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
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
        vector<int> partialSums(N);
        partial_sum(v.begin(), v.end(), partialSums.begin());
        long long product = 1;
        for (int value : partialSums) {
            product *= value;
        }
         int minValue = *min_element(v.begin(), v.end());
        int maxValue = *max_element(v.begin(), v.end());
        string result = (product % minValue == 0 && product % maxValue == 0) ? "YES" : "NO";
            cout << product << " " << result << endl;
    }

    return 0;
}
