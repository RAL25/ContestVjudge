#include<iostream>
#include<vector>
using namespace std;
int check(int array[], int n){
    vector<int> dp(n,0);
    int res=0;
    for(int i=n-1; i>=0; i--){
        int salto = i + array[i];
        if(salto>=n) dp[i]=array[i];
        else dp[i] = array[i] + dp[salto];
        res=max(salto, dp[i]);
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int array[n];
        for(int i=0; i<n; i++) 
            cin>>array[i];
        cout<<check(array,n)<<endl;
    }
    return 0;
}