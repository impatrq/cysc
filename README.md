# Comunicaciones digitales

## Consigna

- Enlazar dos Raspberry Pi Pico con algun modulo inalambrico de comunicaciones.
- Una de las Pico debe ser capaz de enviar un mensaje predeterminado en formato [JSON][json]. La informacion que se envie puede ser cualquiera siempre que se respete el formato.
- La otra Pico debe ser capaz de recibir la informacion y mostrarla en la consola con un `printf` o alguna otra interfaz.

## Modulos de comunicaciones

- Modulo de RF [nRF24L01][nRF24L01] a 2.4GHz
- Modulo de [RF][rf433mhz] a 433MHz
- Modulo bluetooth [HC-05][hc-05]
- Modulo WiFi [ESP8266-01][esp8266-01]
- Modulo [XBee][xbee]

[json]: https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Objects/JSON
[nRF24L01]: https://www.sparkfun.com/datasheets/Components/SMD/nRF24L01Pluss_Preliminary_Product_Specification_v1_0.pdf
[rf433mhz]: https://www.mantech.co.za/Datasheets/Products/433Mhz_RF-TX&RX.pdf
[hc-05]: https://components101.com/sites/default/files/component_datasheet/HC-05%20Datasheet.pdf
[esp8266-01]: https://www.microchip.ua/wireless/esp01.pdf
[xbee]: https://www.sparkfun.com/datasheets/Wireless/Zigbee/XBee-Datasheet.pdf
