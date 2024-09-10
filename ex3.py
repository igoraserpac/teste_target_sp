'''
Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um 
programa, na linguagem que desejar, que calcule e retorne: 

    • O menor valor de faturamento ocorrido em um dia do mês; 
    • O maior valor de faturamento ocorrido em um dia do mês; 
    • Número de dias no mês em que o valor de faturamento diário foi superior à média mensal. 


Solução utilizando programação dinâmica com complexidade de tempo O(n) e complexidade
de espaço O(1):
'''

import json

with open("dados1.json", "r") as file:
    values = [i["valor"] for i in json.load(file) if i["valor"] != 0]

min = values[0]
max = values[0]
mean = values[0]
n = 0

for i in values:
    n += 1
    if i < min:
        min = i
    if i > max:
        max = i
    mean += i

mean /= n

n = 0

for i in values:
    if i > mean:
        n += 1

print("min:", min, "\nmax:", max, "\ngreater than mean:", n)
