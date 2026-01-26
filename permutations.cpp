#include <iostream>

using namespace std;

const int MAX = 1000001;

int arr[MAX];

int n, isfinal;

void initializer(){
    for (int i = 1; i <= n; i++){
        arr[i] = i;
    }
}

void generator(){
    int i = n - 1;
    while(i >= 1 && arr[i] > arr[i + 1]){
        i--;
    }
    if (i == 0){
        isfinal = 1;
    }
    else{
        int j = n;
        while(arr[j] < arr[i]){
            j--;
        }
        swap(arr[j], arr[i]);
        int left = i + 1; int right = n;
        while(right > left){
            swap(arr[left], arr[right]);
            left++; right--;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    isfinal = 0;
    initializer();
    while(!isfinal){
        for(int i = 1; i <= n; i++){
            cout << arr[i];
        }
        cout << endl;
        generator();
    }
    return 0;
}