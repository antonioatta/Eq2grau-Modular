
typedef
struct vet_eq {
	int a, b, c;
	float x1, x2;
	float delta;
	int raizesReais;
} EQUACOES;

int delta(int, int, int);
int calcula_raizes(int, int, int, float *, float *);
