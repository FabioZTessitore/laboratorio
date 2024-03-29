# cai.py

import random

N_ANSWERS = 4

def estrai_cifra():
    """
        >>> cifre = [estrai_cifra() for i in range(1000)]
        >>> all([c >= 0 and c < 10 for c in cifre])
        True
    """
    return random.randrange(0, 10)


def estrai_risposta():
    """
        >>> risposte = [estrai_risposta() for i in range(1000)]
        >>> all([r >= 0 and r < N_ANSWERS for r in risposte])
        True
    """
    return random.randrange(0, N_ANSWERS)

def risposta_esatta():
    risposta = estrai_risposta()
    if risposta == 0:
        print("Very good!\n")
    elif risposta == 1:
        print("Excellent!\n")
    elif risposta == 2:
        print("Nice work!\n")
    elif risposta == 3:
        print("Keep up the good work!\n")
    else:
        print("Qualcosa e' andato storto!\n")

def risposta_errata():
    risposta = estrai_risposta()
    if risposta == 0:
        print("No, Please try again.\n")
    elif risposta == 1:
        print("Wrong. Try once more.\n")
    elif risposta == 2:
        print("Don't give up!\n")
    elif risposta == 3:
        print("No. Keep trying.\n")
    else:
        print("Qualcosa e' andato storto!\n")


if __name__ == '__main__':
    import doctest
    doctest.testmod()
