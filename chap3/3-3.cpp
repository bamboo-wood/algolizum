#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int first_smallest_number = INF;
    int second_smallest_number = INF;
    for (int i = 0; i < N; ++i) {
        if (a[i] < first_smallest_number) {
            second_smallest_number = first_smallest_number;
            first_smallest_number = a[i];

        } else if (a[i] < second_smallest_number) {
            second_smallest_number = a[i];
        }
    }

    cout << second_smallest_number << endl;
}