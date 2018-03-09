#Filename: Makefile
#Project: CoffeeShop
#Author: Austin Bearden
#Date Created: 1/2/18

CoffeeShop: main.o Menu.o Item.o Records.o Purchase.o storeInfo.o
	g++ main.o Menu.o Item.o Records.o Purchase.o storeInfo.o -o CoffeeShop

main.o : main.cpp
	g++ -c main.cpp -o main.o

Menu.o : Menu.cpp
	g++ -c Menu.cpp -o Menu.o

Item.o : Item.cpp
	g++ -c Item.cpp -o Item.o

Records.o : Records.cpp
	g++ -c Records.cpp -o Records.o

Purchase.o : Purchase.cpp
	g++ -c Purchase.cpp -o Purchase.o

storeInfo.o : storeInfo.cpp
	g++ -c storeInfo.cpp -o storeInfo.o

clean:
	rm -f *.o
	rm CoffeeShop

run : CoffeeShop

	./CoffeeShop
	
runmem : CoffeeShop

	valgrind --leak-check=full ./CoffeeShop