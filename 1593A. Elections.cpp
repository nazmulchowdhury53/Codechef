#include <iostream>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
 int votesA = max(0, max(b, c) + 1 - a);
    int votesB = max(0, max(a, c) + 1 - b);
    int votesC = max(0, max(a, b) + 1 - c);
 cout << votesA << " " << votesB << " " << votesC << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
