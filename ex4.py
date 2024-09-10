'''
Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado: 
•	SP – R$67.836,43 
•	RJ – R$36.678,66 
•	MG – R$29.229,88 
•	ES – R$27.165,48 
•	Outros – R$19.849,53 

Escreva um programa na linguagem que desejar onde calcule o percentual de 
representação que cada estado teve dentro do valor total mensal da distribuidora. 
'''

sp = 67_836.43 
rj = 36_678.66 
mg = 29_229.88 
es = 27_165.48 
outros = 19_849.53 

soma = sp + rj + mg + es + outros

print(f"SP: {(sp/soma)*100}%")
print(f"RJ: {(rj/soma)*100}%")
print(f"MG: {(mg/soma)*100}%")
print(f"ES: {(es/soma)*100}%")
print(f"Outros: {(outros/soma)*100}%")