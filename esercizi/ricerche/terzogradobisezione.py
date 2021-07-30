# terzogradobisezione.py

# L'equazione
# x^3 + 4.5 x^2 + 3.5 x - 3 = 0
# ha una soluzione nell'intervallo (0.3, 0.75)
#
# Utilizza il metodo di bisezione per determinarla

# intervallo di ricerca
low = 0.3
high = 0.75

# valore soglia per considerare nullo il primo membro
eps = 0.00001

counter = 1

print("Terzo Grado\n")

print("Data l'equazione x^3 + 4.5 x^2 + 3.5 x - 3 = 0\n")

print("Trova la soluzione compresa nell'intervallo (0.3, 0.75)")
print("mediante metodo di bisezione\n")

print("Intervallo di ricerca: (%.2f, %.2f)\n" % (low, high))

print("Valore soglia per lo zero: %.5f\n" % (eps,))

while low < high:
    # tentativo al centro dell'intervallo
    x = (low + high) / 2.

    # calcola il valore del primo membro in corrispondenza
    # degli estremi dell'intervallo di ricerca
    # e della x di tentativo
    val = x**3 + 4.5 * x**2 + 3.5 * x - 3
    lowval = low**3 + 4.5 * low**2 + 3.5 * low - 3
    highval = high**3 + 4.5 * high**2 + 3.5 * high - 3

    # se il valore calcolato al primo membro (in valore assoluto)
    # e' inferiore alla soglia scelta e' da considerarsi nullo.
    # Quindi l'equazione e' verificata!
    if abs(val) < eps:
        break

    # restringe l'intervallo di ricerca.
    # se il valore calcolato nel punto medio
    # ha lo stesso segno del valore all'estremo sinistro
    # significa che la soluzione e' nell'altro intervallo.
    # Quindi sposta l'intervallo sinistro!
    elif val * lowval > 0:
        low = x
    # Analogamente a prima, ma restringe a destra!
    else:
        high = x

    counter += 1

print("Soluzione: %.3f" % (x,))
print("Passaggi: %d" % (counter,))