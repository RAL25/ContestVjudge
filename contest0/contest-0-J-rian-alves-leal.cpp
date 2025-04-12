#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int w, d, h;
        cin>>w>>d>>h;
        int a,b,f,g;
        cin>>a>>b>>f>>g;
        int distancia = b + abs(a - f) + g;
        distancia = min(distancia, a + abs(b - g) + f);
        distancia = min(distancia, (d - b) + abs(a - f) + (d - g));
        distancia = min(distancia, (w - a) + abs(b - g) + (w - f));
        cout<<distancia + h<<endl;
    }
    return 0;
}