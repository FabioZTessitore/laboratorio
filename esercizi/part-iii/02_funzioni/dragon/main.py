import dragon

playAgain = 'yes'

while playAgain == 'yes' or playAgain == 'y':
    dragon.displayIntro()
    cave = dragon.chooseCave()
    dragon.checkCave(cave)

    playAgain = input('Do you want to play again? (yes or no) ')
    print()