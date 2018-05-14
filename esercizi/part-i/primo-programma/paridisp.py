# paridisp.py

# chiede all'utente un numero intero e dice se e' pari o dispari

print("Inserisci un numero intero")
print("e ti diro' se e' pari o dispari")
num = input('? ')
num = int(num)

if num%2 == 0:
    print(num, "e' pari")
else:
    print(num, "e' dispari")
