import random #lets you use the random function 
counter = 0 #counting the number of times a certain number appears

m = 1000 #parameter of times the dice is rolled
p = 0 #counts how many times die has rolled
i = 2 #number of how many times it appears out of 1000 tries
t = [] #array to hold amoutn of numbers

roll1 = 6 #first dice
roll2 = 6 #second dice
newNum = int #sum of the two dice

def sumNumbers(roll1, roll2): #a function that includes the two die
	roll1 = random.randrange(1, 6) #first die randomly lands on any number from 1 to 6
	roll2 = random.randrange(1, 6) #second die also randomly lands on a number
	newNum = roll1 + roll2 #declares that newNum is the sum of the two die
	return newNum #displays what this number is

def appearNumbers(p): #a function that choose a i and declares how many times it appears out of 1000
	while p < m: #while the rolling is less than 1000
		if sumNumbers(roll1, roll2) == i: #if the result of the function is equal to int(i)
			t.append(sumNumbers(roll1, roll2)) #put it in the (t) list
		p = p + 1 #increase p by one so that it is run 1000 times
	return len(t) #display the length of the list (t)

def showResults(i): #a function that shows the amount 2-12 is shown
	while i <= 12: #while int (i) is less than 12
		appearNumbers(p) #run this function
		print "The number", i, "was rolled", len(t), "times" #declare how many times int(i) has been rolled out of 1000
		del t[:] #clear the list (t) so that it can start fresh
		i = i + 1 #increase the int (i) by 1 so it can declare how many times other numbers appear

print (showResults(i)) #prints that number of times 2-12 appears out of 1000 rolls

#The numbers are pretty frequent and very similar to eachother. The more numbers or
#chance there are, the more evenly the numbers will end up. They were very close to
#eachother, but I wasn't that surprised by the results.

#
#