CC := gcc
CFLAGS := -g -Wall -Wextra
LDLIBS := -lreadline

step0_repl:

clean:
	$(RM) step0_repl
	$(RM) -f *.o *~
