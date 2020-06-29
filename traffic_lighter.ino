bool led_counter[10][8] = 
{
  {1, 1, 1, 1, 1, 0, 1, 1}, // 9
  {0, 1, 1, 1, 1, 1, 1, 1}, // 8
  {0, 1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 0, 1, 1, 1, 1, 1}, // 6
  {0, 1, 0, 1, 1, 0, 1, 1}, // 5
  {0, 0, 1, 1, 0, 0, 1, 1}, // 4
  {0, 1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 1, 1, 0, 1}, // 2
  {0, 0, 1, 1, 0, 0, 0, 0}, // 1
  {0, 1, 1, 1, 1, 1, 1, 0}  // 0
};

int y, i;

void setup() {
  for (int pin = 2; pin <= 12; pin++)
  {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
   }
}

void loop() {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  y = 0;
  i = 6;
  traffic_lighter(y, i);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  y = 7;
  i = 9;
  traffic_lighter(y, i);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  y = 0;
  i = 6;
  traffic_lighter(y, i);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  y = 7;
  i = 9;
  traffic_lighter(y, i);
}

void traffic_lighter(int k, int m) {
  for (int y; y <= i; y++)
    {
      for (int x = 0; x <= 7; x++)
      {
        if (led_counter[y][x] == 0) digitalWrite(x + 2, LOW); else digitalWrite(x + 2, HIGH);
      }
      delay(1000);
    }
}
