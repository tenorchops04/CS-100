# CS 100 Programming Project

## A. Group member names and email
* Preston Reed			preed004@ucr.edu
* Celvin Lizama Pena 		cliza007@ucr.edu
* Bo Yang               	byang059@ucr.edu

## B. Title of project
* Create a Class

## C. What app do you plan to work on? 
* Our project is to program the Create-a-Class menu that is typical in first-person shooter video games. In this menu, the user will be able to choose which of 3 classes to customize. Each class can hold two guns and each gun can have up to 3 attachments. The player can decide which guns they want to use (choices are M4, MP7, and AK-47), as well as which attachments they want to put on those guns (silencer, scope, grip, and extended magazines). Each gun and attachment cost 1 point, and the player has 5 total points to spend per class.
![Example of Create-a-Class menu](https://github.com/cs100/final-project-diversity-squad/blob/master/images/CreateAClass.png?raw=true)

## D. Why is it important and interesting?
* The Create-A-Class menu is an important aspect of many popular videogames. It is where they can design and build their character in whatever way is best for their play style. Without the Create-A-Class menu, players would have to use a generic character which they wouldn't be able to customize to their heart's content. It is an interesting program to create because it utilizes a variety of design patterns in order to construct a character that the player wants to play as. With a few number of weapon and attachment options, the player can create many different combinations.

## E. What language/tools/technology you plan to use?
* C++ with the C++ standard library.
* Composite Pattern
* Decorator Pattern
* Factory Pattern

## F. What will be the input/output of your project?
* The input of this project will be input from the user, selecting options from a menu or series of menus to construct a desired character. The output will be all the characteristics, traits, and kit of the character.

## G. What does each pattern design serve for this final project?
![Diagram of final project](https://github.com/cs100/final-project-diversity-squad/blob/master/images/diagram.jpg?raw=true) 

* This is an equipment system in a first-person shooter video game. User starts with the CreateAClass object. 

### Composite Pattern
* The CreateAClass is a Composite Pattern design. The job of the composite pattern is to create the Create-a-Class menu that the player can use in order to customize their characters. In the menu, the player will have the option to create up to 3 distinct characters (Custom 1, Custom 2, Custom 3). Each of these characters is a composite. Each composite has 2 leafs, named Primary and Secondary. Each leaf has a function add() and remove(), which allows the player to add or remove a gun into that slot. 

### Factory Pattern
* The Factory Pattern takes care of creating the guns that the player wishes to add to the Primary and Secondary leafs in the Composite Pattern. The Factory has a Create() function, which takes a gun type as a parameter. The ConcreteGunFactory then takes care of instantiating the correct Gun Class. The gun classes are AK-47ConcreteComponent, MP-7ConcreteComponent,
and M4ConcreteComponent.
 
 ### Decorator Pattern
* The Decorator Pattern is used to decorate any gun the player wants to customize. Each of the gun concrete components have the follwing function: 
> getCost(): computes the cost of the gun and the attachments it is decorated with
Each concrete decorator (Silencer, Scope, ExtendedMags, and Grip) has a point cost associate with it, so adding or removing an attachment changes the cost of the gun, which has its own point cost. In order to avoid changing the code within each gun class whenever the player adds an attachment, the factory pattern allows the concrete decorators to do this.

