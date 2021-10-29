Project name:   DEMON-SLAYER
This team has two members: KOIRALA Rupak, 3035729966, Computer Engineering
                         : Wan Kwong Fai, 3035780142, Computer Engineering
                         
                         
A description of your game and introduce the game rules:

Its an adventurous game. the story plot- king's valuable as well as magical sword is stollen by a demon, nobody was successful to get back the sword to the king. now king trusted  James Gunn to get it back. James Gunn is the main player of the game. james seek out on the journey to get back the king's sword, and he does not have any idea, what he will encounter about the journey because those who tried, nobody came back alive. James is alone. after completeing every challenge, the user is provided with hints (some of them are useless). now he sets out at midnight for the adventure. the only way to killl the demon is to crack down his software. demon is a robot. to win the demon, the only way is to turn of the software which is done by coding in C++ cases. bullet can be a hint. this hint will appear on the screen for 5 seconds only. some messages can be put into the backpack. 
After crossing a cursed forest and a violent Nimbo river, he gets to see the Demon's island. Here, he encounters different genetically modified animals/ zombies. He has kill all of them get to the Demon. There are 9 checkpoints. The final challenge will be to fight the Demon and get back the sword. 

Game Rules:(features?)
- You have three additional life. when you fail a challenge, you loose a life. when you loose all your life, the game is over.
- Each challenge has a time limit to complete. if you are unable to complete a challenge on time, you loose a life/ half life.
- Additional tip: Remember every detail in the journey.
- bonus life- time/ sequence information. 
- the user cannot go back or skip to different challenges
- if user manages to reach the Demon but fails to kill the Demon on time, the game is over no matter how many lives he has. 

games include
1.lucky game 
  a game required user be lucky (such as paper, scissors, rock)
  
2.count diagram
  a diagram will be showned on the screen and player need to answer how many same figure inside the diagram
  
3.MCQ
  In this stage, will have a list of multiply choices for user to choices, and the question type may be in many topics
  
4.finding difference
  we will have a whole screen of pattern, find out the special one and input its coordinate as soon as poosible!
  
5.tying test
  Player required to type a secret message or text as fast as they can in the tying test.
  
6.find similaiarity
  There will be a list of words on the screen and player need to find the common place between these element.
  
7.counting number
  The screen will show the additions and subtractions many times, and the player need to do the fast caculation to finished this task.
  
8.decoding
  In this stage, user need to refer to some hint provide and decode the secret sentence.
  
9.matching
  Player need to do matching to obtain the demo information.
  
10.gambling element/ special events
  During the adventure, player might have a chance to tackle some events, while different choices player choose, may lead to a completely different ending.
  
11.finishing coding
  In this stage, user need to apply their programming skills to finish a coding exercise.



Coding elements

1. Generation of random game sets or events
  For event like finding difference, counting number and the decoding stage quesion will be generate randomly.
  In the lucky game, the action of the enemy choose may be random.
  For some event like mcq and typing test, question will be generate from ten set questions randomly
  
2. Data structures for storing game status
  Inside the information page, following will be shown
  1.the life remain, in the form of integer
  2.Number of stage, in the form of integer
  3.Name of character, which is James Gunn, in the form of string
  4.Location of this stage, in the form of string
  5.A backpack, in the form of sturcture 
  6.Getinformations() function, which will be output the information page on the request of player.
  
3. Dynamic memory management
  Every things need to use will be generate and declared in very beginning of the program. And has reserved the places of that data use. Besides that, in the program will not use any new (c++) or malloc (c) funciton so that the dynamic memory will not be used and free function will not be used.
  
4. File input/output(e.g. for loading/saving game status)
  The program can store all the status of the process into a file when player requested, where this flies can be used into the game and continue next time.
  
5. program codes in multiple files
  The main.cpp will be the driver program, while in a stage of gaming will be separate in different files and will be called by main.cpp when it is used.
