# distanza.py

# calcola la distanza tra due punti del piano

def distanza(p1, p2):
    # P1 e P2 sono tuple del tipo (x, y)
    dx = p1[0] - p2[0]
    dy = p1[1] - p2[1]

    return (dx**2 + dy**2)**0.5

def input_coordinate(prompt):
    print(prompt)
    x = input('Coordinata x: ')
    y = input('Coordinata y: ')

    return ( float(x), float(y) )

def stampa_coordinate(prompt, p):
    print(prompt)
    print(f'x: {p[0]}')
    print(f'y: {p[1]}')

# main
print('Distanza tra due punti')

p1 = input_coordinate('Punto 1:')
p2 = input_coordinate('Punto 2:')

stampa_coordinate('Primo punto:', p1)
stampa_coordinate('Secondo punto:', p2)

print(f'\nDistanza tra i punti: {distanza(p1, p2)}')
