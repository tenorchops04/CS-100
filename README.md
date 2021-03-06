# CS 100 Programming Project

## A. Group member names and email
* Preston Reed			preed004@ucr.edu
* Celvin Lizama Pena 		cliza007@ucr.edu
* Bo Yang               	byang059@ucr.edu

## B. Title of project
* Create a Class

## C. What app do you plan to work on? 
* Our project is to program the Create-a-Class menu that is typical in first-person shooter video games. In this menu, the user will be able to customize a class. A class can hold two guns and each gun can have up to 3 attachments. The player can decide which guns they want to use (choices are M4, MP7, and AK-47), as well as which attachments they want to put on those guns (silencer, scope, grip, and extended magazines). 
![Example of Create-a-Class menu](https://github.com/cs100/final-project-diversity-squad/blob/master/images/CreateAClass.png?raw=true)

## D. Why is it important and interesting?
* The Create-A-Class menu is an important aspect of many popular videogames. It is where they can design and build their character in whatever way is best for their play style. Without the Create-A-Class menu, players would have to use a generic character which they wouldn't be able to customize to their heart's content. It is an interesting program to create because it utilizes a variety of design patterns in order to construct a character that the player wants to play as. With a few number of weapon and attachment options, the player can create many different combinations.

## E. What language/tools/technology you plan to use?
* C++ with the C++ standard library.
* Composite Pattern
* Decorator Pattern
* Factory Pattern

## F. What will be the input/output of your project?
* The input of this project will be input from the user, selecting options from a menu or series of menus to construct a desired character. The output will be a string containing the guns in the class, along with each gun's attachments, and the total cost of that class.

## G. What does each pattern design serve for this final project?
![Diagram of final project](https://github.com/cs100/final-project-diversity-squad/blob/master/images/diagram.png?raw=true) 

* This is an equipment system in a first-person shooter video game. User starts with the CreateAClass object. 

### Composite Pattern
* The CreateAClass is a Composite Pattern design. The job of the composite pattern is to create the Create-a-Class menu that the player can use in order to customize their characters. In the menu, the player will have the option to customize a class. Each class is a composite. Each composite has 2 leafs, named Primary and Secondary. Each leaf has a function print() and getTotalCost(), which allows the player print the gun and get the total cost of the class. 

### Factory Pattern
* The Factory Pattern takes care of creating the guns that the player wishes to add to the Primary and Secondary leafs in the Composite Pattern. The Factory has a createGun() function, which takes a gun type as a parameter and returns a GunProduct. The GunFactory then takes care of instantiating the correct Gun Class. The gun classes are AK_47, MP_7,
and M4.
 
 ### Decorator Pattern
* The Decorator Pattern is used to decorate any gun the player wants to customize. Each of the gun concrete components have the follwing function: 
> getCost(): computes the cost of the gun and the attachments it is decorated with.
Each concrete decorator (Silencer, Scope, ExtendedMags, and Grip) has a point cost associate with it, so adding an attachment changes the cost of the gun, which has its own point cost. In order to avoid changing the code within each gun class whenever the player adds an attachment, the factory pattern allows the concrete decorators to do this.

> print(): prints the string " with " + \[name of attachment\]

### Sample Screenshot of Code
![Screenshot of Code](https://github.com/cs100/final-project-diversity-squad/blob/master/images/SampleInputOutput.png)

### How To Use the Code
When running the executable named "create", the user will be shown a menu titled "CREATE-A-CLASS MENU". There are three choices the user can make first:
> p - Choose Primary Weapon: this creates a composite of type Primary which can hold any type of gun

> s - Secondary Weapon: this creates a composite of type Secondary which can hold any type of gun

> d - Done: When the user is done creating a primary and secondary weapon, this option will print out their guns and attachments as well as the total cost of their choices.

> q - Quit: allows the user to quit out of the menu

Upon choosing either Primary or Secondary, the user will be allowed to choose a gun. Any of these options call the gunFactory to create the gun chosen.

The user is then allowed to choose a gun for his character.
> 1 - AK-47: This creates an AK-47 from the gun factory (cost: 100.25).

> 2 - MP7: This creates an MP7 from the gun factory (cost: 200.25).

> 2 - M4: This creates an M4 from the gun factory (cost: 300.25).

> 3 - Quit: allows the user to quit out of the menu 

Finally, the user is prompted to choose an attachment to add to their gun. Each of these attachments is a decorator which decorates the chosen gun:

> 1 - Scope: This decorates the gun with a scope (cost: 40).

> 2 - Extended Mags: This decorates the gun with a extended mags (cost: 10).

> 3 - Grip: This decorates the gun with a grip (cost: 20).

> 4 - Silencer: This decorates the gun with a silencer (cost: 30).

> 3 - Quit: allows the user to quit out of the menu

The user will be allowed two attachments for their primary weapon and one attachment for their secondary weapon. The user must choose and decorate both a primary and secondary weapon before they can print out their items and total cost.

