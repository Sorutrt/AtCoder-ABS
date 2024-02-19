#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());

    int alice = 0, bob = 0;

    for(int i=n-1; i>=0; i--) {
        alice += a.at(i);
        if (i==0) break;
        else i--;
        bob += a.at(i);
    }

    cout << alice-bob << '\n';
    
    return 0;
}