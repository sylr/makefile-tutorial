LIBFILES	:= $(shell find . -name \*.c ! -name main.c)
LIBOBJECTS	:= $(patsubst %.c,%.o,$(LIBFILES))
LIBNAME		:= vec
LIBFILE		:= lib$(LIBNAME).a
LIBSOFILE	:= lib$(LIBNAME).so
MAINFILES	:= main.c
BINARIES	:= $(patsubst %.c,%,$(MAINFILES))

all: $(BINARIES)

%.o: %.c
	gcc -Wall -c $<

$(LIBFILE): $(LIBOBJECTS)
	ar -cq $@ $^

$(LIBSOFILE): $(LIBOBJECTS)
	gcc -shared -o $@ $^

$(BINARIES): $(MAINFILES) | $(LIBFILE) $(LIBSOFILE)
	gcc -l$(LIBNAME) -L. $< -o $@

clean:
	@git clean -fdx

.PHONY: all clean
