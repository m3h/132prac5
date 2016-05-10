viewer.out: numberArray.o viewer.cpp
	g++ -std=c++11 numberArray.o  viewer.cpp -o viewer.out 

numberArray.o: numberArray.h numberArray.cpp 
	g++ -std=c++11 numberArray.cpp -c

run: viewer.out
	./viewer.out