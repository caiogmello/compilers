install:
	sudo apt-get install -f flex
	sudo apt-get install bison

compile:
	flex blite.l
	bison -d blite.y
	cc -o ../blite lex.yy.c blite.tab.c main.c

test:
	../run_test.sh

all:
	make install
	make compile
	make test
