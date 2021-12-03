FLAGS = -pedantic -errors -std=c++11

q1.o: q1.cpp head.h
	g++ $(FLAGS) -c $<
  
q2.o: q2.cpp head.h
	g++ $(FLAGS) -c $<
  
q3.o: q3.cpp head.h
	  g++ $(FLAGS) -c $<
  
q4.o: q4.cpp head.h
	  g++ $(FLAGS) -c $<
  
q5.o: q5.cpp head.h
	  g++ $(FLAGS) -c $<
  
q6.o: q6.cpp head.h
	  g++ $(FLAGS) -c $<
  
q7.o: q7.cpp head.h
	  g++ $(FLAGS) -c $<
  
q8.o: q8.cpp head.h
	  g++ $(FLAGS) -c $<
  
q9.o: q9.cpp head.h
	  g++ $(FLAGS) -c $<
  
q10.o: q10.cpp head.h
	  g++ $(FLAGS) -c $<
  
Bonus_shop.o: Bonus_shop.cpp head.h
	  g++ $(FLAGS) -c $<

BOSS.o: BOSS.cpp head.h
	  g++ $(FLAGS) -c $<

load_save_file.o: load_save_file.cpp  head.h
	  g++ $(FLAGS) -c $<

main.o: main.cpp  head.h
	  g++ $(FLAGS) -c $<
  
proceed_game_stage.o: proceed_game_stage.cpp  head.h
	  g++ $(FLAGS) -c $<

readdata.o: readdata.cpp head.h
	  g++ $(FLAGS) -c $<

head.o: head.cpp head.h
	g++ $(FLAGS) -c $<
  
game: main.o Bonus_shop.o BOSS.o head.o load_save_file.o proceed_game_stage.o q1.o q2.o q3.o q4.o q5.o q6.o q7.o q8.o q9.o q10.o
	g++ $(flags) $^ -o $@
  
clean:
	rm -rf *.o game

tar:
	tar -czvf game.tgz *.cpp *.h

.PHONY: clean tar
