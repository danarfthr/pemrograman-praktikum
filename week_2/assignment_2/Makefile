# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = quadratic-solver
SRC = quadratic-solver.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the quadratic-solver.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Run the program in test mode 
test: $(TARGET)
	./$(TARGET) test

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test