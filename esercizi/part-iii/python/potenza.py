# potenza.py

# Calcola la potenza tramite funzione ricorsiva

# power:
#
# suppone che exponent sia un intero maggiore o uguale a 1
def power(base, exponent):
    if (exponent == 1):
        return base

    return base * power(base, exponent-1)


# main

b = 3.
e = 4

print("%g^%d = %g" % (b, e, power(b, e)))
