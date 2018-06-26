# money.py

# Determina il numero minimo di banconote da 20, 10, 5 e 1

# esempio di output
#
# Money
# Determina il numero minimo di banconote.
# 
# Importo (dollari): 93
# 
# biglietti da $20: 4
# biglietti da $10: 1
# biglietti da  $5: 0
# biglietti da  $1: 3

print("Money")
print("Determina il numero minimo di banconote\n")

money_str = input("Importo (dollari): ")
money = int(money_str)

if money < 0:
    print("L'importo non puo' essere negativo!")
else:
    # biglietti da venti
    twenty = int(money / 20)

    # importo rimanente
    money -= twenty * 20

    # biglietti da 10
    ten = int(money / 10)

    # importo rimanente
    money -= ten * 10

    # biglietti da 5
    five = int(money / 5)

    # importo rimanente
    money -= five * 5

    # biglietti da 1
    one = money

    print("\nbiglietti da $20:", twenty)
    print("biglietti da $10:", ten)
    print("biglietti da  $5:", five)
    print("biglietti da  $1:", one)
