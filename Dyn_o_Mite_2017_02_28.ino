
//Pins for LED's.  
//Avoid Pin 0 and 2 as they have onboard Red and Blue LED's Respectively.
//  ...unless you're into that sort of thing.
int Pin1 = 14;  
int Pin2 = 12;
int Pin3 = 13;
int Pin4 = 15;
int Pin5 = 16;

int SwitchPin = 4;    //Trigger Switch Pin

int NumberLEDs = 12;     //Max 20 LED's with 5 Control Pins

//High and Low Values for On Time
int OnTimeLow = 5;
int OnTimeHigh = 25;
//High and Low Values for Off Time
int OffTimeLow = 1;
int OffTimeHigh = 15;

int TestLoopDelay = 250;    //Delay between steps for Startup Test Loop








void setup() {

Serial.begin(9600);

TestLoop();      // Run through all LED's once on startup.

TurnOffLEDs();

pinMode(SwitchPin, INPUT_PULLUP);

}

void loop() {
Serial.begin(9600);

while(!digitalRead(SwitchPin)) {       //Negative Digital read for Pin pulled Low.
TurnOnLED(random(1,(NumberLEDs + 1))); //Turn on a Random LED between 1 and the Extant number of LED's.  Plus one to make it function correctly... stupid Zero Indexing Arrays.
delay(random(OnTimeLow, OnTimeHigh));
TurnOffLEDs();
delay(random(OffTimeLow, OffTimeHigh));
}

}

void TestLoop() {
 for(int i = 1; i <= NumberLEDs; i++) {
  TurnOnLED(i);
  delay(TestLoopDelay);
  TurnOffLEDs();
 }
}

/*When given a number between 1 and 20, it turns on that LED using proper PinMode and PinState.
      This Function only works assuming you've set all pins to Input first either manually or via
        the TurnOffLEDs Function.
 */
void TurnOnLED (int whichLED) {
  if (whichLED == 1) {
    pinMode(Pin1, OUTPUT);
    pinMode(Pin2, OUTPUT);
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin2, LOW);
    Serial.println("LED1");
  }
    if (whichLED == 2) {
    pinMode(Pin1, OUTPUT);
    pinMode(Pin2, OUTPUT);
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin2, HIGH);
    Serial.println("LED2");
  }
    if (whichLED == 3) {
    pinMode(Pin1, OUTPUT);
    pinMode(Pin3, OUTPUT);
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin3, LOW);
    Serial.println("LED3");
  }
    if (whichLED == 4) {
    pinMode(Pin1, OUTPUT);
    pinMode(Pin3, OUTPUT);
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin3, HIGH);
    Serial.println("LED4");
  }
    if (whichLED == 5) {
    pinMode(Pin1, OUTPUT);
    pinMode(Pin4, OUTPUT);
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin4, LOW);
    Serial.println("LED5");
  }
    if (whichLED == 6) {
    pinMode(Pin1, OUTPUT);
    pinMode(Pin4, OUTPUT);
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin4, HIGH);
    Serial.println("LED6");
  }
    if (whichLED == 7) {
    pinMode(Pin1, OUTPUT);
    pinMode(Pin5, OUTPUT);
    digitalWrite(Pin1, HIGH);
    digitalWrite(Pin5, LOW);
    Serial.println("LED7");
  }
    if (whichLED == 8) {
    pinMode(Pin1, OUTPUT);
    pinMode(Pin5, OUTPUT);
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin5, HIGH);
    Serial.println("LED8");
  }
    if (whichLED == 9) {
    pinMode(Pin2, OUTPUT);
    pinMode(Pin3, OUTPUT);
    digitalWrite(Pin2, HIGH);
    digitalWrite(Pin3, LOW);
    Serial.println("LED9");
  }
    if (whichLED == 10) {
    pinMode(Pin2, OUTPUT);
    pinMode(Pin3, OUTPUT);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, HIGH);
    Serial.println("LED10");
  }
    if (whichLED == 11) {
    pinMode(Pin2, OUTPUT);
    pinMode(Pin4, OUTPUT);
    digitalWrite(Pin2, HIGH);
    digitalWrite(Pin4, LOW);
    Serial.println("LED11");
  }
    if (whichLED == 12) {
    pinMode(Pin2, OUTPUT);
    pinMode(Pin4, OUTPUT);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin4, HIGH);
    Serial.println("LED12");
  }
    if (whichLED == 13) {
    pinMode(Pin2, OUTPUT);
    pinMode(Pin5, OUTPUT);
    digitalWrite(Pin2, HIGH);
    digitalWrite(Pin5, LOW);
    Serial.println("LED13");
  }
    if (whichLED == 14) {
    pinMode(Pin2, OUTPUT);
    pinMode(Pin5, OUTPUT);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin5, HIGH);
    Serial.println("LED14");
  }
    if (whichLED == 15) {
    pinMode(Pin3, OUTPUT);
    pinMode(Pin4, OUTPUT);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4, LOW);
    Serial.println("LED15");
  }
    if (whichLED == 16) {
    pinMode(Pin3, OUTPUT);
    pinMode(Pin4, OUTPUT);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, HIGH);
    Serial.println("LED16");
  }
    if (whichLED == 17) {
    pinMode(Pin3, OUTPUT);
    pinMode(Pin5, OUTPUT);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin5, LOW);
    Serial.println("LED17");
  }
    if (whichLED == 18) {
    pinMode(Pin3, OUTPUT);
    pinMode(Pin5, OUTPUT);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin5, HIGH);
    Serial.println("LED18");
  }
    if (whichLED == 19) {
    pinMode(Pin4, OUTPUT);
    pinMode(Pin5, OUTPUT);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin5, LOW);
    Serial.println("LED19");
  }
    if (whichLED == 20) {
    pinMode(Pin4, OUTPUT);
    pinMode(Pin5, OUTPUT);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin5, HIGH);
    Serial.println("LED20");
  }

}

void TurnOffLEDs () {
  pinMode(Pin1, INPUT);
  pinMode(Pin2, INPUT);
  pinMode(Pin3, INPUT);
  pinMode(Pin4, INPUT);
  pinMode(Pin5, INPUT);
}

