#include "pile.h"
#include "file.h"

void testFile(T_File *mafile) {
    initFile(mafile);
    T_Elt elts = 1;
    ajouter(mafile, &elts);
    elts = 2;
    ajouter(mafile, &elts);
    elts = 3;
    ajouter(mafile, &elts);
    elts = 4;
    ajouter(mafile, &elts);
    elts = 5;
    ajouter(mafile, &elts);
    elts = 6;
    ajouter(mafile, &elts);
    elts = 7;
    ajouter(mafile, &elts);
    elts = 8;
    ajouter(mafile, &elts);
    elts = 9;
    ajouter(mafile, &elts);
    elts = 10;
    ajouter(mafile, &elts);
    elts = 11;
    ajouter(mafile, &elts);
    afficherFile(mafile);
	printf("\n");
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	retirer(mafile , &elts);
	printf("\n");
	afficherFile(mafile);
	elts = 1;
    ajouter(mafile, &elts);
    elts = 2;
    ajouter(mafile, &elts);
    elts = 3;
    ajouter(mafile, &elts);
    elts = 4;
    ajouter(mafile, &elts);
    elts = 5;
    ajouter(mafile, &elts);
    elts = 6;
    ajouter(mafile, &elts);
    elts = 7;
    ajouter(mafile, &elts);
    elts = 8;
    ajouter(mafile, &elts);
    elts = 9;
    ajouter(mafile, &elts);
    elts = 10;
	ajouter(mafile, &elts);
	afficherFile(mafile);
	printf("\n");
	retirer(mafile , &elts);
	elts = 1;
    ajouter(mafile, &elts);
	afficherFile(mafile);



}

void testPile(T_Pile *mapile){
	T_Elt elts;
	
	initPile(mapile);
	empiler(mapile, 10);
    empiler(mapile, 20);
    empiler(mapile, 30);
	empiler(mapile, 40);
    empiler(mapile, 50);
    empiler(mapile, 60);
	empiler(mapile, 70);
    empiler(mapile, 80);
    empiler(mapile, 90);
	empiler(mapile, 100);
    empiler(mapile, 110);
	afficherPile(mapile);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	depiler(mapile,&elts);
	afficherPile(mapile);

}

int menu() {
    int choix;
    printf("\n\n\n SDA1 TP9");
    printf("\n\n\n 1 : tester mon fichier file.c");
    printf("\n 2 : tester mon fichier pile.c");
    printf("\n 3 : afficher et compter les permutations d'une chaine");
    printf("\n 4 : afficher et compter les solutions pour un échiquier ");
    printf("\n 0 :  QUITTER  ");
    printf("\n votre choix ?  ");
    scanf("%d", &choix);
    return choix;
}

int main() {
    T_File mafile;
    T_Pile mapile;
    int chx;

    do {
        chx = menu();
        switch (chx) {
            case 1:
                // Tester le fichier file.c
                testFile(&mafile);
                break;
            case 2:
                // Tester le fichier pile.c
               testPile(&mapile);
                break;
            case 3:
                // scanf("%s",chaine); //une chaine de longueur <=MAX
                // permut(&mapile,chaine); //TP9 partie 2: ecrire permut
                break;
            case 4:
                // scanf("%d",&taille);//taille echiquier <=MAX
                // echiquier(&mapile,taille); //TP9 partie 3: ecrire echiquier
                break;
        }
    } while (chx != 0);

    printf("\nau plaisir de vous revoir ...\n");
    return 0;
}
