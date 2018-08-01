# distanza.py

# calcola la distanza tra due punti del piano

def distanza(p1, p2):
    # P1 e P2 sono tuple del tipo (x, y)
    dx = p1[0] - p2[0]
    dy = p1[1] - p2[1]

    return (dx**2 + dy**2)**0.5

def input_coordinate():
    x = input('Coordinata x: ')
    y = input('Coordinata y: ')

    return ( float(x), float(y) )

def stampa_coordinate(p):
    print('x:', p[0])
    print('y:', p[1])

# main
print("Distanza tra due punti")

print("\nPunto 1:")
p1 = input_coordinate()

print("\nPunto 2:")
p2 = input_coordinate()

print("\nPrimo punto:")
stampa_coordinate(p1)

print("\nSecondo punto:")
stampa_coordinate(p2)

print("\nDistanza tra i punti:", distanza(p1, p2))
