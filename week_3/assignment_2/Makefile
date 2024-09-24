# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = num-comparison
TARGETTEST = test_num-comparison
SRC = num-comparison.cpp
SRCTEST = test_num-comparison.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the num-comparison.cpp
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