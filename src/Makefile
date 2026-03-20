CXX=g++
CXXFLAGS=-std=c++20 -Wall -Wextra

clean-build:
	@make clean
	@make build

build: main.cpp file_load.o count_words.o
	$(CXX) -o word_count $^ $(CXXFLAGS)

%.o: %.c
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	@rm -rf word_count ./*.o