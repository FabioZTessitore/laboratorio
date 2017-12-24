# distanza.py

# calcola la distanza tra due punti del piano

def distanza(P1, P2):
    # P1 e P2 sono tuple del tipo (x, y)
    dx = P1[0] - P2[0]
    dy = P1[1] - P2[1]

    return (dx**2 + dy**2)**0.5

def input_coordinate():
    x = raw_input('x: ')
    y = raw_input('y: ')

    return ( float(x), float(y) )


print "Distanza tra due punti"

print "\nPrimo punto:"
P1 = input_coordinate()

print "\nSecondo punto:"
P2 = input_coordinate()

print "\nDistanza tra i punti:", distanza(P1, P2)
