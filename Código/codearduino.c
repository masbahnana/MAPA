int ledPin = 9;
float senoVal;
int ledVal;
 
void setup() {
    pinMode(ledPin, OUTPUT);
}
 
void loop() {
    for (int x=0; x<180; x++) {
        // converte graus para radianos e, então, obtém o valor do seno
        senoVal = (sin(x*(3.1416/180)));
        ledVal = int(senoVal*255);
        analogWrite(ledPin, ledVal);
        delay(25);
    }
}
