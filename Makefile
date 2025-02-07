#compiler
CXX = g++

#Directories
SRC_DIR = src
INC_DIR = include

CFLAGS = -I$(INC_DIR)

TARGET = main

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst src/%.cpp, %.o, $(SRCS))

all: $(TARGET).o $(OBJS)
	$(CXX) $(TARGET).o $(OBJS) -o $(TARGET)

%.o : $(SRC_DIR)/%.cpp $(INC_DIR)/%.h $(INC_DIR)/config.h
	$(CXX) $(CFLAGS) -c $< -o $@

$(TARGET).o: $(TARGET).cpp $(INC_DIR)/config.h
	$(CXX) $(CFLAGS) -c $(TARGET).cpp

clean:
	rm *.o *.i *.s $(TARGET)