#include <iostream>
#include "include/Context.h"
#include "include/Init.h"

//Machine State : 
// Idle
// Paiement et choix de la boisson
// Préparation
// Service du café
// Erreur lors de la marche de la machine

/*Organisation*/
// Fichier qui gère le chaque Mode
// Des composants d'interactions IHM (l'écran, le buzzer, Le moteur du café, le cuisseur
// 
int main()
{
    Context *ctx = new Context(new Init());
    ctx->request();
    delete ctx;
    return 0;
}