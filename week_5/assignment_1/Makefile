# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = assignment
SRC = assignment.cpp
TARGET_TEST = test
SRC_TEST = test.cpp

# Default target
all: $(TARGET)
	./$(TARGET)

# Compile the program
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean the compiled files
clean:
	rm -f $(TARGET)
	rm -f $(TARGET_TEST)

# Compile and run with test input
test: $(TARGET_TEST)
	./$(TARGET_TEST)

$(TARGET_TEST): $(SRC_TEST)
	$(CXX) $(CXXFLAGS) -o $(TARGET_TEST) $(SRC_TEST)
	./$(TARGET_TEST)
	

