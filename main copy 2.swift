//
//  main.swift
//  InternationalFeast
//
//  Created by Natalie Wong on 1/13/16.
//  Copyright © 2016 Natalie Wong. All rights reserved.
//

import Foundation

let dishData = [
    
    "Seafood Paella": "This dish is very popular in Spain. It has a combination of shrimp, lobster, mussels, and cutttlefish. You'll get a side of white rice and various vegetables.",
    "Som Tam Salad": "This is Thailands most famous salad with garlic and chilies! We're going spicy here. They have fish sauce, peanuts, dried shrimp, tomatoes, lime juice, sugar cane paste, and string beans as well as a special addition of our green papaya. This salad comes with side of sticky rice.",
    "Chicken Rice": "This dish is often called the 'national dish' of Sigapore. This boiled chicken is served atop fragrant oily rice, with sliced cucumber as the token vegetable. As well as a dark soy sauce.",
    "Barbecue Ribs": "This delightful meal is from the United States! This is a saucy mash of chili, tomatoes, onions, pepper, and various herbs. Our chef has a special way he cooks the pig.",
    "Ankimo": "This dish is a monkfish liver with a little grated daikon on the side, from Japan. The monkfish can also be known as the anglerfish. It is one of the best dishes in Japan!",
    "Pho": "This dish is commonly mispronounced (its 'fuh') but very popular in the country of Vietnam. It's broth, fresh rice noodles, a few herbs, and chicken.",
    "Lasagna": "This popular dish is from Italy. This is the second most popular dish in Italy, right after pizza. The Lasagna is so good, they gave it five layers of pure deliciousness.",
    "Shish Kebab": "The shish kebab is a stick. Simply it. They shove meat, vegetables, shrimp, on the stick and grill it!",
    "Rendang": "This is a popular dish from Indonesia. Beef is slowly simmered with coconut milk and a mixture of lemongrass, galangal, garlic, ginger, and chilies. A combination of strong flavors all made to create this tender and flavorful dish.",
    "Hamburger": "Although there are very popular types that are famously known around the world, the hamburger originally comes from Germany. This is a meat patty, made from cow, with two buns covering both sides of the meat."
]

let Name = "International Feast"
let dishes = dishData.map { name, description in Dish(name: name, description: description)
}

let myRestaurant = InternationalFeast(name: Name, dishs: dishes)
let adventure = OrderingFood(planetarySystem: myRestaurant)
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
