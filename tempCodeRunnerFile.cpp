#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int cnt = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
            cnt = 1;
            if(s[i+1] == 'A' || s[i+1] == 'C' || s[i+1] == 'G' || s[i+1] == 'T') {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
