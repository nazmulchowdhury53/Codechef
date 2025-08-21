  #include <iostream>
        #include <vector>
        using namespace std;
        vector<long long> F(61);
        long long compute_h(long long m) {
            if (m == 0) return 0;
            if (m == 1) return 1;
            long long L = 1;
            int k = 0;
            while (L * 2 <= m) {
                L *= 2;
                k++;
            }
            if (m == L - 1) {
                return (long long) k * (L / 2);
            }
            return (long long) k * (L / 2) + compute_h(m - L) + L;
        }
        int main() {
             F[1] = 0;
            for (int k=2; k<=60; k++) {
                long long term = (k+1) * (1LL << (k-2));
                F[k] = F[k-1] + term;
            }
            int T;
            cin >> T;
            while (T--) {
                long long n;
                cin >> n;
                if (n == 1) {
                    cout << 0 << endl;
                    continue;
                }
                long long L = 1;
                int k = 0;
                while (L * 2 <= n) {
                    L *= 2;
                    k++;
                }
                if (n == L) {
                    cout << F[k] + L + 1 << endl;
                } else {
                    cout << F[k] + compute_h(n - L) + L << endl;
                }
            }
            return 0;
        }
