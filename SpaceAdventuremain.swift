/*

This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike
4.0 International License, by Yong Bakos.

*/

import Foundation

let planetData = [
        
"Mercury": "A very hot planet, closest to the sun.",
"Neptune": "A very cold planet, furthest from the sun.",
"Saturn": "Has a very noticable ring around it.",
"Uranus": "Turns on its axis every 17 hours, 14 minutes!",
"Mars": "This planet is called the 'red planet' and is most likely the next destination for planet exploration.",
"Venus": "A planet that is smaller than earth and also the hottest planet, the second one closest to the sun.",
"Jupiter": "A large planet, the largest in our Solar System. The gas around the planet is deadly poisonous.",
"Pluto": "This is no longer a planet! Surprise!"

]

let systemName = "Solar System"
let planets = planetData.map { name, description in Planet(name: name, description: description)
}


let solarSystem = PlanetarySystem(name: systemName, planets: planets)
let adventure = SpaceAdventure(planetarySystem: solarSystem)
adventure.start()

// #1: 3 minutes
// #2: 3 minutes
// #3: 3 minutes
// #4: 3 minutes
// #5: 3 minutes
// #6: 10 minutes
// #7: 5 minutes
// #8: 3 minutes
// #9: 4 minutes
// #10: 10 minutes
// #11: 5 minutes
// #12: 3 minutes
// #13: 5 minutes
// #14: 5 minutes
// #15: 5 minutes
