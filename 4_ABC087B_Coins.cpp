#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c,x,cnt=0;
    cin >> a >> b >> c >> x;

    int sum = 0;
    for(int i=0; i<=a; i++) {
        for(int j=0; j<=b; j++) {
            for(int k=0; k<=c; k++) {
                sum = 500*i + 100*j + 50*k;
                if(sum==x) cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}