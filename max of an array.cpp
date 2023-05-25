#include<bits/stdc++.h>
using namespace std;

int f(vector<int>arr,int n) {
    if (n == 0 ) {
        return arr[0] ;
    }  
    return max(arr[n-1],f(arr,n-1));
}
int main() {
    vector<int>arr= {2,3,4,5,6};
    int n  = arr.size();
    int max = f(arr,n);
    cout << max << endl;

}
