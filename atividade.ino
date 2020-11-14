/*
Começam com os 3 leds apagados, ao aumentar o valor do potenciômetro
os leds vão acendendendo, um de cada vez
*/
int valor;

void setup(){
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
}

void loop(){
    valor = analogRead(A0);
    
    if(valor < 50){
        digitalWrite(13,0);
        digitalWrite(12,0);
        digitalWrite(11,0);
    }

    
}