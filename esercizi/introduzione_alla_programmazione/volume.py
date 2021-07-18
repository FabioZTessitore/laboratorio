# volume.py

# Calcola il volume di un cubo o di una sfera
# in base ad una scelta effettuata dall'utente.
#
# Es.
#
# Calcolo del volume di un cubo o di una sfera
# Effettua una scelta (1 - Cubo, 2 - Sfera)
# ? 1
# Lato del cubo: 2
# Il cubo di lato 2 ha volume 8

import math

print("Calcolo del volume di un cubo o di una sfera")
print("Effettua una scelta (1 - Cubo, 2 - Sfera)")
scelta = input("? ")
scelta = int(scelta)

if scelta==1:
    # cubo
    lato = input('Lato del cubo: ')
    lato = int(lato)

    volume = lato * lato * lato

    print("Il cubo di lato", lato, "ha volume", volume)

elif scelta==2:
    # sfera
    raggio = input('Raggio della sfera: ')
    raggio = int(raggio)

    volume = 4./3. * math.pi * raggio * raggio * raggio
    
    print("La sfera di raggio", raggio, "ha volume", volume)

else:
    print("Scelta non valida")
