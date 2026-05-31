CXX ?= g++
AR ?= ar

CXXFLAGS ?= -Wall -Wextra -Werror -Iinclude
ARFLAGS = rcs

BUILD_DIR := build
LIB := $(BUILD_DIR)/libbecomposekit.a

SOURCES := src/BeComposeKit.cpp
OBJECTS := $(BUILD_DIR)/BeComposeKit.o

.PHONY: all check clean

all: $(LIB)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/BeComposeKit.o: src/BeComposeKit.cpp include/BeComposeKit/BeComposeKit.h | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c src/BeComposeKit.cpp -o $(BUILD_DIR)/BeComposeKit.o

$(LIB): $(OBJECTS)
	$(AR) $(ARFLAGS) $(LIB) $(OBJECTS)

check: all
	$(CXX) $(CXXFLAGS) tests/version_smoke.cpp $(LIB) -o $(BUILD_DIR)/version_smoke
	$(BUILD_DIR)/version_smoke

clean:
	rm -rf $(BUILD_DIR)
