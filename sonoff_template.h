## replace Pow with this

   { "Sonoff Pow",     // Sonoff Pow (ESP8266) // Ezra 1 (Serial) + 4 connect to chip
     GPIO_KEY1,        // GPIO00 Button
     GPIO_USER,        // GPIO01 Button (Serial Out)
     0, 0,             // GPIO02 GPIO03 can't use 
     GPIO_USER,        // GPIO04 (need soldering to chip pin)
     GPIO_HLW_SEL,     // GPIO05 HLW8012 Sel output
     0, 0, 0, 0, 0, 0, // Flash connection
     GPIO_REL1,        // GPIO12 Red Led and Relay (0 = Off, 1 = On)
     GPIO_HLW_CF1,     // GPIO13 HLW8012 CF1 voltage / current
     GPIO_HLW_CF,      // GPIO14 HLW8012 CF power
     GPIO_LED1,        // GPIO15 Green Led (0 = On, 1 = Off)
     0, 0
  },
