#==============================================================
# Makefile -- Make file for main program
# Time-stamp: <1999-08-04 13:14:35 tswan>
# By H.S.Rai
#==============================================================

CONFIG = ./Config.mk
include $(CONFIG)

#==============================================================
# This program's object code files

OBJS	=	main.o

#==============================================================
# File dependencies and rules

all:	main

objs:	$(OBJS)

clean:
	rm -f $(OBJS)
	rm -f *~
	rm -f main

main: $(OBJS)
	$(CC) -Wall -W -traditional -o $@ $(LFLAGS) $(OBJS) $(LIBS)

main.o:	main.cc
	$(CC) -Wall -W -traditional -c $(CFLAGS) -o $@ $<





