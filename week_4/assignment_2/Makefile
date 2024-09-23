 # Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = multiplication
SRC = multiplication.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the multiplication.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test