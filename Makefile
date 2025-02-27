.DEFAULT_GOAL := all

all: clean build run

build:
	mkdir -p build
	g++ -g -O3 -Ifparser main.cpp fparser/fparser.cc fparser/fpoptimizer.cc -o build/output_solution

run: build
	./build/output_solution

clean:
	rm -rf build
