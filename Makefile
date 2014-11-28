PROGS=window_size inlinetest on_exit charrange arraryaddress stringReverse stringUpper
COMPILECMD=g++ -w -Wall -ggdb $< -o $@

all: $(PROGS)

window_size: window_size.cpp
	$(COMPILECMD)

inlinetest: inlinetest.cpp
	$(COMPILECMD)

on_exit: on_exit.cpp
	$(COMPILECMD)

charrange: charrange.cpp
	$(COMPILECMD)

arraryaddress: arraryaddress.cpp
	$(COMPILECMD)

stringReverse: stringReverse.cpp
	$(COMPILECMD)

stringUpper: stringUpper.cpp
	$(COMPILECMD)

clean:
	rm -f $(PROGS)

