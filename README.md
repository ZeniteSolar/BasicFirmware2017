# Basic Firmware 2017
Versão básica do firmware utilizadas pelos módulos da embarcação Guarapuvu II (Zênite Solar) para o DSB 2017.

## Panorama geral:
* src/conf.h -> configurações gerais do firmware, incluso em todos os cabeçalhos de módulos;
* src/main.h -> onde o sistema é inicializado;
* src/machine.h -> motor da máquina de estados do sistema: onde as principais funcionalidades são implementadas;
* src/adc.h -> módulo ADC;
* src/usart.h -> módulo USART;
* src/dbg_vrb.h -> define macros para debug e verbose;
* src/sleep.h -> módulo SLEEP;
* src/can.h -> configurações da rede CAN;
* src/can_app.h -> camada de aplicação da embarcação;
* src/can_ids.h -> ids e definições de cada campo das camada de aplicação;
* src/can_filters.h -> filtros para o CAN;

## GLEIDISON SHIELD:
As ligações do *SPI* entre o *MCP2515* e o *Arduino* são:  
CS     -> arduino 10 (atmega328p PB2)  
MOSI -> arduino 11 (atmega328p PB3)  
MISO -> arduino 12 (atmega328p PB4)  
SCK   -> arduino 13 (atmega328p PB5)  
INT     -> arduino 02 (atmega328p PD2)  
5V      -> arduino 5V  
GND  -> arduino GND  
