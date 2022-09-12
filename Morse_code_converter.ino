
const int BUILT_IN_LED = 13;
String code = "";
int len = 0;
char ch;
char new_char;
int req_delay = 200;

void dot()
{
  Serial.print(".");
  digitalWrite(BUILT_IN_LED, HIGH);

  delay(req_delay);
  digitalWrite(BUILT_IN_LED, LOW);

  delay(req_delay);
}

void dash()
{
  Serial.print("-");
  digitalWrite(BUILT_IN_LED, HIGH);

  delay(req_delay * 3);
  digitalWrite(BUILT_IN_LED, LOW);

  delay(req_delay);
}
void A()
{
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void B()
{
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void C()
{
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void D()
{
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void E()
{
  dot();
  delay(req_delay);
}
void f()
{
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void G()
{
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void H()
{
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void I()
{
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void J()
{
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void K()
{
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void L()
{
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void M()
{
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void N()
{
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void O()
{
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void P()
{
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
  dot();
}
void Q()
{
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void R()
{
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void S()
{
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
}
void T()
{
  dash();
  delay(req_delay);
}
void U()
{
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void V()
{
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void W()
{
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void X()
{
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void Y()
{
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
}
void Z()
{
  dash();
  delay(req_delay);
  dash();
  delay(req_delay);
  dot();
  delay(req_delay);
  dot();
  delay(req_delay);
}

void morse()
{
  if (ch == 'A' || ch == 'a')
  {
    A();
    Serial.print(" ");
  }
  else if (ch == 'B' || ch == 'b')
  {
    B();
    Serial.print(" ");
  }
  else if (ch == 'C' || ch == 'c')
  {
    C();
    Serial.print(" ");
  }
  else if (ch == 'D' || ch == 'd')
  {
    D();
    Serial.print(" ");
  }
  else if (ch == 'E' || ch == 'e')
  {
    E();
    Serial.print(" ");
  }
  else if (ch == 'f' || ch == 'f')
  {
    f();
    Serial.print(" ");
  }
  else if (ch == 'G' || ch == 'g')
  {
    G();
    Serial.print(" ");
  }
  else if (ch == 'H' || ch == 'h')
  {
    H();
    Serial.print(" ");
  }
  else if (ch == 'I' || ch == 'i')
  {
    I();
    Serial.print(" ");
  }
  else if (ch == 'J' || ch == 'j')
  {
    J();
    Serial.print(" ");
  }
  else if (ch == 'K' || ch == 'k')
  {
    K();
    Serial.print(" ");
  }
  else if (ch == 'L' || ch == 'l')
  {
    L();
    Serial.print(" ");
  }
  else if (ch == 'M' || ch == 'm')
  {
    M();
    Serial.print(" ");
  }
  else if (ch == 'N' || ch == 'n')
  {
    N();
    Serial.print(" ");
  }
  else if (ch == 'O' || ch == 'o')
  {
    O();
    Serial.print(" ");
  }
  else if (ch == 'P' || ch == 'p')
  {
    P();
    Serial.print(" ");
  }
  else if (ch == 'Q' || ch == 'q')
  {
    Q();
    Serial.print(" ");
  }
  else if (ch == 'R' || ch == 'r')
  {
    R();
    Serial.print(" ");
  }
  else if (ch == 'S' || ch == 's')
  {
    S();
    Serial.print(" ");
  }
  else if (ch == 'T' || ch == 't')
  {
    T();
    Serial.print(" ");
  }
  else if (ch == 'U' || ch == 'u')
  {
    U();
    Serial.print(" ");
  }
  else if (ch == 'V' || ch == 'v')
  {
    V();
    Serial.print(" ");
  }
  else if (ch == 'W' || ch == 'w')
  {
    W();
    Serial.print(" ");
  }
  else if (ch == 'X' || ch == 'x')
  {
    X();
    Serial.print(" ");
  }
  else if (ch == 'Y' || ch == 'y')
  {
    Y();
    Serial.print(" ");
  }
  else if (ch == 'Z' || ch == 'z')
  {
    Z();
    Serial.print(" ");
  }
  else if (ch == ' ')
  {
    delay(req_delay * 7);
    Serial.print("/ ");
  }
}
void String2Morse()
{
  len = code.length();
  for (int i = 0; i < len; i++)
  {
    ch = code.charAt(i);
    morse();
  }
}
void setup() {
  Serial.begin(9600);
  pinMode(BUILT_IN_LED, OUTPUT);
}
void loop() {
  while (Serial.available())
  {
    code = Serial.readString();
    Serial.print(code);
    Serial.print(" = ");
    String2Morse();
    Serial.println("");
  }
  delay(1000);
}
