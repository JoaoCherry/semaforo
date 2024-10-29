### Relato da Montagem e Conexões do Semáforo com ESP32

Para montar o semáforo, utilizamos uma placa ESP32 dev module, três LEDs (vermelho, amarelo e verde), resistores de 220 ohms para limitar a corrente em cada LED, e um buzzer. 

1. **Configuração dos LEDs**: Cada LED foi conectado a uma porta digital da ESP32 (pino 32 para o LED vermelho, pino 25 para o amarelo e pino 27 para o verde).
2. **Configuração do Buzzer**: O buzzer foi conectado na porta 12 da ESP32.
3. **Conexões dos Resistores**: Os resistores de 220 ohms foram colocados em série com os LEDs para controlar a corrente que passa por eles.
4. **Ligação à ESP32**: Cada LED, com o resistor em série, foi conectado aos pinos definidos na ESP32. O polo negativo (ou cátodo) de cada LED foi conectado ao GND da ESP32, fechando o circuito. O buzzer foi conetado ao pino 12 e ao GND da ESP32, mas sem um resistor, fechando seu circuito.

Esse circuito permite controlar o semáforo e o buzzer de forma simples e direta, seguindo o ciclo de tempos especificado no código. A montagem é prática e possibilita ajustar facilmente o código para testes.

### Especificações dos Componentes Utilizados

| Componente        | Quantidade| Descrição                                                    |
|-------------------|-----------|--------------------------------------------------------------|
| ESP32 Dev Module  |1          | Microcontrolador usado para controlar o semáforo.            |
| LED Vermelho      |1          | LED para sinalização da cor vermelha no semáforo.            |
| LED Amarelo       |1          | LED para sinalização da cor amarela no semáforo.             |
| LED Verde         |1          | LED para sinalização da cor verde no semáforo.               |
| Resistor          |3          | Limita a corrente em cada LED para evitar sobrecarga.        |
| Buzzer            |1          | Emite um som quando a luz amarela estiver acesa.             |

Com esse setup, você terá um semáforo funcional controlado pela ESP32, simulando uma sequência realista de controle de tráfego.
Para ir além, conectamos um buzzer que toca depois que a luz vermelha apaga, adicionando um componente extra ao trabalho.
