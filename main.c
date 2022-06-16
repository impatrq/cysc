#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/util/queue.h"
#include "hardware/adc.h"
#include "hardware/pwm.h"

/* Struct para los datos de temperatura */
typedef struct {
  float lm35;
  float pote;
} temperature_data_t;

/* Queue para comunicar los dos nucleos */
queue_t queue;

/* Main para el core 1 */
void core1_main() {
  
    while(1) {
        /* Variable para recuperar el dato de la queue */
        temperature_data_t data;
        /* Espera a que esten los datos para recibir */
        queue_remove_blocking(&queue, &data);
    }
}

/* Main para el core 0 */
int main() {
    stdio_init_all();
    /* Inicializa la cola para enviar un unico dato */
    queue_init(&queue, sizeof(temperature_data_t), 1);
    /* Inicializa el core 1 */
    multicore_launch_core1(core1_main);

    while(1) {
        /* Variable para enviar los datos */
        temperature_data_t data;

      
        /* Cuando los datos estan listos, enviar por la queue */
        queue_add_blocking(&queue, &data);
    }
}
