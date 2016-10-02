#include <iostream>

using namespace std;

int fiblist(int n) {
    if(n <= 1) return n;
    for(int i = 2;i == n;i++) {
        return (fiblist(i - 1) + fiblist(i - 2));
    }
}

int main() {
    int n;
    cin >> n;
    fiblist(n);
    cout << n << "\n";
    return 0;
}