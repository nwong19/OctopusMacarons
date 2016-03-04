"Lost in the Forest" by Natalie Wong

When play begins: 
	say "You are lost in the forest looking for a specific type of herb. The herb you are looking for is called Holy Basil. It's purple and tall. You need the herb to heal your sick mother. You don't know your way back home and assume you have strayed very far from your home. You can't retrace your steps. You're pretty sure that you've been walking in circles for the past hour and a half. The goal is to find your way home, find the Holy Basil, and overcome difficult tasks that come your way."
	
Forest is a room. "The forest has many different trees. They are all about 20 meters high and the lowest branch is 3 feet above you. You see a key and a stone lying on the ground. You are lost in the forest and want to find a way home and the Holy Basil to heal your sick mother. There is a clearing in the North. There are more trees Southeast. I think I saw a Lady who can help you in the North."

Clearing is a room. It is north of the forest. "In the clearing stands a Lady who looks at you. She doesn't acknowledge you in any way, just stares. You are a bit freaked out but you don't say anything. It doesn't hurt to make new friends once in a while! [if player is not carrying key]Maybe you should ask her about the key. [otherwise]You should ask her about the purple plant." Lady is a person. Lady is in the clearing. Lady is undescribed. Description of Lady is "She's a plain Jane."

Trees is a room. It is southeast of the forest. "There are even more trees and a path that leads Southwest. There is a treasure chest here. Do you perhaps have the key to open it?"

Water Hole is a room. It is southwest of the trees. "You see a purplish plant that looks like an herb. Maybe you should look at it... unless it's poisonous."

[Home is a secret room that the player doesn't know about]
Home is a room. It is northwest of the clearing. "'Wait!' says the Lady. Her arm is out trying to stop you. With the other arm, the Lady takes out a perfume bottle, sprays once, and a magical portal appears. [line break][line break] 'Go on,' says that Lady. 'When you walk through the portal, you will arrive safe at home.' [line break] [line break]You decide to trust the Lady, after all she told you how to get the key. You walk forward and the Lady gives an encouraging nod. She smiles slightly and you walk into the portal. [line break] [line break]You feel a cool breeze around your body and suddenly you're back at home. [line break] [line break]'Are you home?' calls your mother. Better go heal her with the Holy Basil you collected in the forest!"

Mirror is a thing. Mirror is in Home. "You see a mirror. You should take the mirror. Welcome Home!"

Key is a thing. Key is in the forest. Key unlocks treasure chest. "The key hangs from a branch. You can't reach it. It unlocks a treasure chest."

Purple plant is a thing. Purple plant is in the Water Hole. Purple plant is undescribed. 

Treasure chest is a closed openable container in the Trees. Treasure chest is a locked and lockable. Treasure chest is undescribed.

A pearl necklace is inside the treasure chest. 

[Stone is a important part of the story. In order to get the key, you must take the key.]
stone is thing. stone is in the Forest. The stone can be pushed. The stone can be moved. stone can be stood upon. stone is undescribed. stone is a enterable supporter. stone is portable.

After opening treasure chest:
	say "Inside the treasure chest is a pearl necklace! This must be the same pearl necklace the Lady was talking about! The pearls look real and the necklace is very pretty. You should give the necklace to the Lady... or you can keep it, whatever you choose."
	
Instead of asking the lady about "key":
	say "She stares at you and says nonchalantly, 'Push the stone to get the key... Also I recently lost a pearl necklace somewhere in the forest. If you can find my pearl necklace, I will help you show you the way home. I have also seen that purple plant you've been looking for... Holy Basil it's called? I don't remember but I think was either south or southeast from here. I'm quite an old Lady, I don't remember much. But if you could find my pearl necklace, I would be a happy old Lady!'"
	
Instead of taking the key:
	say "[If player has moved stone]You take the key. [otherwise]You can't take the key because it's to high."
	
After taking the key:
	say "You got the key and now you can open the chest!"
	
Instead of giving the pearl necklace to the lady:
	say "Thank you so much for finding my beautiful pearl necklace! [If player is not carrying Purple plant]Have you gotten the purple herb?[otherwise] If you travel Northwest, you shall find the path that leads to home.";
	Move pearl necklace to Lady.
	
Instead of asking the Lady about "purple plant":
	say "[if player is carrying the purple plant]If you travel Northwest, you shall find the path that will lead you home![otherwise]The purple plant I believe is at the Water Hole if I remember last!"
	
Instead of asking the Lady about "plant":
	say "[if player is carrying the purple plant]If you travel Northwest, you shall find the path that will lead you home![otherwise]The purple plant I believe is at the Water Hole if I remember last!"
	
After taking purple plant:
	say "You should go back to the Lady and show her your plant. Maybe she'll tell you scientific facts about it! Now you have the plant to heal your sick mother!"
	
After pushing stone:
	say "You push the stone and now you can step on top to get the key!"
	
After moving stone:
	say "You move the stone under the tree branch and now you can reach the key!"
	
After taking necklace:
	say "You should give this necklace to the Lady."
	
After taking mirror:
	say "You have reached home! You are as perfect as when you left the cottage and now you even have the Holy Basil! You're glowing and have a bright smile on your face. Have a wonderful day!"
	
Instead of taking key when player is on stone:
	say "Now that you're on top of the stone, the key is at arms length! Stretching out your hand, you just barely snatch the key from the tree.";
	Move key to player.
	
Understand "moving [something]" as pushing. Moving is an action applying to one thing. 
	
Understand "herb" as purple plant.
Understand "Holy Basil" as purple plant.

The description of the player is "I don't know what I look like in the middle of the forest."

Instead of taking stone:
	say "You don't have enough back strength to carry the stone everywhere. Shame on you for trying to hurt your back."

An every turn rule:
	if the player is carrying mirror:
		end the story finally saying "After you took the mirror, you looked very much the same. You saved your mother using the Holy Basil. You never did see the Lady again, but you always thought of her. Like 'How did she even use a PERFUME bottle to open a portal?' you never found the answer, but you knew you were always in her debt. Although she stared at you quite creepily."
		
Instead of going Northwest when player is in Clearing:
	if player is not carrying purple plant and player is not carrying necklace:
		say "You can't go that way! We have to keep going on the quest and it looks like there's dangerous poison ivy over there! Let's go a different way, it seems like a safer path.";
	otherwise:
		continue the action.
		
Instead of taking key when key has been handled:
	say "You take the key off the ground.";
	Move key to player.
	
Understand "plant" as a purple plant.
Understand "scientific facts" as purple plant.
		
[Code covering uncreated rooms that appear in descriptions.]
Instead of going nowhere, say "You can't go that way! We have to keep going on the quest and it looks like there's dangerous poison ivy over there! Let's go a different way, it seems like a safer path."
