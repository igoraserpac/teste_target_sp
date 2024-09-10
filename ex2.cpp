#include <bits/stdc++.h>
using namespace std;

/*
Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre 
será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule 
a sequência de Fibonacci e retorne uma mensagem avisando se o número informado 
pertence ou não a sequência.
*/

/*
Solução utilizando programação dinâmica com complexidade de tempo O(n) e complexidade
de espaço O(1):
*/

#define ll long long

int main(){
    ll n;
    cout << "Number to be confirmed: ";
    cin >> n;
    if(n == 0){
        cout << "The number " << n << " is in Fibonacci.\n";
        return 0;
    }
    ll anterior = 0, atual = 1, temp;

    while(atual < n && atual > 0){
        temp = anterior + atual;
        cout << temp << endl;
        if(n == temp){
            cout << "The number " << n << " is in Fibonacci.\n";
            return 0;
        }
        anterior = atual;
        atual = temp;
    }
    cout << "The number " << n << " is NOT in Fibonacci.\n";
    return 0;
}