print(' Bem vindo a montanha russa!')
h =  int(input('Digite sua altura: '))
conta = 0

if h>=120:
    i = int(input('Digite sua idade: '))
    if i <= 12:
        print('Seu ticket custa $5')
        conta += 5
    elif i <= 18:
        print('Seu ticket custa $7')
        conta += 7
    elif 45 <= i <= 55:
        print('Parabens seu ticket é de graça')
        conta += 0
    else:
        print('Tickets para adultos são $12')
        conta += 12

    foto = str(input('Voce deseja adquirir as fotos? Digite S para sim, N para não: '))
    if foto == 'S':
       conta += 3

    print(f'O valor final de sua compra ficará {conta}')
else:
    print('Sua altura não é pemitida')
    print('Sua altura não é pemitida')