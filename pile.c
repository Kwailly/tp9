#include "pile.h"
#include <stdio.h>

void initPile(T_Pile *P) {
    P->nbElts = -1;
}

int pilepleine(const T_Pile *P) {
    return (P->nbElts == MAX - 1);
}

int pilevide(const T_Pile *P) {
    return (P->nbElts == -1);
}

int empiler(T_Pile *P, T_Elt e) {
    if (pilepleine(P)) {
        printf("pile pleine");
        return 0;
    } else {
        P->nbElts++;
        affecterElt(&P->Elts[P->nbElts], &e); 
    }
}

int depiler(T_Pile *P, T_Elt *pelt) {
    if (pilevide(P)) {
        return 0;
        printf("pile vide");
    } else {
        affecterElt(pelt, &P->Elts[P->nbElts]); 
        P->nbElts--;
        return 1;
    }
}

T_Elt sommet(const T_Pile *P) {
    if (pilevide(P)) {
        return -1;
    } else {
        return P->Elts[P->nbElts];
    }
}

int hauteur(const T_Pile *P) {
    return P->nbElts + 1;
}

void afficherPile( T_Pile *P) {
    printf("\nContenu de la pile :\n");
    for (int i = P->nbElts; i >= 0; i--) {
        afficherElt(&P->Elts[i]); 
    }
}
