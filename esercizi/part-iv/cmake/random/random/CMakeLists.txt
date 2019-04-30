# crea il target Random.
# OBJECT specifica che Random non fara' parte di una libreria,
# ma sara' un oggetto a cui potranno far riferimento altri target.
add_library(Random OBJECT random.c)

# Specifica dove verranno cercati i file inclusi nel codice (random.h incluso in random.c)
#
# Inoltre, con PUBLIC, popola la proprieta' INCLUDE_DIRECTORIES
# utilizzata dagli altri target (vedi main.c).
target_include_directories(Random PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
