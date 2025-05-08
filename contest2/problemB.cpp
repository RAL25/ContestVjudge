#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, aux;
    cin>>n;
    vector<int> empregados(n), grupos;
    for(int i=0; i<n; i++){
        cin>>aux;
        empregados[i] = aux;
    }
    sort(empregados.begin(), empregados.end());
    auto last = unique(empregados.begin(), empregados.end());
    empregados.erase(last, empregados.end());
    cout<<empregados.size()<<endl;
    return 0;
}