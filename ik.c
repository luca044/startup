#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void quiz(){
    sleep(2);
                    system("clear");
                    printf(" Vuoi ricevere un buono sconto per l'acquisto partecipando ad un quiz?\n");
                    int q;
                    printf(" 1. Si, partecipo\n");
                    printf(" 2. No, non partecipo\n");
                    scanf(" %d", &q);
                    
                    system("clear");
                    if (q==1)
                    {
                        int y=0;
                    int t;
                    printf("In quale città ha sede il festival della musica dance ed elettronica “Tomorrowland” ?\n\n1. Boom, in Belgio\n2. Parigi, in Francia\n3. Amsterdam, in Olanda\n4. Madrid, in Spagna\n");
                    
                    
                    scanf(" %d", &t);
                    if(t==1){
                        y=y+1;
                        printf(" CORRETTO     punteggio: %d\n", y);
                    }else{
                        printf(" SBAGLIATO    punteggio: %d\n", y);
                    }
                    sleep(1);
                    system("clear");
                    printf("Nel moderno sistema musicale, quante sono, in tutto, le tonalità maggiori e minori?\n\n1.Ventiquattro\n2.Dodici\n3.Venti\n4.Trentasei\n");
                    
                    int g;
                    scanf(" %d", &g);
                    if(g==1){
                        y=y+1;
                        printf(" CORRETTO     punteggio: %d\n", y);
                    }else{
                        printf(" SBAGLIATO    punteggio: %d\n", y);
                    }
                    sleep(1);
                    system("clear");
                    printf("9. In quale opera si canta Nessun dorma?\n\n1.Cavalleria rusticana, di Mascagni\n2.Mosè, di Rossini\n3.Otello, di Verdi\n4.Turandot, di Puccini\n");
                    
                    int s;
                    scanf(" %d", &s);
                    if(s==4){
                        y=y+1;
                        printf(" CORRETTO     punteggio: %d\n", y);
                    }else{
                        printf(" SBAGLIATO    punteggio: %d\n", y);
                    }
                    sleep(1);
                    if(y==3){
                        printf("CONGRATULAZIONI!!!\n\nHai il 5x100 di sconto sull'acquisto del prossimo biglietto\n");
                    } else{
                        printf("Peccato, hai perso...\n");
                    }

                    }
                    else if (q==2)
                    {
                        
            system("clear");
            printf("Fine sessione.\n");
                    }
                    

}

void questionario()
{
    int scelta;
    
    punto3:
    printf("Che tipo di evento musicale vuoi trovare?\n");
    printf("1. Rap/Trap\n");
    printf("2. Rock\n");
    printf("3. Metal\n");
    printf("4. Techno\n");
    printf("5. Pop\n");
    printf("0. Esci\n");
    printf("Scelta: ");
    while (scelta>5)
    {
    scanf(" %d",&scelta); 
    
    switch(scelta)
    {
        case 1:
            system("clear");
            printf("Ora ti consiglieremo alcuni eventi musicali\n\n");
            if (scelta==1)
            {
                int x;
                punto1:
                printf("Ti potrebbero interessare questi eventi\n");
                printf(" 1. Tedua\n sabato, 27/07/2024 21:45\n ROMA\n\n");
                printf(" 2. Geolier\n venerdì, 28/06/2024 21:45\n ROMA\n\n");
                printf(" 3. Gemitaiz\n venerdì, 14/06/2024 21:45\n ROMA\n\n");
                printf(" 4. Torna indietro\n\n");
                printf("Scegli l'evento a cui preferisci partecipare:\n\n");
                scanf(" %d", &x);
                if (x==1 || x==2 || x==3)
                {
                    system("clear");
                    printf("Procedi all'acquisto del biglietto installando l'app\n");
                    
                } 
                else if(x==4){
                    system("clear");
                    
                    goto punto3;
                } 
                else{ 
                    printf("Scelta non consentita\n");
                    sleep(2);
                    system("clear");
                    printf("1. Torna indietro\n2. Esci\nSeleziona: ");
                    int x2;
                    scanf(" %d", &x2);
                    if(x2==1){
                        system("clear");
                        goto punto1;
                        
                    } else{
                        goto punto2;
                    }
                    
                    
                }
                
    
            }
            break;
        case 2:
            system("clear");
            printf("Ora ti consiglieremo alcuni eventi musicali\n\n");
            if (scelta==2)
            {   
                int c;
                punto11:
                printf("Ti potrebbero interessare questi eventi\n");
                printf(" 1. Deep Purple\n mercoledì, 10/07/2024 21:00\n ROMA\n\n");
                printf(" 2. Queens of the Stone Age\n giovedì, 04/07/2024 21:00\n ROMA\n\n");
                printf(" 3. Dire Straits Legacy\n lunedì, 15/04/2024 21:00\n ROMA\n\n");
                printf("Scegli l'evento a cui preferisci partecipare:\n\n");
                scanf(" %d", &c);
                if (c==1 || c==2 || c==3)
                {
                    system("clear");
                    printf("Procedi all'acquisto del biglietto installando l'app\n");
                    
                } 
                else if(c==4){
                    system("clear");
                    
                    goto punto3;
                } 
                else{ 
                    printf("Scelta non consentita\n");
                    sleep(2);
                    system("clear");
                    printf("1. Torna indietro\n2. Esci\nSeleziona: ");
                    int c2;
                    scanf(" %d", &c2);
                    if(c2==1){
                        system("clear");
                        goto punto11;
                        
                    } else{
                        goto punto2;
                    }
                    
                    
                }
            }
            break;
        case 3:
            system("clear");
            printf("Ora ti consiglieremo alcuni eventi musicali\n\n");
            if (scelta==3)
            {
                int b;
                punto1111:
                printf("Ti potrebbero interessare questi eventi\n");
                printf(" 1. Bruce Dickinson\n venerdì, 05/07/2024 20:30\n ROMA\n\n");
                printf(" 2. Soen\n giovedì, 10/10/2024 19:30\n CIAMPINO\n\n");
                printf(" 3. Babymetal\n martedì, 25/06/2024 20:00\n ROMA\n\n");
                printf("Scegli l'evento a cui preferisci partecipare:\n\n");
                scanf(" %d", &b);
                if (b==1 || b==2 || b==3)
                {
                    system("clear");
                    printf("Procedi all'acquisto del biglietto installando l'app\n");
                    
                } 
                else if(b==4){
                    system("clear");
                    
                    goto punto3;
                } 
                else{ 
                    printf("Scelta non consentita\n");
                    sleep(2);
                    system("clear");
                    printf("1. Torna indietro\n2. Esci\nSeleziona: ");
                    int b2;
                    scanf(" %d", &b2);
                    if(b2==1){
                        system("clear");
                        goto punto1111;
                        
                    } else{
                        goto punto2;
                    }
                    
                    
                }

            }
            break;
        case 4:
            system("clear");
            printf("Ora ti consiglieremo alcuni eventi musicali\n\n");
            if (scelta==4)
            {
                int a;
                punto111:
                printf("Ti potrebbero interessare questi eventi\n");
                printf(" 1. Tek-Hole\n venerdì, 09/02/2024 23:00\n ROMA\n\n");
                printf(" 2. Butterfly Loft invites Electronic Music Division\n sabato, 10/02/2024 22:30\n ROMA\n\n");
                printf(" 3. Resistance is Techno\n venerdì, 09/02/2024 23:00\n ROMA\n\n");
                printf("Scegli l'evento a cui preferisci partecipare:\n\n");
                scanf(" %d", &a);
                if (a==1 || a==2 || a==3)
                {
                    system("clear");
                    printf("Procedi all'acquisto del biglietto installando l'app\n");
                    
                } 
                else if(a==4){
                    system("clear");
                    
                    goto punto3;
                } 
                else{ 
                    printf("Scelta non consentita\n");
                    sleep(2);
                    system("clear");
                    printf("1. Torna indietro\n2. Esci\nSeleziona: ");
                    int a2;
                    scanf(" %d", &a2);
                    if(a2==1){
                        system("clear");
                        goto punto111;
                        
                    } else{
                        goto punto2;
                    }
                    
                    
                }
            }
            break;
        case 5:
            system("clear");
            printf("Ora ti consiglieremo alcuni eventi musicali\n\n");
            if (scelta==5)
            {
                int d;
                punto11111:
                printf("Ti potrebbero interessare questi eventi\n");
                printf(" 1. Marco Mengoni\n mercoledì, 02/07/2025 21:00\n ROMA\n\n");
                printf(" 2. Tananai\n mercoledì, 20/11/2024 21:00\n ROMA\n\n");
                printf(" 3. Annalisa\n domenica, 21/04/2024 21:00\n ROMA\n\n");
                printf("Scegli l'evento a cui preferisci partecipare:\n\n");
                scanf(" %d", &d);
                if (d==1 || d==2 || d==3)
                {
                    system("clear");
                    printf("Procedi all'acquisto del biglietto installando l'app\n");
                    
                } 
                else if(d==4){
                    system("clear");
                    
                    goto punto3;
                } 
                else{ 
                    printf("Scelta non consentita\n");
                    sleep(2);
                    system("clear");
                    printf("1. Torna indietro\n2. Esci\nSeleziona: ");
                    int d2;
                    scanf(" %d", &d2);
                    if(d2==1){
                        system("clear");
                        goto punto11111;
                        
                    } else{
                        goto punto2;
                    }
                    
                    
                }
            }
            break;
        case 0: 
            punto2:
            system("clear");
            printf("Fine sessione.\n");
            break;
        default:
            printf("Scelta non consentita.\n"); 
            break;
    }
    }
}

int main()
{
    printf("Ti diamo il benvenuto a Music BCL, la migliore app per trovare eventi musicali\n\n");
    
    int scelta2;
    printf("Hai già un account?\n");
    printf("1. Si, accedi\n");
    printf("2. No, registrati\n");
    printf("0. Esci\n");
    printf("Scelta: ");
    while(scelta2>2)
    {
    scanf(" %d", &scelta2);
    switch(scelta2)
    {
       case 1:
            system("clear");
            printf("Inserisci la tua email:\n");
            char email[100];
            scanf(" %s", email);
            system("clear");
            char password[100];
            printf("Inserisci la password:\n");
            scanf(" %s", password);
            system("clear");
            break;
        case 2:
            system("clear");
            printf("Inserisci il tuo nome:\n");
            char nome[100];
            scanf(" %s", nome);
            system("clear");
            char cognome[100];
            printf("Inserisci il tuo cognome:\n");
            scanf(" %s", cognome);
            system("clear");
            printf("Inserisci la città in cui vivi:\n");
            char regione[100];
            scanf(" %s", regione);
            system("clear");
            char email2[100];
            printf("Inserisci la tua email:\n");
            scanf(" %s", email2);
            system("clear");
            char password2[100];
            printf("Inserisci la password:\n");
            scanf(" %s", password2);
            system("clear");
            break;
        case 0: 
            system("clear");
            printf("Fine sessione.\n");
            printf("Alla prossima.\n");
            break;
        default: 
            printf("Scelta non consentita.\n"); 
            break; 
    }
    if (scelta2==1 || scelta2==2)
        {
            questionario();
        }
    
    }
    quiz();
    
    return 0;
}