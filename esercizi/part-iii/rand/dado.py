# dado.py

# lancia un dado a N facce

import random

print("Lancia un dado a N facce")

N = 0
while N <= 1:
    N = input("N = ")
    N = int(N)

print("Estraggo ...", 1 + random.randrange(N))
