#include "file.h" 

void initFile(T_File *ptrF) // Initialise la file en mettant Tete et Queue à -1
{
    ptrF->Tete = -1 ;
    ptrF->Queue = -1 ;
}

int retirer(T_File *ptrF, T_Elt *ptrE) // Retire un élément de la file si elle n'est pas vide
{
    if (fileVide(ptrF) == 0) {
        *ptrE = ptrF->Elts[ptrF->Tete];
        if (ptrF->Tete == ptrF->Queue) { 
            ptrF->Queue = -1;
            ptrF->Tete = -1;
        }
        else
            ptrF->Tete++;

        return *ptrE;
    }
    return 0;
}

int ajouter(T_File *ptrF, T_Elt *ptrE) // Ajoute un élément à la file si elle n'est pas pleine
{
    if (filePleine(ptrF) == 0) {
        if (fileVide(ptrF) == 1) {
            ptrF->Tete = ptrF->Queue = 0;
        }
        else 
            ptrF->Queue++;

        ptrF->Elts[ptrF->Queue] = *ptrE;
        return 1;
    }
    return 0;
} 

int fileVide(const T_File *ptrF) // Vérifie si la file est vide
{
    if (ptrF->Tete == -1) {
        return 1;
    }
    return 0;
}

int filePleine(const T_File *ptrF) // Vérifie si la file est pleine
{
    if (ptrF->Tete -1 == ptrF->Queue){

        printf("file pleine");
        return 1;
    }
    if (ptrF->Tete==0 && ptrF->Queue==MAX-1)
    {
        printf("file pleine");
        return 1;
    }
return 0;
}

T_Elt premier( T_File *ptrF) // Renvoie la valeur en tête de la file
{
    if (fileVide(ptrF) == 0)
        return ptrF->Elts[ptrF->Tete];
    return 0;
}

void afficherFile(T_File *ptrF)
{
    if (fileVide(ptrF) == 1) {
        printf("\nfile vide");
    }
    else
    {
    if (ptrF->Tete <= ptrF->Queue) {
        for (int i = ptrF->Tete; i <= ptrF->Queue; i++)
            afficherElt(&(ptrF->Elts[i]));
    }
    else {
        for (int i = ptrF->Tete; i <= MAX; i++)
           afficherElt(&(ptrF->Elts[i]));
        for (int i = 0; i <= ptrF->Queue; i++)
            afficherElt(&(ptrF->Elts[i]));
    }
    }
}
