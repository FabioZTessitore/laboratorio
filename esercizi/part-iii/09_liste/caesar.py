# caesar.py

# Il cifrario di Cesare

SYMBOLS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'

print('Caesar cipher\n')

# mode: 'E' per cifrare, 'D' per decifrare
mode = ''
while not mode in ['E', 'e', 'D', 'd']:
    mode = input('E - Encrypt, D - Decrypt: ')

# key, la chiave di cifratura (intero tra 1 e 25)
key = 0
while key < 1 or key > 25:
    key = int(input('key: '))

# text da cifrare/decifrare
text = input('Enter the message: ')

if mode in ['E', 'e']:
    for letter in text:
        letterIndex = SYMBOLS.find(letter)

        # simbolo non trovato
        if letterIndex == -1:
            print(letter)
        else:
            letterIndex += key
            if letterIndex > len(SYMBOLS):
                letterIndex -= len(SYMBOLS)
            print(SYMBOLS[letterIndex], end='')

elif mode in ['D', 'd']:
    for letter in text:
        letterIndex = SYMBOLS.find(letter)

        # simbolo non trovato
        if letterIndex == -1:
            print(letter)
        else:
            letterIndex -= key
            if letterIndex < 0:
                letterIndex += len(SYMBOLS)
            print(SYMBOLS[letterIndex], end='')

print()