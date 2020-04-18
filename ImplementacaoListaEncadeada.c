#include <stdio.h>
#include <stdlib.h>

struct lista {
int info;
struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria (void)
{
  return NULL;
}

Lista* lst_insere(Lista* L, int i){
  
  Lista* novo = (Lista*)malloc(sizeof(Lista));
  novo->info = i;
  novo->prox = L;

  return novo;
}

void lst_imprime(Lista* L){

  Lista* p;

  for(p=L; p!=NULL; p=p->prox){
    printf("\nInfo = %d", p->info);
  }
}


int main (void)
{
Lista* l; /* declara uma lista não iniciada */
l = lst_cria(); /* inicia lista vazia */

/* vai inserir no início da lista */
l = lst_insere(l, 23); /* insere na lista o elemento 23 */
l = lst_insere(l, 45); /* insere na lista o elemento 45 */
l = lst_insere(l, 56); /* insere na lista o elemento 56 */
l = lst_insere(l, 78); /* insere na lista o elemento 78 */

//vai imprimir toda a lista
lst_imprime(l); /* imprimirá: 78 56 45 23 */
/*printf("\n");
  printf("\n"); */

return 0;
}