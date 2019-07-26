# me-freeled
LED Controler based on an ESP32 from TTGO
Drives WS2812B RGB LEDS in line. 5v power. External 5V to power a large quantity of LEDS

[![LED CONTROLER](https://img.youtube.com/vi/oTBQ0SmJdvQ/0.jpg)]

BOM
Reference, Quantity, Value, Footprint, Datasheet, Field4, Field5, Field6, Field7, Field8
J1 ,1,"5PWR","Connectors:BARREL_JACK","~"
J2 ,1,"ExtConn","Connectors_Terminal_Blocks:TerminalBlock_bornier-3_P5.08mm","~"
LCD1 ,1,"Oled96","TTGO32:Oled96",https://fr.aliexpress.com/item/32929309628.htm
Q1 ,1,"BSS138","TO_SOT_Packages_SMD:SOT-23",https://www.fairchildsemi.com/datasheets/BS/BSS138.pdf
R1 ,1,"470","Resistors_SMD:R_1206_HandSoldering","~"
R2 R6 ,2,"NC","Resistors_SMD:R_1206_HandSoldering","~"
R3 R4 ,2,"10k","Resistors_SMD:R_1206_HandSoldering","~"
R5 ,1,"0R","Resistors_SMD:R_1206_HandSoldering","~"
SW1 ,1,"+","Buttons_Switches_SMD:SW_SPST_B3S-1000","~"
SW2 ,1,"-","Buttons_Switches_SMD:SW_SPST_B3S-1000","~"
SW3 ,1,"OK","Buttons_Switches_SMD:SW_SPST_B3S-1000","~"
SW4 ,1,"MENU","Buttons_Switches_SMD:SW_SPST_B3S-1000","~"
U1 ,1,"TTGO-ESP32","TTGO-LoraCom:TTGO-ESP32",""
U2 ,1,"HC-SR04","me-freeled:XCVR_HC-SR04","","Unavailable","HC-SR04","None","HC-SR04 Ultrasonic Sensor For Arduino And Raspberry Pi HC-SR04 Ultrasonic Sensor For Arduino And Raspberry Pi","Adafruit Industries"


Compatible with Adafruit Arduino IDE / Adafruit_NeoPixel.h

PCB available on Tindie
