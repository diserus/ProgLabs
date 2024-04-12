CC = g++
CFLAGS = -Wall -std=c++11

TARGET = main
SRCS = main.cpp sorts.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp sorts.hpp
	$(CC) $(CFLAGS) -c main.cpp

sorts.o: sorts.cpp sorts.hpp
	$(CC) $(CFLAGS) -c sorts.cpp

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)