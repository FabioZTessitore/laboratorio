# mancia.py

# calcola la mancia al 15% e al 20%

conto = input("Conto del ristorante: ")
conto = float(conto)

mancia15 = conto * .15
mancia20 = conto * .20

print(f"Mancia al 15%: {mancia15:.2f}")
print(f"Mancia al 20%: {mancia20:.2f}")
