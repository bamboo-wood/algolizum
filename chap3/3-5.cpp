#include <iostream>
#include <vector>
using namespace std;

int how_many_times(int n) {
    int exp = 0;
    while (n % 2 == 0) {
        n /= 2;
        ++exp;
    }
    return exp;
}

const int INF = 20000000;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    int result = INF;
    for (auto a : A) {
        result = min(result, how_many_times(a));
    }

    cout << result << end;
}