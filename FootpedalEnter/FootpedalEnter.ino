const int BUTTON = 2;
const int BAUD = 9600;

// activate on press(HIGH) or on release(LOW)
const int actState = LOW;
const char output = '\n';

int prev = 0;
int val = 0;

void setup() {
  pinMode(BUTTON,INPUT);
  prev = digitalRead(BUTTON);
  Serial.begin(BAUD);
}

void loop() {
  val = digitalRead(BUTTON);

  if(val!=prev){
    prev=val;
    if(val==actState){
      Serial.print(output);
    }
    delay(100);
  }
}
