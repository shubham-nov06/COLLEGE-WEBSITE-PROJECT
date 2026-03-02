import math

# Write a program to chekc whether the number is prime or not
num = int(input("ENter you number = "))
for i in range(2, num):

    if num % i == 0:
        print("number is not prime")
        break
else:
    print("Yes it is prime")


#     if num <= 1:
#         print(num, "Is not prime")
#     else:
#         is_prime = True

# if is_prime:
#     print(num, "is prime")
