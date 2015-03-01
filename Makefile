#
# Makefile
# Part of http://github.com/gfiumara/CIEDE2000 by Gregory Fiumara.
# See LICENSE for details.
#

.PHONY: all clean debug library test

LIBRARY = CIEDE2000
SOURCE = $(LIBRARY).cpp
OBJECT = $(SOURCE:%.cpp=%.o)
DISPOSABLE_FILES = lib$(LIBRARY).so lib$(LIBRARY).dylib $(LIBRARY).dll \
                   $(OBJECT) test$(OBJECT) test$(LIBRARY)
DISPOSABLE_DIRS = *dSYM
OS = $(shell uname)

ifneq ($(findstring MINGW,$(OS)),MINGW)
WARNING_FLAGS = -Wall -Wextra -pedantic
PRODUCTION_FLAGS = -O3
endif
DEBUG_FLAGS = -g
TEST_FLAGS = -Wno-unused-parameter

CXXFLAGS += -I. -std=c++11 $(WARNING_FLAGS) $(PRODUCTION_FLAGS)

all: library

debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: CXXFLAGS := $(filter-out $(PRODUCTION_FLAGS),$(CXXFLAGS))
debug: all

test$(LIBRARY): LDFLAGS += -L. -lCIEDE2000
test$(LIBRARY): CXXFLAGS += $(TEST_FLAGS)
test$(LIBRARY): test$(OBJECT)
	$(CXX) $^ -o $@ $(LDFLAGS)

test: library test$(LIBRARY)

library: $(LIBRARY).cpp
ifeq ($(findstring Darwin,$(OS)),Darwin)
	$(CXX) -dynamiclib $(CXXFLAGS) $^ -o lib$(LIBRARY).dylib
else
ifeq ($(findstring MINGW,$(OS)),MINGW)
	$(CXX) -shared $(CXXFLAGS) $^ -o lib$(LIBRARY).dll
else
	$(CXX) -shared $(CXXFLAGS) $^ -o lib$(LIBRARY).so
endif
endif

clean:
	$(RM) $(DISPOSABLE_FILES)
	$(RM) -r $(DISPOSABLE_DIRS)

