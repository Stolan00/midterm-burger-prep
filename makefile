sandwichShop: driver.o hamburger.o sandwich.o meat.o
	g++ -o sandwichShop driver.o hamburger.o sandwich.o meat.o
driver.o: driver.cpp hamburger.h
	g++ -c driver.cpp
hamburger.o: sandwich.h hamburger.cpp hamburger.h
	g++ -c hamburger.cpp
sandwich.o: sandwich.cpp sandwich.h meat.h
	g++ -c sandwich.cpp
meat.o: meat.h meat.cpp
	g++ -c meat.cpp
make clean:
	rm *.o sandwichShop