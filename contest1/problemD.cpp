#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    string aux;
    string padrao = "the quick brown fox jumps over the lazy dog";
    getline(cin, aux);
    t = stoi(aux);
    getline(cin,aux);
    while(t--){
        vector<string> frases;
        bool check;
        while(getline(cin,aux)){
            if(aux.empty()) break;
            frases.push_back(aux);
            
        }
        if(!(t-1)) cout<<endl;
    }
    return 0;
}