#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    vector<int> d(n);
    for(int i=0; i<n; i++) {
        cin >> d.at(i);
    }

    sort(d.begin(), d.end());

    int cnt=0;
    for(int i=n-1; i>=0; i--) {
        if(i!=n-1 && d.at(i)==d.at(i+1)) { // 前回の値と同じだった時 && 初回は無視
            continue;
        }
        cnt++;
    }

    cout << cnt << '\n';
    
    return 0;
}