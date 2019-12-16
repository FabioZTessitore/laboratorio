# endurance.py

# determinare la durata massima di volo conoscendo
# la quantita' di carburante ed il consumo orario

# esempio di output
#
# Endurance
# Determina la durata massima di volo conoscendo
# la quantita' di carburante ed il consumo orario
#
# Carburante (in galloni): 1460.0
# Consumo Orario (in galloni/h): 320.0
#
# Tempo di volo: 4 h 33 min 45 sec

print("Endurance")
print("Determina la durata massima di volo conoscendo")
print("la quantita' di carburante ed il consumo orario\n")

carburante = input("Carburante (in galloni): ")
carburante = float(carburante)

consumo_h = input("Consumo Orario (in galloni/h): ")
consumo_h = float(consumo_h)

if carburante < 0:
    print("La quantita' di carburante non puo' essere negativa!")
elif consumo_h <= 0:
    print("Il consumo orario deve essere positivo!")
else:
    # tempo di volo
    t = carburante / consumo_h # h

    # ore intere
    ore = int(t)

    # minuti rimanenti
    t = t - ore
    t = t * 60 # min
    # minuti interi
    minuti = int(t)

    # secondi rimanenti
    t = t - minuti
    t = t * 60 # sec
    # secondi interi
    secondi = int(t)

    print("Durata volo:", ore, "h", minuti, "min", secondi, "sec")
