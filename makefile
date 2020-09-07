driver.out: driver.c duplicates.o initializeMemory.o interface.h memtest.o addToMemory.o printMemoryState.o printScore.o
	gcc driver.c duplicates.o memtest.o addToMemory.o initializeMemory.o printScore.o printMemoryState.o -o driver.out

duplicates.o : duplicates.c 
	gcc -c duplicates.c

initializeMemory.o : initializeMemory.c 
	gcc -c initializeMemory.c

memtest.o: memtest.c interface.h
	gcc -c memtest.c

addToMemory.o : addToMemory.c 
	gcc -c addToMemory.c

printMemoryState.o : printMemoryState.c 
	gcc -c printMemoryState.c

printScore.o : printScore.c 
	gcc -c printScore.c 

clean:
	rm -f *.o *.out

