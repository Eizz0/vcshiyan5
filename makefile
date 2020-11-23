#######################################
# Makefile PBM                        #
#                                     #
# E.B.                                #
#######################################


PROG = show

all : $(PROG)

# Variables for file compilation
CC        =  gcc
CFLAGS    =  -g -Wall
CPPFLAGS  =  -DDEBUG
LDFLAGS   =  -g -lm


show : show.o imageFormationUtils.o -lm

clean :
	@rm -f *.o

cleanall : clean
	@rm -f $(PROG)