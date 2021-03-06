# potenzacoda.py

# Calcola la potenza tramite funzione ricorsiva.
# Utilizza la ricorsione in coda

# power:
#
# suppone che exponent sia un intero maggiore o uguale a 1
def power(base, exponent):
    return power_helper(base, exponent, 1.)

def power_helper(base, exponent, parziale):
    if (exponent == 1):
        return base * parziale

    return power_helper(base, exponent-1, base*parziale)


# main

b = 3.
e = 4

print(f"{b}^{e} = {power(b, e)}")
