all: TicTacToe

TicTacToe: TicTacToe.o
	g++ board.o -o TicTacToe

TicTacToe.o: board.cxx board.h
	g++ -c board.cxx board.h

clean:
	rm -rf *o *gch TicTacToe
