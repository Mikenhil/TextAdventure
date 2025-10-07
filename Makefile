textadventure: textadventure.o
	g++ main.o -o textadventure

main.o: main.cpp
	g++ -c main.cpp

build:
	make main.o
	make textadventure

run: textadventure
	./textadventure

br:
	make build
	make run

clean:
	rm textadventure
	rm *.o

gitsend:
	git add --all
	git commit -m main
	git push
