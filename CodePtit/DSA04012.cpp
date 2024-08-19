#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[101], b[101];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        
        vector<pair<int,int>> p;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                p.push_back({a[i] * b[j], i + j});
            }
        }

        sort(p.begin(), p.end(), cmp);

        int prev_pos = -1;
        int sum = 0;
        for (int i = 0; i < p.size(); i++) {
            if (p[i].second != prev_pos) {
                if (prev_pos != -1) cout << sum << " ";
                sum = p[i].first;
                prev_pos = p[i].second;
            } else {
                sum += p[i].first;
            }
        }
        cout << sum << endl;
    }
    return 0;
}