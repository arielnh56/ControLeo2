// Play the selected tone pattern
// This is a synchronous (blocking) call.  The function doesn't return until the
// tone has been played.  This works fine for this application, but it could be
// done using a timer interrupt and a lot more (complicated) code.

// stripped down from the original tuneful version because my buzzer is dumb

// Play a tone pattern - I have a dumb buzzer
void playTones(uint8_t tune) {
  // always start with a bip
  digitalWrite(CONTROLEO_BUZZER_PIN, HIGH);
  delay(100);
  for (uint8_t i = tune; i > 0; i >>= 1) {
    digitalWrite(CONTROLEO_BUZZER_PIN, i & 1);
    delay(100);
  }
  digitalWrite(CONTROLEO_BUZZER_PIN, LOW);
}

