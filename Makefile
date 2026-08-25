# Variables
CXX = g++
CXXFLAGS = -Wall -g
OBJS = main.o math_utils.o
TARGET = my_program

# Rule to link all object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile main.cpp into main.o
main.o: main.cpp math_utils.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Rule to compile math_utils.cpp into math_utils.o
math_utils.o: math_utils.cpp math_utils.h
	$(CXX) $(CXXFLAGS) -c math_utils.cpp

# Clean target to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)
