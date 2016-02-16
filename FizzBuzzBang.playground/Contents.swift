//: Playground - noun: a place where people can play

import UIKit

for (var i = 1; i <= 105; i++) // have the numbers 1 - 100
    {
        if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)     // If the number is divisible by 3, 5, 7
            {
                print("FizzBuzzBang")                   // Say FizzBuzzBang
            }
        else if (i % 5 == 0 && i % 7 == 0)              // If the number is divisible by 5, 7
            {
                print("BuzzBang")                       // Say BuzzBang
            }
        else if (i % 3 == 0 && i % 5 == 0)              // If the number is divisible by 3, 5
            {
                print("FizzBuzz")                       // Say FizzBuzz
            }
        else if (i % 3 == 0 && i % 7 == 0)              // If the number is divisible by 3, 7
            {
                print("FizzBang")                       // Say FizzBang
            }
        else if (i % 3 == 0)                            // If the number is divisible by 3
            {
                print("Fizz")                           // Say Fizz
            }
        else if (i % 5 == 0)                            // If the number is divisible by 5
            {
                print("Buzz")                           // Say Buzz
            }
        else if (i % 7 == 0)                            // If the number is divisible by 7
            {
                print("Bang")                           // Say Bang
            }
        else                                            // If the number is not divisible by 3, 5, 7
            {
                print("\(i)")                           // Say the number
            }
}
