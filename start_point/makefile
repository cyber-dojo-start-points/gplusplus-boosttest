CXXFLAGS += -I.
CXXFLAGS += -std=c++2a
CXXFLAGS += -Wall -Wextra
CXXFLAGS += -DBOOST_TEST_DYN_LINK
COVERAGE_FLAGS += -fprofile-arcs -ftest-coverage
CXXFLAGS += $(COVERAGE_FLAGS)

BOOST_LIB = -lboost_unit_test_framework

HPP_FILES = $(wildcard *.hpp)
COMPILED_HPP_FILES = $(patsubst %.hpp,%.compiled_hpp,$(HPP_FILES))
CPP_FILES = $(wildcard *.cpp)

.PHONY: test.output
test.output: test makefile
	@./$<

test: $(CPP_FILES) $(COMPILED_HPP_FILES)
	@$(CXX) $(CXXFLAGS) -O $(CPP_FILES) $(BOOST_LIB) -o $@

# This rule ensures header files build in their own right.
# The quality of header files is important because header files
# are #included from other files and thus have a large span
# of influence (unlike .cpp files which are not #included)

# hiker.hpp compiled here and hiker.cpp compiled elsewhere both claim
# hiker.gcno, so a learner's own source file can vanish from the coverage
# report. The header holds no code to measure, so leaving coverage out of this
# compile is what keeps the real coverage data intact.
%.compiled_hpp: %.hpp
	@$(CXX) -x c++ $(filter-out $(COVERAGE_FLAGS),$(CXXFLAGS)) -c -o $@ $<
