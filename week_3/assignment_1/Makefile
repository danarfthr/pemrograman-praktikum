# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = quadratic-solver
TARGETTEST = test_quadratic-solver
SRC = quadratic-solver.cpp
SRCTEST = test_quadratic-solver.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the quadratic-solver.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)
	rm -f $(TARGETTEST)

test: ${TARGETTEST}

$(TARGETTEST): $(SRCTEST)
	$(CXX) $(CXXFLAGS) -o $(TARGETTEST) $(SRCTEST)
	./$(TARGETTEST)

# Phony targets to avoid conflicts
.PHONY: all clean test