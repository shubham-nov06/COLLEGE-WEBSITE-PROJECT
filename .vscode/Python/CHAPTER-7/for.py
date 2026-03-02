# Simple examples demonstrating for loop usage in Python

print(1)
print(2)

# Compact single-line for loop printing numbers 1 to 4
for i in range(1, 5):
    print(i)

# Read an integer and print its multiplication table from 1 to 10
x = int(input("Enter your number = "))
for j in range(1, 11):
    print(x, "*", j, "=", x * j)

# Calculate and print running total of numbers 1 through 20
total = 0
for k in range(1, 21):
    total += k
    print("Sum of", k, "number are =", total)

# Print even numbers between 1 and 9
for l in range(1, 10):
    if l % 2 == 0:
        print(l, "is even")

# Nested loop example: print pairs (m, n)
for m in range(1, 3):
    for n in range(4, 5):
        print(m, n)

mylist = []
for z in range(5):
    item = input("Enter items")
    mylist.append(item)

    print("My fav list is ", mylist)




