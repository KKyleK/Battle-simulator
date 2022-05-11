TARGET=battle
OBJECTS=battle.o Field.o Warrior.o Good_Warrior.o Evil_Warrior.o Man.o Elf.o Orc.o Troll.o
CPPFLAGS=-ansi -pedantic-errors -Wall -Wconversion -g
GCOVFLAGS=-fprofile-arcs -ftest-coverage
GTFLAGS=-lgtest -lpthread -lgtest_main




TEST: TestMan TestElf TestOrc TestTroll





TestMan: Manwith Warriorwith Good_Warriorwith Evil_Warriorwith Fieldwith test_Man.o Elfwith Orcwith Trollwith 
	g++ $(GCOVFLAGS) $(GTFLAGS) Man.o test_Man.o Good_Warrior.o Evil_Warrior.o Warrior.o Field.o Orc.o Troll.o Elf.o -o test_Man
	test_Man
	gcov Man.cpp 2> /dev/null | grep -A 1 Man.cpp



test_Man.o: Warrior.h Warrior.cpp Good_Warrior.h Good_Warrior.cpp Man.h Man.cpp test_Man.cpp Field.cpp 
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c test_Man.cpp




TestElf: Manwith Warriorwith Good_Warriorwith Evil_Warriorwith Fieldwith test_Elf.o Elfwith Orcwith Trollwith 
	g++ $(GCOVFLAGS) $(GTFLAGS) Man.o test_Elf.o Good_Warrior.o Evil_Warrior.o Warrior.o Field.o Orc.o Troll.o Elf.o -o test_Elf
	test_Elf
	gcov Elf.cpp 2> /dev/null | grep -A 1 Elf.cpp



test_Elf.o: Warrior.h Warrior.cpp Good_Warrior.h Good_Warrior.cpp Elf.h Elf.cpp test_Elf.cpp Field.cpp 
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c test_Elf.cpp





TestOrc: Manwith Warriorwith Good_Warriorwith Evil_Warriorwith Fieldwith test_Orc.o Elfwith Orcwith Trollwith 
	g++ $(GCOVFLAGS) $(GTFLAGS) Man.o test_Orc.o Good_Warrior.o Evil_Warrior.o Warrior.o Field.o Orc.o Troll.o Elf.o -o test_Orc
	test_Orc
	gcov Orc.cpp 2> /dev/null | grep -A 1 Orc.cpp


test_Orc.o: Warrior.h Warrior.cpp Good_Warrior.h Good_Warrior.cpp Orc.h Orc.cpp test_Orc.cpp Field.cpp 
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c test_Orc.cpp





TestTroll: Manwith Warriorwith Good_Warriorwith Evil_Warriorwith Fieldwith test_Troll.o Elfwith Orcwith Trollwith 
	g++ $(GCOVFLAGS) $(GTFLAGS) Man.o test_Troll.o Good_Warrior.o Evil_Warrior.o Warrior.o Field.o Orc.o Troll.o Elf.o -o test_Troll
	test_Troll
	gcov Troll.cpp 2> /dev/null | grep -A 1 Troll.cpp




test_Troll.o: Warrior.h Warrior.cpp Good_Warrior.h Good_Warrior.cpp Troll.h Troll.cpp test_Troll.cpp Field.cpp 
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c test_Troll.cpp





$(TARGET): battle.o Fieldwithout Warriorwithout Good_Warriorwithout Evil_Warriorwithout Manwithout Elfwithout Orcwithout Trollwithout
	g++ $(CPPFLAGS) $(OBJECTS) -o $(TARGET)




all: clean $(TARGET)



clean:
	/bin/rm -f *.o $(TARGET)


battle.o: battle.cpp Field.h Warrior.h
	g++ $(CPPFLAGS) -c battle.cpp

Fieldwithout: Field.cpp Field.h Warrior.h
	g++ $(CPPFLAGS) -c Field.cpp



Fieldwith: Field.cpp Field.h Warrior.h
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c Field.cpp



Warriorwithout: Warrior.cpp Warrior.h Field.h
	g++ $(CPPFLAGS) -c Warrior.cpp

Warriorwith: Warrior.cpp Warrior.h Field.h
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c Warrior.cpp





Good_Warriorwithout: Good_Warrior.cpp Good_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS)  -c Good_Warrior.cpp



Good_Warriorwith: Good_Warrior.cpp Good_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c Good_Warrior.cpp





Evil_Warriorwithout: Evil_Warrior.cpp Evil_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) -c Evil_Warrior.cpp


Evil_Warriorwith: Evil_Warrior.cpp Evil_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c Evil_Warrior.cpp








Manwithout: Man.cpp Man.h Good_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) -c Man.cpp

Manwith: Man.cpp Man.h Good_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c Man.cpp






Elfwithout: Elf.cpp Elf.h Good_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) -c Elf.cpp


Elfwith: Elf.cpp Elf.h Good_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c Elf.cpp





Orcwithout: Orc.cpp Orc.h Evil_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) -c Orc.cpp


Orcwith: Orc.cpp Orc.h Evil_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c Orc.cpp







Trollwithout: Troll.cpp Troll.h Evil_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) -c Troll.cpp


Trollwith: Troll.cpp Troll.h Evil_Warrior.h Warrior.h Field.h
	g++ $(CPPFLAGS) $(GTFLAGS) $(GCOVFLAGS) -c Troll.cpp
