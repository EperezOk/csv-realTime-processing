#ifndef arbolesADT_h
#define arbolesADT_h
typedef struct arbolesCDT *arbolesADT;

typedef struct tVectorQuery1
{
  char *barrio;
  float cantArbolesPorHab;
} tVectorQuery1;

typedef struct tVectorQuery2
{
  char *barrio;
  char *nombreCientifico;
} tVectorQuery2;

// Crea un nuevo TAD
arbolesADT nuevoArboles();

// Agrega un barrio al vector de barrios
void agregarBarrio(arbolesADT arboles, char *nombreBarrio, int habitantes);

// Agrega un arbol a la lista de arboles del barrio nombreBarrio
void agregarArbol(arbolesADT arboles, char *nombreBarrio, char *nombreCientifico);

// Guarda el vector de barrios en arboles como una lista.
void guardarData(arbolesADT arboles);

// Devuelve la cantidad de comunas que hay en la ciudad.
unsigned int cantBarrios(arbolesADT arboles);

// QUERY 1
tVectorQuery1 *totalArbolesHabitante(arbolesADT arboles);

// QUERY 2
tVectorQuery2 *especieMasPopularPorBarrio(arbolesADT arboles);

// Libera la memoria ocupada por el TAD
void freeArboles(arbolesADT arboles);

#endif