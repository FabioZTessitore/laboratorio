# distanza.py

# calcola la distanza tra due punti del piano

def distanza(p1, p2):
    # P1 e P2 sono tuple del tipo (x, y)
    dx = p1[0] - p2[0]
    dy = p1[1] - p2[1]

    return (dx**2 + dy**2)**0.5

def input_coordinate():
    x = input('Coordinata x ? ')
    y = input('Coordinata y ? ')

    return ( float(x), float(y) )

def stampa_coordinate(p):
    print(f'x: {p[0]}')
    print(f'y: {p[1]}')

# main
print('Distanza tra due punti')

print('Input Punto 1')
p1 = input_coordinate()
print('Input Punto 2')
p2 = input_coordinate()

print('Primo punto:')
stampa_coordinate(p1)
print('Secondo punto:')
stampa_coordinate(p2)

print(f'\nDistanza tra i punti: {distanza(p1, p2)}')
