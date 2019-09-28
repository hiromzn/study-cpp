
all : main error

main : funcOK.o main.cpp *.h
	@echo "##### make main : OK pattern"
	LANG=C g++ -o main funcOK.o main.cpp

error : funcNG.o main.cpp *.h
	@echo "##### get ERROR : NG pattern"
	LANG=C g++ -o error funcNG.o main.cpp

funcOK.o : funcOK.cpp *.h
	g++ -c funcOK.cpp

funcNG.o : funcNG.cpp *.h
	g++ -c funcNG.cpp

clean :
	rm -f *.o main
