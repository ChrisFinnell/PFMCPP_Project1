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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       dog
//  action 1:   dig hole 
dog.digHole();
//  action 2:   eat
dog.eat();
//  action 3:   poop
dog.poop();
//  2)
//  Noun:         elevator
//  action 1:     close the doors
elevator.closeDoor();
//  action 2:     open the doors
elevator.openDoor();
//  action 3:     ascend
elevator.ascend();
//  3)
//  Noun:          plant
//  action 1:     absorb sunlight
plant.absorbLight();
//  action 2:     grow roots
plant.growRoots();
//  action 3:     bloom
plant.bloom();
//  4)
//  Noun:          watch
//  action 1:     move hour hand
watch.moveHour();
//  action 2:     move second hand
watch.moveSecond();
//  action 3:     move minute hand
watch.moveMinute();
//  5)
//  Noun:         Terminator
//  action 1:     locate John
terminator.locateJohn();
//  action 2:     say "Asta la vista"
terminator.sayCatchPhrase();
//  action 3:     walk like a robot
terminator.walkRobot();
//  6)
//  Noun:          wind
//  action 1:     blow strongly
wind.blowStrong();
//  action 2:     create gust
wind.gust();
//  action 3: c    hange direction
wind.changeDirection();
//  7)
//  Noun:          battery
//  action 1:     provide set voltage
battery.setVoltage();
//  action 2:     provide current
battery.setCurrent();
//  action 3:     power electronic device
battery.power();
//  8)
//  Noun:          electron
//  action 1:      move to another atom
electron.transfer();
//  action 2:      vibrate
electronic.vibrate();
//  action 3:      orbit nucleus 
electronic.orbitNucleus();
//  9)
//  Noun:          speaker
//  action 1:      extend speaker cone
speaker.extend();
//  action 2:      retract speaker cone
speaker.retract();
//  action 3:      increase distance of movement
speaker.increaseDistance();
//  10)
//  Noun:          brain 
//  action 1:      change brainwave to alpha
brain.toAlpha();
//  action 2:      inhibit dopamine receptor
brain.unhibitDopamine();
//  action 3:      activate neurons in neocortex
brain.fireNeocortexNeurons();


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
