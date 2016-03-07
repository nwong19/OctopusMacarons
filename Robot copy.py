import random #function needed to make random function

def twoDRandomWalk(n = 100, printOn = False): #function that explains code
	n = input("Enter in a positive integer: ") #lets user input variable n
	robot = 0 #robot is 0
	count = 0 #counts the numbers of steps made
	x = 0 #x coordinate
	y = 0 #y coordinate

	while abs(robot) != n: #if the absolute variable of robot is not equal to the number inputted
		step = random.randint(0, 3) #choose one out of 4 randomly
		if step == 0: #if 0 is choosen
			step = x - 1 #step left
		elif step == 1: #if 1 is choosen
			step = x + 1 #step right
		elif step == 2: #if 2 is choosen
			step = y - 1 #step down
		elif step == 3: #if 3 is choosen
			step = y + 1 #step up
		robot = robot + step #add the location of robot plus the step
		print robot #print the robots location (optional)
		count = count + 1 #count the number of times robot moves/steps

	return count #show count

print (twoDRandomWalk(n = 100, printOn = False)) #prints out count
