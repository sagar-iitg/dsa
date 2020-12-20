import random
import os

numCoins = 3
p = [0.6, 0.3, 0.8]
totalTosses = 20
randomSeed = 1

random.seed(randomSeed)
totalHeads = 0

outcomes = []
tosses = []
for c in range (0, numCoins):
    tosses.append(0)
    o = []
    for i in range(0, totalTosses):
        o.append("-")
    outcomes.append(o)
tossesFinished = 0

for i in range(0, totalTosses):

    os.system('clear')
    print
    for c in range(0, numCoins):
        s = ""
        for i in range(0, tosses[c]):
            s = s + outcomes[c][i] + " "
        print( "Coin " + str(c + 1) + ": " + s)
    print()
    print ("Tosses left = " + str(totalTosses - tossesFinished))
    print()
    print( "------------------------------------")

    coin = int(input("Enter Coin (1/2/3) to toss: "))
    coin -= 1
    outcome = "t"
    if(random.uniform(0, 1.0) < p[coin]):
        outcome = "h"
        totalHeads += 1

    outcomes[coin][tosses[coin]] = outcome
    tosses[coin] += 1
    tossesFinished += 1

os.system('clear')
print()
for c in range(0, numCoins):
    s = ""
    for i in range(0, tosses[c]):
        s = s + outcomes[c][i] + " "
    print ("Coin " + str(c + 1) + ": " + s)

print ("Total heads = " + str(totalHeads))

