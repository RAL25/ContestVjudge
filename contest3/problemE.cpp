#include<iostream>
#include<vector>
using namespace std;
int check(int n, int d, string s, int limite){
    int inicio;
    vector<int> dp(n, limite);
    dp[0]=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0') continue;
        inicio = max(0, i-d);
        for(int j=inicio; j<i; j++){
            if(s[j]=='1')
                dp[i] = min(dp[i], dp[j] + 1);
        }
    }
    return dp[n-1];
}
int main(){
    int n, d;
    string s;
    cin>>n>>d>>s;
    int limite=n+1, aux=check(n,d,s,limite);
    cout<<(aux==limite? -1 : aux)<<endl;
    return 0;
}