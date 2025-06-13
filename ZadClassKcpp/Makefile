CXX = g++
CXXFLAGS = -std=c++11 -Iinclude -Wall

SRC_DIR = src
SRCS = $(wildcard $(SRC_DIR)/*.cc)
OBJS = $(SRCS:.cc=.o)

EXEC = zad6_1

all: $(EXEC)

$(EXEC): $(OBJS) main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o: $(SRC_DIR)/%.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) main.o $(EXEC)

.PHONY: all clean