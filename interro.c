#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct element{
int entier;
struct element *suivant;
}element ;

typedef struct liste{
struct element *premier;
} liste ;

bool est_vide(liste *L)
{
if (L->premier == NULL) return true;

else return false;
}

liste *Cree()
{   liste *L = malloc(sizeof(*L));
    element *E = malloc(sizeof(*E));

    E = NULL;
    L->premier = E;

return L;
};
 

void affichage(liste *L)
{element *Q;
Q = L->premier;
    while (Q != NULL)
    {
        printf("|| %d ", Q->entier);
        Q = Q->suivant;
    }
}


void ajout(liste *L, int val)
{element *p;

	p = malloc(sizeof(*p));
	p->entier = val;
	p->suivant = L->premier;
	L->premier = p;
}


void ajout_precis(liste *L,int val,int pos)
{element *p,*q;
int i;
	if (pos == 1)
		{
  		  ajout(L,val);
		}

	else
	{
		q = L->premier;
		p = malloc(sizeof(*p));
		p->entier = val;

		for (i = 2; i < pos; i++) 
			{
			q = q->suivant;
			}

		p->suivant = q->suivant;
		q->suivant = p;
	}
}


void ajout_fin(liste *L,int val)
{element *Q,*P;

	Q = L->premier;

	while (Q->suivant!=NULL)
	{
           Q = Q->suivant;
	}

	P = malloc(sizeof(*P));
	P->entier = val;
	P->suivant = NULL;
	Q->suivant = P;

}


void ajout_tri(liste *L,int val)
{
element *p,*r,*q;
bool ins = false;
  if (est_vide(L) == false)
  {
    p = L->premier;
    while ( (p->suivant != NULL) && (ins == false) )
    {
        if (L->premier->entier < val)
        {
            ajout(L, val);
            ins = true;
        }

        else
        {
            q = p;
            p = p->suivant;
            if (p->entier < val)
            {
                r = malloc(sizeof(*r));
                r->entier = val;
                r->suivant = p;
                q->suivant = r;
                ins = true;
            }
        }

    }
    if (ins == false)
    {
            ajout_fin(L, val);

    }
  }
    else ajout(L, val);

}


int counter(liste *L)
{
element *c;
int cmp = 0;
c = L->premier;

while (c != NULL)
{
    cmp ++;
    c = c->suivant;
}
    return cmp;

}


bool recherche(liste *L, int val)
{
    bool found = false;
    element *p;
    p = L->premier;

        while (p != NULL)
        {
            if (p->entier == val)
            {
                found = true;
            }

                p = p->suivant;

            }
            return found;
        }



void suppression(liste *L, int val)
{
    element *p,*q;
    p = L->premier;
    while (p->suivant != NULL)
    {

       if (L->premier->entier == val)
       {
           L->premier = L->premier->suivant;
           free(p);
           p = L->premier;

       }
       else
       {
           q = p;
           p = p->suivant;

           if (p->entier == val)
           {
               q->suivant = p->suivant;
               free(p);
               p = q;
           }
       }
   }
}


void destruction(liste *L)
{
    element *p,*q;
    p = L->premier;

    while (p != NULL)
    {
        q = p ;
        p = p->suivant;
        free(q);
    }
    L->premier = p;
}


void suppd(liste *L)
{
    element *p,*q,*tmp;

    p = L->premier;

    while (p != NULL)
    {
       q = p;

       while (q->suivant != NULL)
       {
           if (q->suivant->entier == p->entier)
           {
               tmp = q->suivant;
               q->suivant = tmp->suivant;
               free(tmp);
           }
           else q = q->suivant;
       }

        p = p->suivant;
    }
}
void trie(liste *L){
    int n=counter(L);
    printf("%d",&n);
}

int main(){
  liste* liste1=Cree();
    ajout(liste1,30);
    ajout(liste1,40);
    ajout(liste1,50);
    trie(liste1);
    affichage(liste1);
    return 0;

}
