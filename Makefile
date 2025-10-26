CC = gcc
CFLAGS = -g -fPIC
SRCDIR = src
RM = rm -f

all: inmembpt dbbpt

inmembpt: $(SRCDIR)/inmembpt.o
	$(CC) $(SRCDIR)/inmembpt.o -o inmembpt

dbbpt: $(SRCDIR)/dbbpt.o
	$(CC) $(SRCDIR)/dbbpt.o -o dbbpt

$(SRCDIR)/inmembpt.o: $(SRCDIR)/inmembpt.c
	$(CC) $(CFLAGS) -c $(SRCDIR)/inmembpt.c -o $(SRCDIR)/inmembpt.o

$(SRCDIR)/dbbpt.o: $(SRCDIR)/dbbpt.c
	$(CC) $(CFLAGS) -c $(SRCDIR)/dbbpt.c -o $(SRCDIR)/dbbpt.o

clean:
	$(RM) $(SRCDIR)/*.o inmembpt dbbpt
