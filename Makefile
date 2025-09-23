#compiler
CXX = g++

#Directories
SRC_DIR = src
INC_DIR = include
EXC_DIR = exercises

CFLAGS = -I$(INC_DIR)

TARGET = main

SRCS_EXC = $(wildcard $(EXC_DIR)/*.cpp)
SRCS_SRC = $(wildcard $(SRC_DIR)/*.cpp)
SRCS = $(SRCS_SRC) $(SRCS_EXC)


OBJS_SRC = $(patsubst src/%.cpp, %.o, $(SRCS_SRC))
OBJS_EXC = $(patsubst exercises/%.cpp, %.o, $(SRCS_EXC))
OBJS = $(OBJS_SRC) $(OBJS_EXC)

all: $(TARGET).o $(OBJS)
	$(CXX) $(TARGET).o $(OBJS) -o $(TARGET)

%.o : $(SRC_DIR)/%.cpp $(INC_DIR)/%.h $(INC_DIR)/config.h
	$(CXX) $(CFLAGS) -c $< -o $@

%.o : $(EXC_DIR)/%.cpp $(INC_DIR)/%.h $(INC_DIR)/config.h
	$(CXX) $(CFLAGS) -c $< -o $@

$(TARGET).o: $(TARGET).cpp $(INC_DIR)/config.h
	$(CXX) $(CFLAGS) -c $(TARGET).cpp

clean:
	rm *.o *.i *.s $(TARGET)