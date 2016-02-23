import math

numbers = []
odd_num = []
even_num = []

print "Type in a list of positive integers. Don't repeat numbers. To finish it, type in '0'"

n = 0
while n >= 0:
	n = int(raw_input("Enter in a number: "))
	numbers.append(n)
	if n == 0:
		break

for num in numbers:
	if num == 0:
		numbers.remove(num)
	elif num == 1:
		numbers.remove(num)
	elif num % 2 == 0:
		even_num.append(num)
	else:
		odd_num.append(num)


print "Even numbers:", len(even_num), "Odd numbers:", len(odd_num),
