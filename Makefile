CXX ?= g++
AR ?= ar

CXXFLAGS ?= -Wall -Wextra -Werror -Iinclude
ARFLAGS = rcs
LDLIBS ?= -lbe

BUILD_DIR := build
LIB := $(BUILD_DIR)/libbecomposekit.a

SOURCES := \
	src/BeComposeKit.cpp \
	src/BeCommand.cpp

OBJECTS := $(SOURCES:src/%.cpp=$(BUILD_DIR)/%.o)

.PHONY: all check clean

all: $(LIB)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: src/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(LIB): $(OBJECTS)
	$(AR) $(ARFLAGS) $(LIB) $(OBJECTS)

check: all
	$(CXX) $(CXXFLAGS) tests/version_smoke.cpp $(LIB) $(LDLIBS) -o $(BUILD_DIR)/version_smoke
	$(BUILD_DIR)/version_smoke
	$(CXX) $(CXXFLAGS) tests/becommand_smoke.cpp $(LIB) $(LDLIBS) -o $(BUILD_DIR)/becommand_smoke
	$(BUILD_DIR)/becommand_smoke

clean:
	rm -rf $(BUILD_DIR)
