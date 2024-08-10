#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int result = 0;
    
    for (int i = 1; i <= N; i += 2) { //奇数のときのみ
        int divisors = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisors++;
            }
        }
        if (divisors == 8) {
            result++;
        }
    }
    
    cout << result << endl;
    return 0;
}
