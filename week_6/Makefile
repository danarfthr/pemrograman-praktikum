# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = swalayan
SRC = swalayan.cpp
TARGET_TEST = swalayan_test
SRC_TEST = swalayan_test.cpp

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

