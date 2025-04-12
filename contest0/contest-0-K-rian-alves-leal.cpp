#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int k;
    cin>>k;
    for(int i=0; i<k; i++){
        int n, largura=1, melhorAltura=0;
        cin>>n;
        vector<int> a(n);
        for(int j=0; j<n; j++) cin>>a[j];
        sort(a.begin(),a.end(),greater<int>());
        for(int altura : a){
            if(altura>=largura) melhorAltura = largura;
            largura++;
        }
        cout<<melhorAltura<<endl;
    }
    return 0;
}