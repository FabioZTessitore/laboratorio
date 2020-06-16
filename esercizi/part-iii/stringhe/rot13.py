# rot13.py

def rotate_letter(letter, n):
    if letter.islower():
        start = ord('a')
    elif letter.isupper():
        start = ord('A')
    else:
        return letter
    
    return chr(start + (ord(letter)-start + n) % 26)

def rotate(text, n):
    result = ''

    for letter in text:
        result += rotate_letter(letter, n)

    return result

def rot13(text):
    return rotate(text, 13)


print("Rot13\n\n")

plaintext = "Hello, World!"
ciphertext = rot13(plaintext)
print("plaintext: ", plaintext)
print("ciphertext: ", ciphertext)

plaintext = rot13(ciphertext)
print("plaintext again: ", plaintext)