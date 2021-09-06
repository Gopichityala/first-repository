ifdef OS
	RM=del /q
	FixPath=$(subst /,\,$1)
	EXEC=exe
else
	ifeq ($(shell uname),Linux)
	RM=rm .rf
	FixPath=$1
	EXEC=out
	endif
endif


build= main.c features.c features.h
	gcc main.c features.c features.h  -o raja.out
run:target
	./a.out
clean:
	rm *.out