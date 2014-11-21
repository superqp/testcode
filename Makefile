PROGS=window_size

window_size: window_size.cpp
	g++ -w -Wall -ggdb $< -o $@

clean:
	rm -f $(PROGS)

