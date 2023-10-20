//
// Created by jimena.ccarita-asce on 20/10/2023.
//
#include <stdio.h>

char getTaxCode(int tache) {
    switch (tache) {
        case 1:
            return 'A'; //A pour done// //B pour non fait//
        case 2:
            return 'B';
        case 3:
            return 'B';
        case 4:
            return 'B';
        case 5:
            return 'A';
        case 6:
            return 'B';
        case 7:
            return 'B';
        default:
            return 1;
    }
}
int main(){
    int tache;
    char newtache;

    printf("VOICI la liste, vous pouvez mettre des taches\n(1: cuisiner,2:devoir ,3: Baigner ,4: acheter, 5: nettoyer, 6:tache, 7:tache) :",tache);
    scanf("%d", &tache);
    printf("ajouter une tâche\n");
    scanf("%c",&newtache);
    getchar();
    char taxCode = getTaxCode(tache);
    printf("VOICI votre liste\n(1: cuisiner\n,2:devoir\n ,3: Baigner\n ,4: acheter\n, 5: nettoyer\n, 6: %c\n, 7: __\n)",newtache);
    if (getTaxCode(tache)=='A'){
        printf("liste des choses faite,'A'", getTaxCode(tache), switch(tache)= return 'A');
    }else{
        printf("liste des choses faite,'B'", getTaxCode(tache));
    }
    printf("liste %c:",taxCode);




    return 0;
}
