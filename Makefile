OBJ = main.o custom_fun.o
CFLAGS = -Wall -std=c99
BINARY = main
all: $(BINARY)

$(BINARY): $(OBJ)
gcc $(CFLAGS) $(OBJ) -o $(BINARY)

%.o : %.c
    gcc $(CFLAGS) -c $<

clean:
    rm $(BINARY) $(OBJ)