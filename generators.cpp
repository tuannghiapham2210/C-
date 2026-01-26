#include <iostream>

using namespace std;

const int MAX = 1000001;

int arr[MAX];

int ok, n, k;

//ma gia:
//khoi tao cau hinh dau tien
//while(<khi chua phai la cau hinh cuoi cung>){
//     <in ra cau hinh hien tai>
//     <sinh ra cau hinh tiep theo>
//}



void ktao(){
    for (int i = 1; i <=n; i++) arr[i] = 0;
}

void sinh(){
    int i = n;
    while( i >= 1 && arr[i] == 1){
        arr[i] = 0;
        i--;
    }
    if (i == 0){
        ok = 0;
    }
    else{
        arr[i] = 1;
    }
}

bool check(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        cnt += arr[i];
    }
    return cnt == k;
}

int main(){
    cin >> n >> k;
    ok = 1;
    ktao();
    while(ok){
        if (check()){
            for(int i = 1; i <= n; i++){
            cout << arr[i];
        }
            cout << endl;
        }
        sinh();
    }
    return 0;
}