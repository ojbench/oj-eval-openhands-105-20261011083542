CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall
TARGET = code
SOURCE = main.cpp

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET)

.PHONY: clean