# Target to compile the object file
main: main.o
	g++ main.o -o main.exe

# Target to compile the C++ program
main.o: main.cpp
	g++ -c main.cpp -o main.o

# Target to run the program (interactively)
run: main
	./main.exe

# Target to compile the object Test file
mainTest: mainTest.o
	g++ mainTest.o -o mainTest.exe

# Target to compile the C++ Test program
mainTest.o: mainTest.cpp
	g++ -c mainTest.cpp -o mainTest.o

# Target to run the Test program
test: mainTest
	./mainTest.exe

# Target to clean up compiled files
clean:
	rm -f main.o mainTest.o main.exe mainTest.exe