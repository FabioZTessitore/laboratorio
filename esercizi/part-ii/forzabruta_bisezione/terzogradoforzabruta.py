# terzogradoforzabruta.py

# L'equazione
# x^3 + 4.5 x^2 + 3.5 x - 3 = 0
# ha una soluzione nell'intervallo (0.3, 0.75)
#
# Utilizza il metodo a forza bruta per determinarla

# x, valore iniziale
x = 0.3

# x, valore finale
xFinale = 0.75

# passo di variazione della x
deltaX = 0.001

# valore soglia per considerare nullo il primo membro
eps = 0.00001

counter = 1

print("Terzo Grado\n")

print("Data l'equazione x^3 + 4.5 x^2 + 3.5 x - 3 = 0\n")

print("Trova la soluzione compresa nell'intervallo (0.3, 0.75)")
print("mediante metodo a forza bruta\n")

print("x")
print("\tvalore iniziale: %.2f" % (x,))
print("\tvalore finale:   %.2f" % (xFinale,))
print("\tpasso:           %.3f\n" % (deltaX,))

print("Valore soglia per lo zero: %.5f\n" % (eps,))

while x < xFinale:
    # se il valore calcolato al primo membro (in valore assoluto)
    # e' inferiore alla soglia scelta e' da considerarsi nullo.
    # Quindi l'equazione e' verificata!
    if abs(x**3 + 4.5 * x**2 + 3.5 * x - 3) < eps:
        break

    # passa alla prossima x
    x += deltaX

    counter += 1

if abs(x**3 + 4.5 * x**2 + 3.5 * x - 3) < eps:
    print("Soluzione: %.3f" % (x,))
    print("Passaggi: %d" % (counter,))
else:
    print("Sooluzione non trovata, provare a cambiare i parametri di ricerca")

