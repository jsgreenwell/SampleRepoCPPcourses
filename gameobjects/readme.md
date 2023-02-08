## Directory holds any custom classes and libraries
If I was building a Pong Game - I would expect a number of classes including:
- Menu (all games should have a menu)
- Ball
- Paddle
- Wall

Placeholders for those classes were made here to help show a project layout.

## Why use object models?
We would use Classes (the blueprints for our objects) to improve re-usability & modularization. 

Imagine if you actually made this game as a mobile app, and it started selling!
What would be the next steps to keep sales up?

You might say, you want to add a dlc (or just update) that allows up to 
four-players to play pong at a time (yes that's a real game) or add power-ups 
like a "multi-ball" option. By using classes, we won't need to hard code each
new ball or paddle into our main. Instead, we just need to create more instances
(instance objects) of these classes.

We'd then look at adding a standard template library (STL) class (like vector) 
to hold our instances. As this could allow us to add more dynamic code to help later scalability.

## Any other reason?
To show an incremental and iterative approach to software development. If you
look at the commits in this directory you can see each iterative of the process:
1. Created project and got it on GitHub for everyone to share
    - With the license and readme made
2. Added and built source of SFML library to ensure it is working
    - This is not ideal (due to size) but works for students to get started
3. Created a basic "Hello World" style program to test SFML working
4. Added placeholders for classes needed to build Pong
5. Start building based on flow
    - Next step: build menu to start "game" (though this will load a new blank screen at first)
    - Then: Add walls (basic lines)
    - Then: paddles (also lines)
    - Then the Ball (a simple circle)
6. Release when completed as new version (pre-release version) and start next increment (add movement)