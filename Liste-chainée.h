typedef struct{
	int  contenu ;
	struct Element  *suivant ;
}Element;

Element  *create(int a);
int est_vide (Element *L);
void afficherListe(Element *p);
