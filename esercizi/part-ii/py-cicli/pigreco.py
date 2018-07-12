# pigreco.py

# Approssimazione di pi greco

pi = 0.

# segno dei termini della serie
sign = 1

print("Approssimazione di Pi Greco")
print("mediante la serie:\n")
print("4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n")

n_term = input("Quanti termini vuoi utilizzare? ")
n_term = int(n_term)
while n_term < 0:
    n_term = input("Quanti termini vuoi utilizzare? ")
    n_term = int(n_term)

print("PI: ")
for counter in range(n_term):
    pi += sign * 4./(2.*counter+1)
    sign = -sign

print(pi)
