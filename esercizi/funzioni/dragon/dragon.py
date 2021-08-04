import random
import time

def displayIntro():
    print('''You are in a land full of dragons. In front of you,
you see two caves. In one cave, the dragon is friendly
and will share his treasure with you. The other dragon
is greedy and hungry, and will eat you on sight.\n''')

def chooseCave():
    cave = ''
    while cave != '1' and cave != '2':
        cave = input('Which cave will you go into? (1 or 2) ')
    
    return int(cave)

def checkCave(cave):
    print('You approach the cave...')
    wait()
    print('It is dark and spooky...')
    wait()
    print('A large dragon jumps out in front of you! He opens his jaws and...')
    wait()

    friendlyCave = chooseFriendlyCave()

    if cave == friendlyCave:
        print('Gives you his treasure!')
    else:
        print('Gobbles you down in one bite!')

def wait():
    time.sleep(2)

def chooseFriendlyCave():
    return random.randint(1, 2)