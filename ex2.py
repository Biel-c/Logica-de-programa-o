print('Bem vindo a Pizzaria em Python')
tam = input('Qual tamanho de pizza voce deseja? P, M ou G? ')
pep = input('Voce deseja peperonni na sua pizza? S ou N? ')
extr = input('Voce deseja queijo extra? S ou N?')
conta = 0

if tam == 'P':
    conta += 15

elif tam == 'M':
    conta += 20

elif tam == "G":
    conta += 25
else:
    print('Digite valores validos')

if pep == 'S':
    if tam == 'P':
        conta += 2
    else:
        conta += 3

if extr == 'S':
    conta += 1

print(f'O valor final da conta é igual a: ${conta}.')