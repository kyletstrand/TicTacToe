all: TicTacToe

TicTacToe: TicTacToe.o
	g++ *.o -o TicTacToe

TicTacToe.o: board.cxx *.cxx board.h
	g++ -c board.cxx *.cxx board.h

clean:
	rm -rf *o *gch TicTacToe
