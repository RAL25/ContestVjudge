#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int i,j;
    unordered_map<int, int> memo;
    while(cin>>i>>j){
        int menor = min(i,j);
        int maior = max(i,j);
        int tamanhoMaximo = 0;
        for(int k=menor; k<=maior; k++){
            int aux = 1, n=k;
            if(memo.count(k)) aux = memo[k];
            else{
                while(n!=1){
                    if(n%2==0) n/=2;
                    else n = 3*n + 1;
                    if(memo.count(n)){
                        aux += memo[n];
                        break;
                    }
                    aux++;
                }
                memo[k] = aux;
            }
            tamanhoMaximo = max(tamanhoMaximo, aux);
        }
        cout<<i<<" "<<j<<" "<<tamanhoMaximo<<endl;
    }
    return 0;
}