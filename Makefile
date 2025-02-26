.DEFAULT_GOAL := run

build:
	mkdir -p build
	g++ -g -O3 -Ifparser4.5.2 main.cpp fparser4.5.2/fparser.cc fparser4.5.2/fpoptimizer.cc -o build/output_solution

run: build
	./build/output_solution

clean:
	rm -rf build
