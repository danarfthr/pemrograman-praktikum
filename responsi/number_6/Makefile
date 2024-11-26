CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = faktorial
TARGET_TEST = faktorial_test

SRC = faktorial.cpp
SRC_TEST = faktorial_test.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

$(TARGET_TEST): $(SRC_TEST)
	$(CXX) $(CXXFLAGS) -o $(TARGET_TEST) $(SRC_TEST)

run: $(TARGET)
	./$(TARGET)

test: $(TARGET_TEST)
	./$(TARGET_TEST)

clean:
	rm -f $(TARGET)
	rm -f $(TARGET_TEST)

.PHONY: all run test clean