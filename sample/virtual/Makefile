
GCC_OPT	= -m64 -Wall -Wundef -Wempty-body -Wfloat-equal -Wextra -Wno-unused-parameter -Wno-missing-field-initializers

OPT = $(GCC_OPT)

all : main

main : pig.h bird.h chicken.h crow.h main.cpp
	g++ $(OPT) -o main *.cpp

clean :
	rm -f main
