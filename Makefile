PROGS=window_size inlinetest

all: $(PROGS)

window_size: window_size.cpp
	g++ -w -Wall -ggdb $< -o $@

inlinetest: inlinetest.cpp
	g++ -Wall -ggdb $< -o $@

clean:
	rm -f $(PROGS)

