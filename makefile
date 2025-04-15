CC = clang
CFLAGS =
SRC = main.c
OBJ = $(SRC:.c=.o)
EXEC = 42sh
OUTDIR = build/

all: $(EXEC)

$(EXEC): $(OUTDIR)$(OBJ)
	$(CC)	$(OUTDIR)$(OBJ)	-o	$(OUTDIR)$(EXEC)

$(OUTDIR)%.o: %.c
	$(CC)	$(CFLAGS)	-c	$<	-o	$@

clean:
	rm	-f	$(OUTDIR)*
