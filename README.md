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
