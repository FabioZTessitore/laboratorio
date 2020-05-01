/* main.c */

/* Simulazione di una coda al supermercato */

#include <stdio.h>
#include "queue.h"
#include "random.h"

int genera_tempo_arrivo(void);
int genera_tempo_servizio(void);

int main(void)
{
    Queue q;
    
    /* cliente corrente */
    int t_prossimo_arrivo = 0;
    int t_servizio = 0;
    int t_inserito_in_coda = 0;
    int t_attesa = 0;
    
    int t_simulazione = 720; /* 720 min = 12 h */
    int max_coda = 0;
    int len_coda = 0;
    int max_attesa = 0;

    random_init();
    queue_init(&q);

    /* primo cliente */
    t_prossimo_arrivo = genera_tempo_arrivo();
    t_inserito_in_coda = t_simulazione;

    /* avanza simulazione fino all'arrivo del primo cliente */
    t_simulazione -= t_prossimo_arrivo;

    /* tempo di servizio primo cliente */
    t_servizio = genera_tempo_servizio();

    /* prossimo */
    t_prossimo_arrivo = genera_tempo_arrivo();

    while (t_simulazione > 0) {
        t_prossimo_arrivo--;
        if (t_prossimo_arrivo <= 0) {
            /* quando arriva un nuovo cliente,
                memorizza l'istante di inserimento in coda */
            queue_enqueue(&q, t_simulazione);
            t_prossimo_arrivo = genera_tempo_arrivo();

            len_coda = queue_size(&q);
            if (len_coda > max_coda) max_coda = len_coda;
        }

        t_servizio--;
        if (t_servizio <= 0) {
            if (t_servizio == 0) {
                t_attesa = t_inserito_in_coda - t_simulazione;
                printf("Servito cliente in %d (t: %d)(L: %d)\n", t_attesa, t_simulazione, len_coda);
                if (t_attesa > max_attesa) max_attesa = t_attesa;
            }
            if (!queue_isEmpty(&q)) {
                /* estrae il prossimo cliente dalla coda */
                t_inserito_in_coda = queue_dequeue(&q);
                t_servizio = genera_tempo_servizio();
            }
        }

        t_simulazione--;
    }

    queue_clear(&q);

    printf("Lunghezza massima coda: %d\n", max_coda);
    printf("Attesa massima: %d\n", max_attesa);
    
    return 0;
}

int genera_tempo_arrivo(void)
{
    return random_between(1, 5);
}

int genera_tempo_servizio(void)
{
    return random_between(1, 5);
}