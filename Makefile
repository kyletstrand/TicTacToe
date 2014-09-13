CXX = g++
CFLAGS = -c
OBJ = obj
SOURCES = src/board.cxx src/*.cxx src/board.h
NLSOURCES = src/NL/*.cxx src/NL/nl.h
OBJECTS = *.o
EXECUTABLE = TicTacToe

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)/$(EXECUTABLE).o
	@echo "Building executable..."
	@$(CXX) $(OBJECTS) -o $(EXECUTABLE)
	@if [ ! -d $(OBJ) ]; \
		then \
			mkdir $(OBJ); \
	fi
	@mv $(OBJECTS) $(OBJ)
	@mv src/*gch $(OBJ)
	@mv src/NL/*gch $(OBJ)
	@echo "Type ./TicTacToe to run"

$(OBJ)/$(EXECUTABLE).o: $(SOURCES) $(NLSOURCES)
	@echo "Making source files..." 
	@$(CXX) $(CFLAGS) $(SOURCES)
	@$(CXX) $(CFLAGS) $(NLSOURCES)

clean:
	@echo "Cleaning up..."
	@rm -rf *o src/*gch NL/*.o src/NL/*.gch TicTacToe $(OBJ)

