
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main(int argc, char** argv) {

    struct s_alunno{
        
        char cognome [10];
        char nome [10];
        int classe,eta;
        char scuola [20];
    };
    
    struct s_alunno andy;
    strcpy(andy.cognome,"Sette");
    strcpy(andy.nome,"Andrea");
    andy.classe=3;
    strcpy(andy.scuola,"Superiore");
    andy.eta=16;
    
    
    printf("cognome  :  %s", andy.cognome);
    printf("     nome  :  %s", andy.nome);
    printf("      classe  :  %d", andy.classe);
    printf("       scuola  :  %s",andy.scuola);
    printf("       eta  :  %d",andy.eta);
    
    
    
    struct s_alunno gab;
    strcpy(gab.cognome,"Silvestri");
    strcpy(gab.nome,"Gabriele");
    gab.classe=3;
    strcpy(gab.scuola,"Superiore");
    gab.eta=17;
    
    printf("\ncognome  :  %s", gab.cognome);
    printf("     nome  :  %s", gab.nome);
    printf("      classe  :  %d", gab.classe);
    printf("      scuola  :  %s", gab.scuola);
    printf("       eta  :  %d",gab.eta);
    
    
    struct s_alunno marcy;
    strcpy(marcy.cognome,"Cerrotta");
    strcpy(marcy.nome,"Marcello");
    marcy.classe=1;
    strcpy(marcy.scuola,"Media");
    marcy.eta=14;
    
    printf("\ncognome  :  %s", marcy.cognome);
    printf("     nome  :  %s", marcy.nome);
    printf("      classe  :  %d", marcy.classe);
    printf("      scuola  :  %s", marcy.scuola);
    printf("       eta  :  %d",marcy.eta);
    
    return (EXIT_SUCCESS);
}

