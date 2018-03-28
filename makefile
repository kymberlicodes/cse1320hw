SRC = Code5.c
OBJ = $(SRC:.c=.o)
EXE = $(SRC:.c=.e)

CFLAGS = -g

LIBS = MyLib.o
	
all : $(EXE)

$(EXE): $(OBJ)
	gcc $(CFLAGS) $(OBJ) $(LIBS) -o $(EXE) 

$(OBJ) : $(SRC)
	gcc -c $(SRC)

	