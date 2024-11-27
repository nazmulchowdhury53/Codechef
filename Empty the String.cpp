#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL); // Optimize input/output for competitive programming
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int countA = 0, countB = 0, total = 0;

        for (char c : S) {
            if (c == 'A') {
                if (countB > 0) {
                    countB--;
                    countA++;
                } else {
                    countA++;
                    total++;
                }
            } else  {
                if (countA > 0) {
                    countA--;
                    countB++;
                } else {
                    countB++;
                    total++;
                }
            }
        }

        cout << total << '\n';
    }

    return 0;
}

