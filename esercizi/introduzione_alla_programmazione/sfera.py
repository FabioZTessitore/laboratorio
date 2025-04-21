# sfera.py

# Calcolo di superficie e volume di una sfera

import math

print("Calcolo della superficie e del volume di una sfera")

print("Inserisci il raggio")
raggio = input("? ")
raggio = float(raggio)

superficie = 4. * math.pi * raggio * raggio
volume = 4. / 3. * math.pi * raggio * raggio * raggio

print(f"La sfera di raggio {raggio} ha superficie {superficie} e volume {volume}")
