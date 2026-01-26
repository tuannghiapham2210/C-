#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x: a){
        cin >> x;
    }
    int prefix[n + 1] = {0};
    for(int i = 0; i < n; i++){
        prefix[i + 1] = prefix[i] + a[i]; 
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout << prefix[r + 1] - prefix[l] << endl;
    }
    return 0;
}