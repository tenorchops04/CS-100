# CS 100 Programming Project

## A. Group member names and email
* Preston Reed			preed004@ucr.edu
* Celvin Lizama Pena 		cliza007@ucr.edu
* Bo Yang               	byang059@ucr.edu

## B. Title of project
* Create a Class

## C. What app do you plan to work on? 
* Our project is to program the Create-a-Class menu that is typical in first-person shooter video games. In this menu, the user will be able to choose which of 3 classes to customize. Each class can hold two guns and each gun can have up to 3 attachments. The player can decide which guns they want to use (choices are M4, MP7, R870 MCS, and LSAT), as well as which attachments they want to put on those guns (silencer, scope, grip, and extended magazines). Each gun and attachment cost 1 point, and the player has 5 total points to spend per class.
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

* This is an equipment system in a first-person shooter video game. User starts with the CreatAClass object. 
 
* The CreateAClass is a Composite Pattern design. It is used to create an equipment organization for one character.  This CreaterAClass has two leaves and one composite node. Users can use the composite node, Custom class, to create different categories of equipment. Such as custom 1.
Inside each custom, there are two leaves, Primary and Secondary. Each of these leaves is a slot, and it can contain a decorated guy. 
 
* In order to let users design their own guns, each leaf is constructed as a Factory Pattern. Users can call creator() in a run time to load their own custom-designed-guns.
 
* Obviously, The GunProduct which is called by the creator() is a Decorating Pattern. There are three different guys and four different decorators related.


