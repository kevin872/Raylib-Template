# all:
# 	clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL libraylib.a src/main.c -o main
#	./main

all:
	clang++ -std=c++20 -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL libraylib.a src/main.cpp -o main
	./main
