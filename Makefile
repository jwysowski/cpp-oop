CC=g++

SRC=src
OBJ=obj
BINDIR=bin
LIB=lib

LIBS=$(wildcard $(LIB)/*.hpp)
SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
BIN=$(BINDIR)/exec

CFLAGS+=-g
CFLAGS+=-Wall
CFLAGS+=-I$(LIB)

all: $(BIN)

$(BIN): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp $(LIBS)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -r $(BINDIR)/* $(OBJ)/*