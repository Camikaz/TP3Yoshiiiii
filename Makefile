all: executable

executable: test_polymorph.o Yoshi.o Mario.o Character.o 	
	g++ -g test_polymorph.o Yoshi.o Mario.o Character.o -o executable -std=c++11
	
test_polymorph.o: test_polymorph.cpp Character.h Yoshi.h Mario.h
	g++ -g -c test_polymorph.cpp -o test_polymorph.o -std=c++11
	
Yoshi.o: Yoshi.cpp Yoshi.h Character.h
	g++ -g -c Yoshi.cpp -o Yoshi.o -std=c++11
	
Mario.o : Mario.cpp Mario.h Character.h
	g++ -g -c Mario.cpp -o Mario.o -std=c++11

Character.o: Character.cpp Character.h
	g++ -g -c Character.cpp -o Character.o -std=c++11
	
clean:
	rm *.o
