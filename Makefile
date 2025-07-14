# Nome do executável
EXEC = programa

# Arquivo fonte
SRC = testes_aula.c

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -g

# Regra padrão
all: $(EXEC)

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC)

execute: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(EXEC)


