#include<bits/stdc++.h>
using namespace std;

void f(vector<int>arr,int n) {
    if (n == -1 ) {
        return ;
    }  
    cout << arr[n] << endl; 
    f(arr,n-1);
}
int main() {
    vector<int>arr= {2,3,4,5,6};
    int n  = arr.size();
    f(arr,n);
}
