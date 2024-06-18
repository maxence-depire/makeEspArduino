// for run : make -f makeEspArduino.mk flash SKETCH=main.ino

void setup() {
    // Enable serial com
    Serial.begin(9600);
}

void loop() {
    // Print hello world.
    Serial.println("Hello World !!!");
    delay(1000);
}