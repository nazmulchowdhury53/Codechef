#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
private:
    vector<int> v;

    void heapifyUp(int i) {
        while (i > 0) {
            int z = (i - 1) / 2;
            if (v[i] < v[z]) {
                swap(v[i], v[z]);
                i = z;
            } else {
                break;
            }
        }
    }

public:
    void insert(int a) {
        v.push_back(a);
        heapifyUp(v.size() - 1);
    }

    void printHeap() const {
        for (int val : v) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;

    MinHeap minHeap;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        minHeap.insert(a);
        minHeap.printHeap();
    }

    return 0;
}
