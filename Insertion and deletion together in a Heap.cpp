#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    priority_queue<int> m;
    while (N--) {
        string s;
        cin >> s;

        if (s == "+") {
            int x;
            cin >> x;
            m.push(x);
        } else if (s == "-") {
            if (!m.empty()) {
                m.pop();
            }
        }
 if (m.empty()) {
            cout << "Empty" << endl;
        } else {
            cout <<m.top() << endl;
        }
    }


}
