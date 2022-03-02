void trialEnc() {
  while (1) {
    Serial.print("BE_ENC: ");
    Serial.print(ENC_BE_COUNT);
    Serial.print("\t");

    Serial.print("KA_ENC: ");
    Serial.print(ENC_KA_COUNT);
    Serial.print("\t");

    Serial.print("KI_ENC: ");
    Serial.println(ENC_KI_COUNT);
    delay(100);
  }
}


void trialPWM(int Speed) {
  while (1) {
    analogWrite(BE_RPWM_PIN,  Speed);
    digitalWrite(BE_LPWM_PIN, LOW);
    analogWrite(KA_RPWM_PIN,  Speed);
    digitalWrite(KA_LPWM_PIN, LOW);
    analogWrite(KI_RPWM_PIN,  Speed);
    digitalWrite(KI_LPWM_PIN, LOW);
    delay(1000);
    analogWrite(BE_LPWM_PIN,  Speed);
    digitalWrite(BE_RPWM_PIN, LOW);
    analogWrite(KA_LPWM_PIN,  Speed);
    digitalWrite(KA_RPWM_PIN, LOW);
    analogWrite(KI_LPWM_PIN,  Speed);
    digitalWrite(KI_RPWM_PIN, LOW);
    delay(1000);
  }
}

void trialRPS(int Speed) {
  while (1) {
    RPMbelakang( Speed, 0.001,  0.00003, 35);
    RPMkanan   ( Speed, 0.001,  0.00003, 35);
    RPMkiri    ( Speed, 0.001,  0.00003, 35);
  }
}

void holder1(int con) {
  switch (con) {
    case lepas:
      digitalWrite(CAPIT1_A_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT1_A_PIN, LOW);
      break;
    case tahan:
      digitalWrite(CAPIT1_B_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT1_B_PIN, LOW);
      break;
  }
}

void holder2(int con) {
  switch (con) {
    case lepas:
      digitalWrite(CAPIT2_A_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT2_A_PIN, LOW);
      break;
    case tahan:
      digitalWrite(CAPIT2_B_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT2_B_PIN, LOW);
      break;
  }
}

void holder3(int con) {
  switch (con) {
    case lepas:
      digitalWrite(CAPIT3_A_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT3_A_PIN, LOW);
      break;
    case tahan:
      digitalWrite(CAPIT3_B_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT3_B_PIN, LOW);
      break;
  }
}

void holder4(int con) {
  switch (con) {
    case lepas:
      digitalWrite(CAPIT4_A_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT4_A_PIN, LOW);
      break;
    case tahan:
      digitalWrite(CAPIT4_B_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT4_B_PIN, LOW);
      break;
  }
}

void holder5(int con) {
  switch (con) {
    case lepas:
      digitalWrite(CAPIT5_A_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT5_A_PIN, LOW);
      break;
    case tahan:
      digitalWrite(CAPIT5_B_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT5_B_PIN, LOW);
      break;
  }
}

void holder(int con) {
  switch (con) {
    case lepas:
      digitalWrite(CAPIT1_A_PIN, HIGH);
      digitalWrite(CAPIT2_A_PIN, HIGH);
      digitalWrite(CAPIT3_A_PIN, HIGH);
      digitalWrite(CAPIT4_A_PIN, HIGH);
      digitalWrite(CAPIT5_A_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT1_A_PIN, LOW);
      digitalWrite(CAPIT2_A_PIN, LOW);
      digitalWrite(CAPIT3_A_PIN, LOW);
      digitalWrite(CAPIT4_A_PIN, LOW);
      digitalWrite(CAPIT5_A_PIN, LOW);
      break;
    case tahan:
      digitalWrite(CAPIT1_B_PIN, HIGH);
      digitalWrite(CAPIT2_B_PIN, HIGH);
      digitalWrite(CAPIT3_B_PIN, HIGH);
      digitalWrite(CAPIT4_B_PIN, HIGH);
      digitalWrite(CAPIT5_B_PIN, HIGH);
      delay(10);
      digitalWrite(CAPIT1_B_PIN, LOW);
      digitalWrite(CAPIT2_B_PIN, LOW);
      digitalWrite(CAPIT3_B_PIN, LOW);
      digitalWrite(CAPIT4_B_PIN, LOW);
      digitalWrite(CAPIT5_B_PIN, LOW);
      break;
  }
}
