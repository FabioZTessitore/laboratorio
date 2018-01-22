# main.py

# CAI, esercitazioni con la moltiplicazione

import cai

contatore_risposte = 0
risposte_errate = 0
num_domande = 10

while contatore_risposte < num_domande:
    cifra1 = cai.estrai_cifra()
    cifra2 = cai.estrai_cifra()

    result = cifra1 * cifra2

    print "Domanda # %d (%d)\n" % (contatore_risposte+1, num_domande)
    print "Quanto fa %d per %d? " % (cifra1, cifra2)
    answer = input()
    contatore_risposte += 1

    if answer != result:
        risposte_errate += 1
        cai.risposta_errata()

    else:
        cai.risposta_esatta()

    while answer != result and contatore_risposte < num_domande:
        print "Domanda # %d (%d)\n" % (contatore_risposte+1, num_domande)
        print "Quanto fa %d per %d? " % (cifra1, cifra2)
        answer = input()
        contatore_risposte += 1

        if answer != result:
            risposte_errate += 1
            cai.risposta_errata()

        else:
            cai.risposta_esatta()

if float(risposte_errate) / float(num_domande) > 0.25:
    print "Please ask your instructor for extra help\n"
