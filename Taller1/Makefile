# Compilador
GCC = gcc

# Directorios donde se almacenan los archivos fuente (.c)
VECTORES_DIR = vectores
MATRICES_DIR = matriz
FUNCIONES_VECTORES_DIR = funcionesVectores
FUNCIONES_MATRICES_DIR = funcionesMatrices

# Archivos fuente, se utiliza para facilitar la ruta al acceso de los archivos tipo (.c)
SRC_FILES = main.c \
            $(VECTORES_DIR)/vector_dinamico.c \
            $(MATRICES_DIR)/modulo.c \
            $(FUNCIONES_VECTORES_DIR)/funciones_vectores.c \
            $(FUNCIONES_MATRICES_DIR)/funciones_matrices.c

# Archivos objeto, es la ruta a los objetos creados apartir de los archivos .c
OBJ_FILES = main.o \
            $(VECTORES_DIR)/vector_dinamico.o \
            $(MATRICES_DIR)/modulo.o \
            $(FUNCIONES_VECTORES_DIR)/funciones_vectores.o \
            $(FUNCIONES_MATRICES_DIR)/funciones_matrices.o

# Nombre del ejecutable final
PROGRAMAS = programa

# Regla principal: construye el ejecutable
compilador: $(PROGRAMAS)

# Regla para construir el ejecutable a partir de los archivos objeto
$(PROGRAMAS): $(OBJ_FILES)
	$(GCC) -o $@ $^

# Regla para compilar cada archivo fuente en un archivo objeto
%.o: %.c
	$(GCC) -c $< -o $@

# Regla para limpiar archivos generados
clear:
	rm -f $(OBJ_FILES) $(PROGRAMAS)

