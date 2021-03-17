# reverse.py

# Riscrive una stringa al contrario

print('Reverse the string\n')

text = input('Enter the message: ')

# crea una lista dalla stringa `text`
# quindi inverte l'ordine delle lettere
# quindi unisce le lettere in una nuova stringa
letters = [letter for letter in text]
letters.reverse()
textReversed = ''.join(letters)

print(textReversed)