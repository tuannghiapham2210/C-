#include <iostream>

using namespace std;

const int MAX = 10000001;

bool is_prime[MAX];

void sieve(){
    //ban dau, coi nhu tat ca cac so deu la so nguyen to
    for(int i = 0; i <= MAX; i++){
        is_prime[i] = true;
    }
    //loc thu cong 0 va 1
    is_prime[0] = is_prime[1] = false;
    //duyet tu 2 den can cua max, neu so do la so nguyen to, thi gach bo tan ca cac boi
    for(int i = 2; i * i <= MAX; i++){
        if(is_prime[i]){
            for(int j = i*i; j <= MAX; j+=i){
                is_prime[j] = false;
            }
        }
    }
}

void thua_so(int n){
    for(int i = 2; i*i <= n; i++){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n != 1){
        cout << n << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n; cin >> n;
    cout << "thua so nguyen to: "; 
    thua_so(n);
    cout << "cac so nguyen to tu 0 den n: ";
    for(int i = 0; i <= n; i++){
        if(is_prime[i]){
            cout << i << " ";
        }
    }
    return 0;
}