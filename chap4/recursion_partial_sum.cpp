#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a) {
    if (i == 0) {
        if (w == 0) return true;
        else return false;
    }

    if (func(i - 1, w, a)) return true;

    if (func(i - 1, w - a[i - 1], a)) return true;

    return false;
}

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    if (func(N, W, a)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

// e.g.
// N = 4 
// W = 14
// a = [3, 2, 6, 5]
//
// >>>>> YES