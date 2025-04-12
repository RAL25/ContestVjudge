#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string aux1;
    getline(cin,aux1);
    int n = stoi(aux1);
    getline(cin,aux1);
    for(int i=0; i<n; i++){
        vector<string> fragmentos;
        string aux2;
        while(getline(cin, aux2)) {
            if(aux2.empty()){
                break;
            }
            fragmentos.push_back(aux2);
        }
        unordered_map<string, int> verifica;
        for(string frag1 : fragmentos){
            for(string frag2 : fragmentos){
                verifica[frag1+frag2]++;
            }
        }
        string resposta;
        int max_vezes = 0;
        for(auto par : verifica){
            if(par.second > max_vezes){
                max_vezes = par.second;
                resposta = par.first;
            }
        }
        cout<<resposta<<endl;
        if(i != n-1) cout<<endl;
        
    }
    return 0;
}