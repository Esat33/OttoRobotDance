#define LEFT_FOOT_PIN 3
#define RIGHT_FOOT_PIN 5

Servo leftFoot;
Servo rightFoot;

void setup() { leftFoot.attach(LEFT_FOOT_PIN);
rightFoot.attach(RIGHT_FOOT_PIN);
}

void zeybekAdimi1() { leftFoot.write(30);
rightFoot.write(150);
delay(1000);
}

void zeybekAdimi2() { leftFoot.write(150);
rightFoot.write(30); delay(1000);
}

void zeybekAdimi3() leftFoot.write(30);
rightFoot.write(150);
delay(1000);
}

void zeybekAdimi4() { leftFoot.write(150);
rightFoot.write(30); delay(1000);

void Baslangic() { leftFoot.write(0);
rightFoot.write(0);
delay(1000);
}

void loop() {

for (int i = 0; i < 1; i++) {
Baslangic();

zeybekAdimi1();
zeybekAdimi2();
zeybekAdimi3();
zeybekAdimi4();
} }