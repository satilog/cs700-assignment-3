# Makefile for recursively compiling C++ source files

# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++11
TARGET := main

# Directories
SRC_DIR := src
OBJ_DIR := obj
INC_DIR := include

# Find all source files
SRCS := $(shell find $(SRC_DIR) -name '*.cpp')

# Generate object file names from source file names
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Include directories
INC := -I $(INC_DIR)

# Generate dependency files
DEPS := $(OBJS:.o=.d)

# Link the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INC) -MMD -MP -c -o $@ $<

# Include dependency files
-include $(DEPS)

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: clean
