//
//  main.swift
//  PrimeOrComposite
//
//  Created by Natalie Wong on 1/20/16.
//  Copyright © 2016 Natalie Wong. All rights reserved.
//

import Foundation

// TODO:
// Prompt for a positive integer that is greater than one
// Find if the number is prime or

print("Hello, I'm a calculator who is going to help you find out if a number is prime or composite. Let's get crackin!")

var number : Int? = Int(getln())
var pc = "prime"
var divisor = 2.0

while (number == nil || number < 2) {
    print("M aa l fun cc c ti o n. Please input another numberrr... ")
    var doOver : Int? = Int(getln())
    number = doOver
}

let throwAway : Double
throwAway = Double(number!) // ! to say we made sure it is a number

while divisor <= sqrt(throwAway) {
    
   // print(divisor)

    if (throwAway%divisor) == 0
    {
        pc = "composite"
        break
    }
    divisor = divisor + 1
    
}

print("OMGGGGGG this number: \(throwAway) is \(pc). How cool is that? Huh? That is sooo cool! Why don't you run me again :)")

// prime factors: 1 and itself
// when can you stop naming numbers
// square roots