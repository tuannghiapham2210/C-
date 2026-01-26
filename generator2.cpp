#include <iostream>

using namespace std;

const int MAX = 1000001;

int arr[MAX];

int n, k, isfinal;

//khoi tao cau hinh dau tien
void initializer(){
    for (int i = 1; i <= k; i++){
        arr[i] = i;
    }
}

//ham sinh ra cac to hop
void generator(){
    int i = k;
    while(i >= 1 && arr[i] == n - k + i){
        i--;
    }
    if(i == 0){
        isfinal = 1;
    }
    else{
        arr[i]++;
        for(int j = i + 1; j <= k; j++){
            arr[j] = arr[j - 1] + 1; 
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    initializer();
    isfinal = 0;
    while(!isfinal){
        //in ra cau hinh hien tai
        for(int i = 1; i <= k; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        //sinh ra cau hinh tiep theo
        generator();
    }
    return 0;
}