Project name:   GUARD-OF-HONOUR
This team has two members: KOIRALA Rupak, 3035729966, Computer Engineering
                                  
                                            : Wan Kwong Fai, 3035780142, Computer Engineering
                         
                         

A description of your game and introduce the game rules:

It is an adventurous game. the story plot- the king's valuable as well as the magical sword is stolen by a demon, nobody was successful to get back the sword to the king. now king trusted  James Gunn to get it back. James Gunn is the main player of the game. Arthur seeks out on the journey to get back the king's sword, and he does not have any idea, what he will encounter about the journey because those who tried, nobody came back alive. James is alone. after completing every challenge, the user is provided with hints (some of them are useless). now he sets out at midnight for the adventure. the only way to kill the demon is to crack down his software. demon is a robot. to win the demon, the only way is to turn off the software which is done by coding in C++ cases. the bullet can be a hint. this hint will appear on the screen for 5 seconds only. some messages can be put into the backpack. 
After crossing a cursed forest and a violent Nimbo river, he gets to see the Demon's island. Here, he encounters different genetically modified animals/ zombies. He has killed all of them to get to the Demon. There are 10 checkpoints. The final challenge will be to fight the Demon and get back the sword. 

Game Rules:(features?)
- You have three additional life. when you fail a challenge, you lose a life. when you lose all your life, the game is over.
- Each challenge has a time limit to complete. if you are unable to complete a challenge on time, you lose a life/ half-life.
- Additional tip: Remember every detail in the journey.
- bonus life- time/ sequence information. 
- the user cannot go back or skip to different challenges
- if the user manages to reach the Demon but fails to kill the Demon on time, the game is over no matter how many lives he has. 

games include
1. lucky game 
  a game required users to be lucky (such as paper, scissors, rock)
  
2. count diagram
  a diagram will be shown on the screen and the player need to sum up the numbers to find the answers
  
3. MCQ
  In this stage, will have a list of multiply choices for users to choices, and the question type may be in many topics
  
4. finding the difference
  we will have a whole screen of patterns, find out the special one and input its coordinate as soon as possible!
  
5. Brainteaser    The player is required to answer all the brain teaser questions to proceed ahead
  
6. find similarity
  There will be a list of words on the screen and the player need to find the commonplace between these elements element.
  
7. Solving mathematics equations
  The screen will show different mathematical questions everytime, and the player needs to do a fast calculation to finish this task.
  
8. decoding
  In this stage, the user needs to refer to some hint provided earlier, and decode the secret sentence.
  
9. Sudoku solving
  The player needs to solve sudoku to obtain the demo information.
  
10.gambling element/ special events
  During the adventure, the player might have a chance to tackle some events, while different choices the player chooses, may lead to a completely different ending.
  
11. Finishing coding
  In this stage, the user needs to apply their programming skills to finish a coding exercise.



Coding elements

1. Generation of random game sets or events
  For events like finding differences, counting numbers and the decoding stage question will be generated randomly.
  In the lucky game, the action of the enemy choose may be random.
  For some events like MCQ and typing test, questions will be generated from ten set questions randomly
  
2. Data structures for storing game status
  Inside the information page, the following will be shown
  1. the life remain, in the form of integer
  2. Number of stages, in the form of integer
  3. Name of character, which is James Gunn, in the form of string
  4. Location of this stage, in the form of string
  5. A backpack, in the form of structure 
  6. Getinformations() function, which will be output the information page at the request of the player.
  
3. Dynamic memory management
  Use dynamic space for output the information of the character in showing the information of the character.
  
4. File input/output(e.g. for loading/saving game status)
  The program can store all the status of the process into a file when the player requested, where this flies can be used in the game and continue next time.
  
5. program codes in multiple files
  The main.cpp will be the driver program, while in a stage of gaming will be separated into different files and will be called by main.cpp when it is used.


Compile Instructions
Run make game to compile the game. Do ./game to start the game
