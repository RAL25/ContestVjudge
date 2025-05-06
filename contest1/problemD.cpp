#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
string padrao = "the quick brown fox jumps over the lazy dog";
unordered_map<char, char> mapaCerto;

bool podeMapear(string linha){
    if(linha.length() != padrao.length())
        return false;
    unordered_map<char, char> mapaTemp;
    unordered_map<char, char> mapaReverso;
    for(int i=0; i<linha.length(); i++){
        char a = linha[i];
        char b = padrao[i];
        if(a==' ' && b!=' ' || a!=' ' && b==' ')
            return false;
        if(a != ' '){
            if(mapaTemp.count(a) && mapaTemp[a] != b)
                return false;
            if(mapaReverso.count(b) && mapaReverso[b] != a)
                return false;
            mapaTemp[a] = b;
            mapaReverso[b] = a;
        }
    }
    mapaCerto = mapaTemp;
    return true;
}

int main(){
    int t;
    string aux;
    getline(cin, aux);
    t = stoi(aux);
    getline(cin, aux);
    for(int i=0; i<t; i++){
        vector<string> linhas;
        while(getline(cin,aux)){
            if(aux.empty()) break;
            linhas.push_back(aux);
        }
        mapaCerto.clear();
        bool check = false;
        for(string linha : linhas){
            if(podeMapear(linha)){
                check = true;
                break;
            }
        }
        if(!check)
            cout<<"No solution."<<endl;
        else{
            for(string linha : linhas){
                for(char a : linha){
                    if(a==' ') cout<<' ';
                    else cout << mapaCerto[a];
                }
                cout<<endl;
            }
        }
        if(i != t-1) cout<<endl;
    }
    return 0;
}