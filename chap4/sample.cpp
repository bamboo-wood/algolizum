#include <iostream>
#include <vector>
using namespace std;

int func(int N) {
    if (N == 0) return 0;
    return N + func(N - 1);
}

int main(){
    cout << func(5) << endl;
}