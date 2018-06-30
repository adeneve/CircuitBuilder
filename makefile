CC=g++
DEPS = main.cpp electricalComponents/*.cpp

all : builder_x

builder_x: ${DEPS} 
	$(CC) ${DEPS} -o builder_x

debug: ${DEPS}
	$(CC) -g ${DEPS} -o builder_x
	echo << starting gnu debugger
	gdb builder_x
clean:
	rm -f builder_x
