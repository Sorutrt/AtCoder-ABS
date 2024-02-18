#include <bits/stdc++.h>
using namespace std;

int sum_digs(int x) {
    int sum = 0;
    while(x) {
        sum += x%10;
        x /=10;
    }
    return sum;
}

int main() {

    int n,a,b,sum_n=0;
    cin >> n >> a >> b;

    for(int i=1; i<=n; i++) {
        int sum_i = sum_digs(i);
        if(a <= sum_i && sum_i <= b) sum_n += i;
    }

    cout << sum_n;

    return 0;
}