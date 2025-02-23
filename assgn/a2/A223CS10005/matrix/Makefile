SHELL = /bin/sh
CC = gcc
CFILES = matIO.c matAlg.c 
INCLUDE = ./include
CFLAGS = -c -Wall -I $(INCLUDE)
AR = ar
LIBFOLDER = ./lib/
LIBFILE = libmatrix.a
ARFLAGS = rcs 
OBJFILES = matIO.o matAlg.o
CHMOD = chmod
LIBPERMS = 744
MV = mv
XC = matops.c 
OUTPUTFILE := matops
XFLAG = -o $(OUTPUTFILE) -L $(LIBFOLDER) -I $(INCLUDE)
XPERMS = 755
LFLAG = -lmatrix
RM = rm


all:
	$(CC) $(CFLAGS) $(CFILES)
	$(AR) $(ARFLAGS) $(LIBFILE) $(OBJFILES)
	$(CHMOD) $(LIBPERMS) $(LIBFILE)
	$(MV) $(LIBFILE) $(LIBFOLDER)
	$(CC) $(XFLAG) $(XC) $(LFLAG)
	$(CHMOD) $(XPERMS) $(OUTPUTFILE)
	
	
library:
	$(AR) $(ARFLAGS) $(LIBFILE) $(OBJFILES)
	$(CHMOD) $(LIBPERMS) $(LIBFILE)
	$(MV) $(LIBFILE) $(LIBFOLDER)
	
clean:
	$(RM) $(OBJFILES) $(LIBFOLDER)$(LIBFILE) core
	



