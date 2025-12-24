// The problems link => https://usaco.org/index.php?page=viewproblem2&cpid=760
#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n; 
    vector<int> shuffle_order(n+1, 0);
    vector<long> id(n+1, 0);
    vector<long> shuffled(n+1, 0);

    for(int i = 1; i <= n; i++) cin >> shuffle_order[i];
    for(int i = 1; i <= n; i++) cin >> id[i];

    for(int times = 0; times < 3; times++) {
        for(int i = 1; i <= n; i++) {
            shuffled[i] = id[shuffle_order[i]];
        }
        id = shuffled;
    }
    
    for(int i = 1; i <= n; i++) {
        cout << shuffled[i] << endl;
    }
}