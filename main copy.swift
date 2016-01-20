//
//  main.swift
//  DecimalToBinary
//
//  Created by Natalie Wong on 1/13/16.
//  Copyright © 2016 Natalie Wong. All rights reserved.
//

import Foundation

print("Hello! My name is Linda and I'm your decimal to binary personal converter. I change regular numbers to become binary code. Such as 17 is 10001. Please enter a number!")

// this is just an introduction when the person first runs the play

var number : Int? = Int(getln())

// declaring the variable 'number' as an integer that the user must pick *for the getln
// getln takes the input

while (number == nil || number < 0 || number == 0) {
    print("OH NO! It seems that I may have gone through a malfunction! I forgot to mention that you can't choose numbers less than 0 or 0! Silly me! Please, type another number for me to turn into binary.")
    
// this says that if a number is not a number (for example a letter), or equal to or less than 0, this message will print
// 'nil' captures anything that can't be turned into Integers (numbers)
    
    var doOver : Int? = Int(getln())
    
// declaring the variable doOver as an integer that the user must pick 
    
    number = doOver

// says that the variable 'number' is the same as the variable 'doOver'
    
    }

var newNumber = ""

// a variable declaring that the newNumber is an empty String

var oldNumber = String(number!)

// saying that the oldNumber will be the same thing as the variable 'number' (which has the same value as the variable 'doOver')
// the ! says that it is a number and relates to : Int? 

while number > 0 {
    
// starts a function when the number is greater than 0
    
    newNumber = String(number!%2) + newNumber
    number = number!/2

// this calculates the decimal to binary and keeps the information so the code can run left to right

    } // end of while loop
    


print("The binary number for \(oldNumber) is \(newNumber). I hope that I helped you do all the homework that you're supposed to be doing yourself! Please press 'run' again for me to calculate another one of your silly math problems.")

// TODO:
// Have it store outputs and display left to right at end
// Prompt the user for input and be able to check input
// store the answer
// divide the number in half
// Make sure it works for a range of even and odd integers

