#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int min_value = INF;
    int max_value = -INF;

    for (int i = 0; i < N; ++i) {
        if (min_value > a[i]) {
            min_value = a[i];
        }

        if (max_value < a[i]) {
            max_value = a[i];
        }
    }

    cout << max_value - min_value << endl;
}