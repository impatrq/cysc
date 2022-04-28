# ADC - Sensor de Temperatura

## Consigna

1- Usar el SDK de la Raspberry Pico para leer el valor del sensor de temperatura interno (canal 4).

2- Las conversiones deben realizarse cada 500 ms.

3- Debe mostrarse por consola el valor que devuelve el ADC en hexadecimal, el valor de tension medido y la temperatura calculada ambos con dos decimales.

4- Cada vez que se realize una conversion, el LED conectado al GPIO 25 debe parpadear.

5- Hacer un `README.md` con el siguiente contenido:

```markdown
# ADC - Sensor de Temperatura


Alumno: Nombre y apellido

Curso: Curso

Materia: Computadoras y Sistemas de Control

[Link a proyecto de Wokwi del `wokwi-project.txt`]
```

## Orientacion

- Datasheet del [RP2040][rp2040].
- Datasheet de la [Raspberry Pico][pico].
- Raspberry Pico [SDK][sdk] para C/C++.
- Documentacion de [Wokwi][wokwi].
- Pinout de la Raspberry Pico:

![pinout][pinout]

## Entrega

- Crear un repositorio con el nombre `cysc-01`.
- Subir el `README.md`, `main.c`.

[rp2040]: https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
[pico]: https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf
[sdk]: https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-c-sdk.pdf
[wokwi]: https://docs.wokwi.com/?utm_source=wokwi
[pinout]: https://www.raspberrypi.com/documentation/microcontrollers/images/Pico-R3-SDK11-Pinout.svg
