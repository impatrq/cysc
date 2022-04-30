# Control Proporcional

## Consigna

1- Hacer una lectura de temperatura del NTC

2- Hacer una lectura del potenciometro. Convertirlo a una referencia de temperatura (0-35 C)

3- Si la temperatura indicada por el potenciometro es mayor a la del NTC, encender proporcionalmente el LED azul (PWM)

4- Si la temperatura indicada por el potenciometro es menor a la del NTC, encender proporcionalmente el LED rojo (PWM)

5- Si se detecta movimiento desde el PIR (usar interrupciones), encender el buzzer. Apagarlo luego de 5 segundos

6- Hacer un `README.md` con el siguiente contenido:

```markdown
# Control Proporcional


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

- Crear un repositorio con el nombre `cysc-01`
- Subir el `README.md`, `main.c` y `diagram.json`

[rp2040]: https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
[pico]: https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf
[sdk]: https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-c-sdk.pdf
[wokwi]: https://docs.wokwi.com/?utm_source=wokwi
[pinout]: https://www.raspberrypi.com/documentation/microcontrollers/images/Pico-R3-SDK11-Pinout.svg
