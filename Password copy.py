m = 8 #m is the length of the password
n = 0 #n is the place in the input
password = str(raw_input("Enter in a password at least 8 characters long that contains one number, one letter and no spaces or special characters: "))
#enter in a password

while len(password) >= m: #if the password is greater than 8 characters
	letter = password[n:n+1] #setting letter to the first character in the password
	if letter.isalpha(): #if it is an alaphabet
		pass #move one
	elif letter.isalpha() == False: #if it is not an alaphabet
		print "You need at least on alaphabet in your password." #correct user
		password = str(raw_input("Enter in a password at least 8 characters long that contains one number, one letter and no spaces or special characters: "))
	elif letter.isalnum(): #if it is a number
		pass #move on
	elif letter.isalnum() == False: #if it is not a number
		print "You need at least one number in your password." #correct user, then prompt again
		password = str(raw_input("Enter in a password at least 8 characters long that contains one number, one letter and no spaces or special characters: "))
	else: #if it is neither parameter
		print "There can be no spaces or special characters." #correct user
		password = str(raw_input("Enter in a password at least 8 characters long that contains one number, one letter and no spaces or special characters: "))
	n = n + 1 #increase the character check

if len(password) < m: #if it is less than 8
	print "This password is not long enough." #correct user, ask for input
	password = str(raw_input("Enter in a password at least 8 characters long that contains one number, one letter and no spaces or special characters: "))

print "This password is valid." #print it is valid