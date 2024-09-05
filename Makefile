# on précise le compilateur à utiliser
CC = gcc

# on précise la liste des fichiers objets
OBJ = main.o bonjour.o

# on précise les options de compilation
CFLAGS = -std=c11 -Wall -Wextra -pedantic -ggdb
main: $(OBJ)
	$(CC) $(CFLAGS) $ˆ -o $@

# Règle implicite pour la génération des fichiers objet.
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -M

.PHONY : clean
clean:
	rm -f main *.o