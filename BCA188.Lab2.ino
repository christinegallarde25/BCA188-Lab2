// Function declaration
int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}

void setup() {
  Serial.begin(115200);

  // Array of test values for brightness and switch state
  int testSettings[] = {0, 50, 100, 0, 50, 100};
  bool testSwitches[] = {true, true, true, false, false, false};

  for (int i = 0; i < 6; i++) {
    int brightnessSetting = testSettings[i];
    bool switchOn = testSwitches[i];

    // Call function to get lamp brightness
    int lampBrightness = getLampBrightness(switchOn, brightnessSetting);

    // Print results to Serial Monitor
    Serial.print("Brightness setting: ");
    Serial.println(brightnessSetting);
    Serial.print("Switch state: ");
    Serial.println(switchOn ? "On" : "Off");
    Serial.print("Lamp brightness: ");
    Serial.println(lampBrightness);
    Serial.println("---------------------------");
  }
}

void loop() {
  // Empty loop
}