CC = clang
CFLAGS =
SRC = main.c
OBJ = $(SRC:.c=.o)
EXEC = 42sh

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC)	$(OBJ)	-o	$(EXEC)

%.o: %.c
	$(CC)	$(CFLAGS)	-c	$<	-o	$@

clean:
	rm	-f	$(OBJ)	$(EXEC)