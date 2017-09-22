main:	main.o Ciudadano.o Estudiante.o Maestro.o Quirk.o Emmitter.o Transform.o Mutant.o LinkedList.o
	g++ main.o Ciudadano.o Estudiante.o Maestro.o Quirk.o Emmitter.o Transform.o Mutant.o LinkedList.o -o mn

main.o:	main.cpp Ciudadano.h Estudiante.h Maestro.h Quirk.h Emmitter.h Transform.h Mutant.h LinkedList.h
	g++ -c main.cpp

Ciudadano.o:	Ciudadano.h Ciudadano.cpp
	g++ -c Ciudadano.cpp

Estudiante.o:	 Estudiante.h  Estudiante.cpp
	g++ -c  Estudiante.cpp

Maestro.o:	Maestro.h Maestro.cpp
	g++ -c Maestro.cpp

Quirk.o:	Quirk.h Quirk.cpp
	g++ -c Quirk.cpp

Emmitter.o:	Emmitter.h Emmitter.cpp
	g++ -c Emmitter.cpp

Transform.o:	Transform.h Transform.cpp
	g++ -c Transform.cpp

Mutant.o:	Mutant.h Mutant.cpp
	g++ -c Mutant.cpp

LinkedList.o:	LinkedList.h LinkedList.cpp
	g++ -c LinkedList.cpp
