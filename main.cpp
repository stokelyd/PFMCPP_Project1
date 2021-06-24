#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       eye
//  action 1:   the eye blinks
eye.blink();
//  action 2:   the eye focuses 
eye.focus();
//  action 3:   the eye looks left
eye.lookLeft();
//  2)
//  Noun:       star
//  action 1:   the star emits light
star.emitLight();
//  action 2:   the star emits a stellar flare
star.emitStellarFlare();
//  action 3:   the star collapses into a black hole
star.collapseToBlackHole();
//  3)
//  Noun:       bird
//  action 1:   the bird sings
bird.sing();
//  action 2:   the bird banks to the right
bird.bankRight();
//  action 3:   the bird searches for a worm
bird.searchForWorm();
//  4)
//  Noun:       lobster
//  action 1:   the lobster crawls forward
lobster.crawlForward();
//  action 2:   the lobster cleans its feelers
lobster.cleanFeelers();
//  action 3:   the lobster molts
lobster.molt();
//  5)
//  Noun:       truck
//  action 1:   the truck merges left
truck.mergeLeft();
//  action 2:   the truck honks its horn
truck.honkHorn();
//  action 3:   the truck activates its air brakes
truck.activateAirBrakes();
//  6)
//  Noun:       printer
//  action 1:   the printer prints a test page
printer.printTestPage();
//  action 2:   the printer displays an error message
printer.displayErrorMessage();
//  action 3:   the printer prints a character
printer.printCharacter;
//  7)
//  Noun:       firstChairViolinist
//  action 1:   the first chair violinist tunes the orchestra
firstChairViolinist.tuneOrchestra();
//  action 2:   the first chair violinist provides bowings
firstChairViolinist.provideBowings();
//  action 3:   the first chair violinist prepares to play
firstChairViolinist.prepareToPlay();
//  8)
//  Noun:       arborist
//  action 1:   the arborist trims a branch
arborist.trimBranch();
//  action 2:   the arborist examines a tree
arborist.examineTree();
//  action 3:   the arborist plants a tree
arborist.plantTree();
//  9)
//  Noun:       lion
//  action 1:   the lion roars
lion.roar();
//  action 2:   the lion shakes its head
lion.shakeHead();
//  action 3:   the lion goes to sleep
lion.sleep();
//  10)
//  Noun:       painter
//  action 1:   the painter cleans their brush
painter.cleanBrush();
//  action 2:   the painter climbs a ladder
painter.climbLadder();
//  action 3:   the painter estimates required paint coverage
painter.estimateCoverage();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
