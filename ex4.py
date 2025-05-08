print("Welcome to Treasure Island.")
print("Your mission is to find the treasure.")

lado = input('Voce deseja seguir para qual lado? Esquerda ou direita?').lower()
if lado == 'esquerda':
    print('Boa escolha')

    nadar = input('Voce chega a um lago, voce escolhe nadar ou esperar?').lower()
    if nadar == 'esperar':
        print('Parabens voce passou de fase')

        porta = input('Voce encontra tres portas, qual delas voce quer escolher? A porta Amarela, a porta Vermelha, a porta Azul ou prefere não escolher nenhuma das 3?').lower()
        if porta == 'amarela':
          print('Parabens voce ganhou o jogo')
        elif porta == 'vermeleha':
                 print('Voce foi queimado por fogo. Game Over.')
        elif porta == 'azul':
                print('Voce foi comido por bichos. Game Over.')
        else:
            print('Game Over')
           

    else:
        print('Voce foi atacado por Troll. Game Over.')
else:
    print('Voce caiu em um buraco profundo. Game Over.')