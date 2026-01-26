#include <iostream>
#include <math.h>

using namespace std;

const int MAX = 1000001;

int check[MAX];

void sieve(){
    //mac dinh coi tat ca cac so trong mang deu la so nguyen to (true)
    for (int i = 0; i < MAX; i++){
        check[i] = true;
    }
    check[0] = check[1] = false;
    for (int i = 2; i <= sqrt(MAX); i++){
        if (check[i]) {
            for (int j = i*i; j < MAX; j += i){
                check[j] = false;
            }
        }
    }
}

int main(){
    sieve();
    int n; cin >> n;
    for (int i = 0; i <= n; i++){
        if(check[i]) cout << i << " ";
    }
    return 0;
}