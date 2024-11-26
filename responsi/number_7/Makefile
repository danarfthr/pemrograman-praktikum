CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = terbesarkedua
TARGET_TEST = terbesarkedua_test

SRC = terbesarkedua.cpp
SRC_TEST = terbesarkedua_test.cpp

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