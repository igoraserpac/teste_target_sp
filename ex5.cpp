#include <bits/stdc++.h>
using namespace std;

/*
Escreva um programa que inverta os caracteres de um string. 

IMPORTANTE: 
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser
    previamente definida no código; 
b) Evite usar funções prontas, como, por exemplo, reverse; 
*/

/*
Solução complexidade de tempo O(n) e complexidade de espaço O(1):
*/

#define ll long long

int main(){
    string s;
    cin >> s;
    ll n = s.size();
    for(int i = 0; i < n/2; i++){
        swap(s[i], s[n-1-i]);
    }
    cout << s << endl;
}