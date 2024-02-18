#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++) {
        cin >> a.at(i);
    }

    int cnt = 0;
    while(1) {
        bool bk = false;
        for(int i=0; i<N; i++) {
            if(a.at(i) % 2 == 0) a.at(i) /= 2;
            else {
                bk = true;
                break;
            }
        }
        if(bk) break;
        cnt++;
    }

    cout << cnt;

    return 0;
}