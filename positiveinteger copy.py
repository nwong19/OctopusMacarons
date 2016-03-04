num = int(raw_input("Enter in the number of integers you will be inserting: "))
#setting num to the amount of numbers they are entering
count = 0
#counts the amount the person hits enter
n = []
#array to hold the numbers

print "Type your numbers, they can be decimals, one number per line."

while count < num:
#while the count is less than the number inputed by user
	nm = float(raw_input(""))
	#declaring the variable nm as a float
	n.append(nm)
	#putting nm into the n array
	count=count+1
	#increase the count by loop

print "The minimum is", min(n) 
print "The maximum is", max(n)
print "The average is", sum(n)/len(n)

