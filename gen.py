import random

# generate 500 random integers between -500 and 500
numbers = random.sample(range(0, 100), 50)

# save the numbers to a text file
with open("numbers.txt", "w") as f:
    f.write(" ".join(str(n) for n in numbers))
