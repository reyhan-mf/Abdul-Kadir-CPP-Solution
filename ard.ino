

char data = 0;
void setup()
{
    Serial.begin(9600); // https://www.arduino.cc/reference/en/language/functions/communication/serial/available/
    pinMode(5, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(13, OUTPUT);
}
void loop()
{
    if (Serial.available() > 0 /*https://www.arduino.cc/reference/en/language/functions/communication/serial/available/*/)
    {
        data = Serial.read(); // https://www.arduino.cc/reference/en/language/functions/communication/serial/read/
                              // Serial.println(data);
       /**/ if (data == '0')
        {
            digitalWrite(8, LOW);
            // wait for a second
        }
        else if (data == '1')
        {
            for (int x = 0; x < 9999; x++)
            {
                digitalWrite(8, HIGH); // turn the LED on (HIGH is the voltage level)
                delay(1000);           // wait for a second
                digitalWrite(8, LOW);  // turn the LED off by making the voltage LOW
                delay(1000);
            }
        }
        else if (data == '2')
        {
            digitalWrite(9, HIGH);
            digitalWrite(10, HIGH);
        }
        else if (data == '3')
        {
            digitalWrite(9, LOW);
            digitalWrite(10, LOW);
        }
        else if (data == '4')
        {
            digitalWrite(8, HIGH);
            digitalWrite(9, HIGH);
            digitalWrite(10, HIGH);
        }
        else if (data == '5')
        {
            digitalWrite(8, LOW);
            digitalWrite(9, LOW);
            digitalWrite(10, LOW);
        }
    }
}
void setup() 
{
    pinMode(13, OUTPUT); // Mengatur pin 13 sebagai output
}


// Blue ALL ON
// White Dua kanan Nyala
// RED Kedip2
// Blue ALL ON
// White Dua kanan Nyala
// RED Kedip2