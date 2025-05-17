#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, aux, count=1;
    cin>>n;
    vector<int> p(n+1);
    for(int i=1; i<=n; i++){
        cin>>aux;
        p[i] = aux;
    }
    aux = 0;
    for(int i=1; i<=n; i++){
        count = 1;
        if(p[i] != -1){
            int j = i;
            while(1){
                if(p[j] != -1){
                    count++;
                    j = p[j];
                }
                else
                    break;
            }
        } 
        aux = max(aux, count);
    }
    cout<<aux<<endl;
    return 0;
}