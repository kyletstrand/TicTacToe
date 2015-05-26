CXX = g++
CFLAGS = -c
OBJ = obj
SAV = sav
SOURCES = src/board.cxx src/*.cxx src/board.h
NLSOURCES = src/NL/*.cxx src/NL/nl.h
OBJECTS = *.o
EXECUTABLE = TicTacToe

install: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)/$(EXECUTABLE).o
	@echo "Building executable..."
	@$(CXX) $(OBJECTS) -o $(EXECUTABLE)
	@if [ ! -d $(OBJ) ]; \
		then \
			mkdir $(OBJ); \
	fi
	@if [ ! -d $(SAV) ]; \
		then \
			mkdir $(SAV); \
	fi
	@mv $(OBJECTS) $(OBJ)
	@mv src/*gch $(OBJ)
	@mv src/NL/*gch $(OBJ)
	@echo "Type ./TicTacToe to run"

$(OBJ)/$(EXECUTABLE).o: $(SOURCES) $(NLSOURCES)
	@echo "Making object files..." 
	@$(CXX) $(CFLAGS) $(SOURCES)
	@$(CXX) $(CFLAGS) $(NLSOURCES)

clean:
	@echo "Cleaning up..."
	@rm -rf *o src/*gch NL/*.o src/NL/*.gch TicTacToe $(OBJ)

