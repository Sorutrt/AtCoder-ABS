#include <bits/stdc++.h>
using namespace std;

#define NOGUCHI 1000
#define HIGUCHI 5000
#define YUKICHI 10000

int main() {

    int n, yen;
    cin >> n >> yen;

    vector<int> ansmaisu(3, -1);
    
    for(int i=0; i<=n; i++) { //yukichi
        int yi = YUKICHI*i;
        if(yi>yen) break;
        for(int j=0; j<=n-i; j++) { // higuchi
            int hj = HIGUCHI*j;
            if(yi+hj>yen) break;
            int nk = NOGUCHI*(n-i-j);
            int sum = yi+hj+nk;
            if(sum>yen) break;
            else if(sum == yen) {
                ansmaisu.at(0) = i;
                ansmaisu.at(1) = j;
                ansmaisu.at(2) = n-i-j;
            }
        }
    }

    for(int i=0; i<3; i++) {
        cout << ansmaisu.at(i) << ' ';
    }
    
    return 0;
}
