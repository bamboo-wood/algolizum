#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, V;
    cin >> N >> V;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int counter = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i] == V) {
            ++counter;
        }
    }

    cout << counter << endl;
}