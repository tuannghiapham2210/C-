#include <iostream>
#include <math.h>
 
using namespace std;
 
void Tower_of_Hanoi(int n, char source, char des, char inter){
    if (n == 1){
        cout << source << " " << des << endl;
        return; 
    }
 
    //moving n - 1 discs from the source tower to the inter tower
    Tower_of_Hanoi(n - 1, source, inter, des);
 
    //moving one disc from the source tower to the destination
 
    cout << source << " " << des << endl;
 
    //finally, moving n - 1 discs from the intermediary to the destination
 
    Tower_of_Hanoi(n - 1, inter, des, source);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cout << pow(2, n) - 1 << endl;
    Tower_of_Hanoi(n, '1', '3', '2');
    return 0;
}