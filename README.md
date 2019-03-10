# MAPA
MAPA - ESOFT - FUNDAMENTOS E ARQUITETURA DE COMPUTADORES - 2019A1

# 1 - Enunciado do trabalho proposto
Quanto mais os dias passam e as tecnologias se modernizam, maior é a necessidade de equipamentos eletrônicos capazes de acompanhar esta evolução e proporcionar maior facilidade para quem está iniciando no mundo maker. A quantidade de componentes eletrônicos, módulos e sensores cresce cada dia mais e a sua utilização se dá através de diferentes sistemas microcontroladores como, por exemplo, Arduino, PIC, AVR e demais sistemas embarcados.

Programar deixou de ser considerado um “bicho de sete cabeças” e se tornou um meio de ensinar, um meio de desafiar nossos próprios limites e principalmente se tornou uma experiência divertida que contagia cada vez mais adultos e crianças independentemente de sua idade, dos mais simples projetos até mesmo os mais complexos esquemas de programação.

Conteúdo disponível em <https://bit.ly/2GII22f> acessado em 11 Fev 2019

Você já pensou em chegar na sua casa, trabalho, ou qualquer outro lugar e poder controlar tudo por aplicativos. Através de componentes e circuitos lógicos podemos desenvolver casas inteligentes, sistemas autônomos, dentre outras funcionalidade utilizando placas de arduino.

Vamos imaginar que você está elaborando um sistema de automação para a sua cidade ou casa, e têm como objetivo final apresentar o sistema em funcionamento se utilizando uma placa de arduino. Sendo assim vamos colocar a mão na massa.


Com base no último dígito de seu RA, exemplo: 1725324-5, no caso deste RA o número indicado é o 4. Relacione o número indicado com um dos projetos abaixo:
Número indicado

Projeto a ser desenvolvido

0 - 1           Semáforo
2 - 3           Semáforo interativo
4 - 5           Efeito de iluminação sequencial com LEDs
6 - 7           Efeito interativo de iluminação sequencial com LEDs
8 - 9           Lâmpada pulsante **Meu RA termina em 9, então meu trabalho começa aqui**

Seu objetivo no MAPA é desenvolver o sistema indicado e enviar o link de compartilhamento do projeto.

Para realizar a atividade utilize o manual postado no material extra que contém todos os projetos de modo detalhado, para desenvolver o seu projeto você deve utilizar site https://www.tinkercad.com, onde é possível efetuar a simulação de todo o projeto.

Observação: é muito importante que você siga os passos indicados pelo professor Carlos Danilo no vídeo para a criação do projeto: https://youtu.be/7NDDfwuH-YY

# 2 - Dos itens para a realização desse trabalho
### Esses materiais eu já possuo em casa pois eu já fiz um trabalho parecido em um evento chamado ArduinoDay em 2018.
- 1 Arduino UNO R3
- 1 Resistor 100Ω
- 1 Protoboard de 830 pontos
- Led de alto brilho de 5mm

# 3 - Montando o circuito 
   - 3-1: O LED tem polaridade, sendo que o terminal maior é positiva e o lado chanfrado é negativo;
   - 3-2: Usei este [site](http://www.squids.com.br/arduino/index.php/tabelas/tabela-de-resistores-para-leds-de-acordo-com-a-fonte-de-alimentacao) para determinar o valor do resistor;
   - 3-3: A montagem foi feita em uma protoboard com linhas de alimentação separadas [imagem](/imagens/protoboard.png);
   - 3-4: O código desenvolvido foi este [aqui](/Código/codearduino.c);
    
# Como o projeto funcionou
- Após iniciar o programa o LED acendeu e apagou continuamente, que foi o resultado do efeito pulsante através do controle de brilho definido por uma função senoidal;
- Este efeito só acontece pois o LED fica mais claro e mais escuro.

# Utilizando no Tinkercad
- Conforme a orientação a simulação também deveria ser feita via Tinkercard, pode acessa-lá clicando [aqui](https://www.tinkercad.com/things/bSTNKFbv66I-natalia-s-raythz-ra-1950178-5-/editel?sharecode=Sggip2bqt2PQ0-Oa6hO0OtPx4wBCh6Q3gqp13vt8m2Q=)
