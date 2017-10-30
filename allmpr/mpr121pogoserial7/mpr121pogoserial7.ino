
//#include <Keypad.h>
#include "mpr121.h"
#include <Wire.h>
#include <EEPROM.h>

int irqpin = 4;  // Digital 4
boolean touchStates[12]; //to keep track of the previous touch states
char ctrlKey = KEY_LEFT_CTRL;
char change_keystroke='\0';
char change_keystrokea='\0';
char change_keystrokeb='\0';
char change_keystrokec='\0';
char change_keystroked='\0';
char change_keystrokee='\0';
char change_keystrokef='\0';
char change_keystrokeg='\0';
char change_keystrokeh='\0';
char change_keystrokei='\0';
char change_keystrokej='\0';
char change_keystrokek='\0';
char change_keystrokel= '\0';
char change_keystrokem='\0';
char change_keystroken='\0';
char change_keystrokeo='\0';
char change_keystrokep='\0';
char change_keystrokeq='\0';
char change_keystroker='\0';
char change_keystrokes='\0';
char change_keystroket='\0';
char change_keystrokeu='\0';
char change_keystrokev='\0';
char change_keystrokew='\0';
char change_keystrokex='\0';
char change_keystrokey='\0';
char change_keystrokez='\0';
char change_keystroke1='\0';
char change_keystroke2='\0';
char change_keystroke3='\0';
char change_keystroke4='\0';
char change_keystroke5='\0';
char change_keystroke6='\0';
char change_keystroke7='\0';
char change_keystroke8='\0';
char change_keystroke9='\0';
char change_keystroke10='\0';
char change_keystroke11='\0';
char change_keystroke12='\0';
char change_keystroke13='\0';
char change_keystroke14='\0';
char change_keystroke15='\0';
char change_keystroke16='\0';
char change_keystroke17='\0';
char change_keystroke18='\0';
char change_keystroke19='\0';
char change_keystroke20='\0';
char change_keystroke21='\0';
char change_keystroke22='\0';
void setup() {
  pinMode(irqpin, INPUT);
  digitalWrite(irqpin, HIGH); //enable pullup resistor

  Serial.begin(9600);
  Serial.println("Enter your name.");
  keypicked(&change_keystrokea,1);
keypicked(&change_keystrokeb,2);
keypicked(&change_keystrokec,3);
keypicked(&change_keystroked,4);
keypicked(&change_keystrokee,5);
keypicked(&change_keystrokef,6);
keypicked(&change_keystrokeg,7);
keypicked(&change_keystrokeh,8);
keypicked(&change_keystrokei,9);
keypicked(&change_keystrokej,10);
keypicked(&change_keystrokek,11);
keypicked(&change_keystrokel,12);
keypicked(&change_keystroke19,13);
keypicked(&change_keystroke20,14);
keypicked(&change_keystroke21,15);
keypicked(&change_keystroke22,16);
keypicked(&change_keystrokem,17);
keypicked(&change_keystroken,18);
keypicked(&change_keystrokeo,19);
keypicked(&change_keystrokep,20);
keypicked(&change_keystrokeq,21);
keypicked(&change_keystroker,22);
keypicked(&change_keystrokes,23);
keypicked(&change_keystroket,24);
keypicked(&change_keystrokeu,25);
keypicked(&change_keystrokev,26);
keypicked(&change_keystrokew,27);
keypicked(&change_keystrokex,28);
keypicked(&change_keystrokey,29);
keypicked(&change_keystrokez,30);
keypicked(&change_keystroke1,31);     
keypicked(&change_keystroke2,32);
keypicked(&change_keystroke3,33);
keypicked(&change_keystroke4,34);
keypicked(&change_keystroke5,35);
keypicked(&change_keystroke6,36);
keypicked(&change_keystroke7,37);
keypicked(&change_keystroke8,38);
keypicked(&change_keystroke9,39);
keypicked(&change_keystroke10,40);
keypicked(&change_keystroke11,41);
keypicked(&change_keystroke12,42);
keypicked(&change_keystroke13,43);
keypicked(&change_keystroke14,44);
keypicked(&change_keystroke15,45);
keypicked(&change_keystroke16,46);
keypicked(&change_keystroke17,47); 
keypicked(&change_keystroke18,48);
  Wire.begin();

  mpr121_setup();
}

char rx_byte = 0;
String rx_str = "";
char v='v';
char o='o';





char comp_value='v';
int addr = 1;
unsigned char myValue = 'a';
byte readValue = 0;

void loop() {
 if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.read();       // get the character
    
    if (rx_byte != '\n') {
      // a character of the string was received
      rx_str += rx_byte;
    }
    else {
      // end of string
      Serial.print("Welcome ");
      if (rx_str=="hello") change_keystroke='v';
      //rx_str[1]=comp_value;
      EEPROM.write(addr, rx_str[0]);
      EEPROM.write(addr+1, rx_str[1]);
      EEPROM.write(addr+2, rx_str[2]);
      EEPROM.write(addr+3, rx_str[3]);
      EEPROM.write(addr+4, rx_str[4]);
      EEPROM.write(addr+5, rx_str[5]);
      EEPROM.write(addr+6, rx_str[6]);
      EEPROM.write(addr+7, rx_str[7]);
      EEPROM.write(addr+8, rx_str[8]);
      EEPROM.write(addr+9, rx_str[9]);
      EEPROM.write(addr+10, rx_str[10]);
      EEPROM.write(addr+11, rx_str[11]);
      EEPROM.write(addr+12, rx_str[12]);
      EEPROM.write(addr+13, rx_str[13]);
      EEPROM.write(addr+14, rx_str[14]);
      EEPROM.write(addr+15, rx_str[15]);
      EEPROM.write(addr+16, rx_str[16]);
      EEPROM.write(addr+17, rx_str[17]);
      EEPROM.write(addr+18, rx_str[18]);
      EEPROM.write(addr+19, rx_str[19]);
      EEPROM.write(addr+20, rx_str[20]);
      EEPROM.write(addr+21, rx_str[21]);
      EEPROM.write(addr+22, rx_str[22]);
      EEPROM.write(addr+23, rx_str[23]);
      EEPROM.write(addr+24, rx_str[24]);
      EEPROM.write(addr+25, rx_str[25]);
      EEPROM.write(addr+26, rx_str[26]);
      EEPROM.write(addr+27, rx_str[27]);
      EEPROM.write(addr+28, rx_str[28]);
      EEPROM.write(addr+29, rx_str[29]);
      EEPROM.write(addr+30, rx_str[30]);
      EEPROM.write(addr+31, rx_str[31]);
      EEPROM.write(addr+32, rx_str[32]);
      EEPROM.write(addr+33, rx_str[33]);
      EEPROM.write(addr+34, rx_str[34]);
      EEPROM.write(addr+35, rx_str[35]);
      EEPROM.write(addr+36, rx_str[36]);
      EEPROM.write(addr+37, rx_str[37]);
      EEPROM.write(addr+38, rx_str[38]);
      EEPROM.write(addr+39, rx_str[39]);
      EEPROM.write(addr+40, rx_str[40]);
      EEPROM.write(addr+41, rx_str[41]);
      EEPROM.write(addr+42, rx_str[42]);
      EEPROM.write(addr+43, rx_str[43]);
      EEPROM.write(addr+44, rx_str[44]);
      EEPROM.write(addr+45, rx_str[45]);
      EEPROM.write(addr+46, rx_str[46]);
      EEPROM.write(addr+47, rx_str[47]);

keypicked(&change_keystrokea,1);
keypicked(&change_keystrokeb,2);
keypicked(&change_keystrokec,3);
keypicked(&change_keystroked,4);
keypicked(&change_keystrokee,5);
keypicked(&change_keystrokef,6);
keypicked(&change_keystrokeg,7);
keypicked(&change_keystrokeh,8);
keypicked(&change_keystrokei,9);
keypicked(&change_keystrokej,10);
keypicked(&change_keystrokek,11);
keypicked(&change_keystrokel,12);
keypicked(&change_keystroke19,13);
keypicked(&change_keystroke20,14);
keypicked(&change_keystroke21,15);
keypicked(&change_keystroke22,16);
keypicked(&change_keystrokem,17);
keypicked(&change_keystroken,18);
keypicked(&change_keystrokeo,19);
keypicked(&change_keystrokep,20);
keypicked(&change_keystrokeq,21);
keypicked(&change_keystroker,22);
keypicked(&change_keystrokes,23);
keypicked(&change_keystroket,24);
keypicked(&change_keystrokeu,25);
keypicked(&change_keystrokev,26);
keypicked(&change_keystrokew,27);
keypicked(&change_keystrokex,28);
keypicked(&change_keystrokey,29);
keypicked(&change_keystrokez,30);
keypicked(&change_keystroke1,31);     
keypicked(&change_keystroke2,32);
keypicked(&change_keystroke3,33);
keypicked(&change_keystroke4,34);
keypicked(&change_keystroke5,35);
keypicked(&change_keystroke6,36);
keypicked(&change_keystroke7,37);
keypicked(&change_keystroke8,38);
keypicked(&change_keystroke9,39);
keypicked(&change_keystroke10,40);
keypicked(&change_keystroke11,41);
keypicked(&change_keystroke12,42);
keypicked(&change_keystroke13,43);
keypicked(&change_keystroke14,44);
keypicked(&change_keystroke15,45);
keypicked(&change_keystroke16,46);
keypicked(&change_keystroke17,47); 
keypicked(&change_keystroke18,48);






      
      //change_keystroke=rx_str[1];
      //if(change_keystroke=="v") change_keystroke='v';
      //if(change_keystroke=="o") change_keystroke='o';
      //if (comp_value=="v") change_keystroke='v';
      //if (comp_value=="o") change_keystroke='o';
      
      
      Serial.println(rx_str[1]);
      rx_str = "";                // clear the string for reuse
      Serial.println("");
      Serial.println("Enter your SSID.");
    }
  } // end: if (Serial.available() > 0)



  
  readTouchInputs();
}


void readTouchInputs() {
  if (!checkInterrupt()) {

    //read the touch state from the MPR121
    Wire.requestFrom(0x5A, 2);

    byte LSB = Wire.read();
    byte MSB = Wire.read();

    uint16_t touched = ((MSB << 8) | LSB); //16bits that make up the touch states





    for (int i = 0; i < 12; i++) { // Check what electrodes were pressed
      if (touched & (1 << i)) {




        if (touchStates[i] == 0) {
          //pin i was just touched
          if (i == 3) {     //third
                       
            Keyboard.press(change_keystrokea);
            
            Keyboard.press(change_keystrokeb);
                      
            Keyboard.press(change_keystrokec);           
            
            Keyboard.press(change_keystroked);
            delay(100); //paste
            Keyboard.releaseAll();
          }
          if (i == 7) { //first
                        
            Keyboard.press(change_keystrokee);
            
            Keyboard.press(change_keystrokef);
                       
            Keyboard.press(change_keystrokeg);           
            
            Keyboard.press(change_keystrokeh);
            delay(100); //cut
            Keyboard.releaseAll();
          }
          if (i == 11) {  //second
                        
            Keyboard.press(change_keystrokei);
            
            Keyboard.press(change_keystrokej);
                       
            Keyboard.press(change_keystrokek);           
            
            Keyboard.press(change_keystrokel);
            delay(100); //copy
            Keyboard.releaseAll();
          }
          if (i == 2) {  //fourth
                        
            Keyboard.press(change_keystroke19);
            
            Keyboard.press(change_keystroke20);
                       
            Keyboard.press(change_keystroke21);           
            
            Keyboard.press(change_keystroke22);
            delay(100); //undo
            Keyboard.releaseAll();
          }
          if (i == 6) {  //fifth
                        
            Keyboard.press(change_keystrokem);
            
            Keyboard.press(change_keystroken);
                       
            Keyboard.press(change_keystrokeo);           
            
            Keyboard.press(change_keystrokep);
            delay(100); //save
            Keyboard.releaseAll();
          }
          if (i == 10) {  //sixth
                        
            Keyboard.press(change_keystrokeq);
            
            Keyboard.press(change_keystroker);
                       
            Keyboard.press(change_keystrokes);           
            
            Keyboard.press(change_keystroket);
            delay(100); //redo
            Keyboard.releaseAll();
          }

          if (i == 1) {  //seventh
                        
            Keyboard.press(change_keystrokeu);
            
            Keyboard.press(change_keystrokev);
                       
            Keyboard.press(change_keystrokew);           
            
            Keyboard.press(change_keystrokex);
            delay(100); //find
            Keyboard.releaseAll();
          }

          if (i == 5) {  //eigth
                        
            Keyboard.press(change_keystrokey);
            
            Keyboard.press(change_keystrokez);
            
            Keyboard.press(change_keystroke1);           
            
            Keyboard.press(change_keystroke2);
            delay(100); //all
            Keyboard.releaseAll();
          }

          if (i == 9) {  //ninth
            
            Keyboard.press(change_keystroke3);
            
            Keyboard.press(change_keystroke4);
            
            Keyboard.press(change_keystroke5);           
            
            Keyboard.press(change_keystroke6);
            delay(100); //print
            Keyboard.releaseAll();
          }

          if (i == 0) { //12th
            
            Keyboard.press(change_keystroke7);
            
            Keyboard.press(change_keystroke8);
            
            Keyboard.press(change_keystroke9);           
            
            Keyboard.press(change_keystroke10);
            delay(100); //open
            Keyboard.releaseAll();
          }

          if (i == 4) {  //tenth
            
            Keyboard.press(change_keystroke11);
            
            Keyboard.press(change_keystroke12);
            
            Keyboard.press(change_keystroke13);           
            
            Keyboard.press(change_keystroke14);
            delay(100); //close
            Keyboard.releaseAll();
          }

          if (i == 8) {  //11th
            
            Keyboard.press(change_keystroke15);
            
            Keyboard.press(change_keystroke16);
            
            Keyboard.press(change_keystroke17);           
            
            Keyboard.press(change_keystroke18);
            delay(100);
            Keyboard.releaseAll();
          }

          //Serial.print("pin ");
         // Serial.print(i);
          //Serial.println(" was just touched");
          //start the timer here
          //t.after and then t.stop when released

        } else if (touchStates[i] == 1) {
          if (i == 5) {
            //Keyboard.press(KEY_LEFT_GUI);
            //Keyboard.press('d');
            //delay(100);
            //Keyboard.press(KEY_LEFT_ALT);
            //Keyboard.press(KEY_F4);
            //delay(100);
            //Keyboard.releaseAll();
          }
          //pin i is still being touched
        }

        touchStates[i] = 1;
      } else {
        if (touchStates[i] == 1) {
          //Serial.print("pin ");
         // Serial.print(i);
          //Serial.println(" is no longer being touched");

          //pin i is no longer being touched
        }

        touchStates[i] = 0;
      }

    }

  }
}




void mpr121_setup(void) {

  set_register(0x5A, ELE_CFG, 0x00);

  // Section A - Controls filtering when data is > baseline.
  set_register(0x5A, MHD_R, 0x01);
  set_register(0x5A, NHD_R, 0x01);
  set_register(0x5A, NCL_R, 0x00);
  set_register(0x5A, FDL_R, 0x00);

  // Section B - Controls filtering when data is < baseline.
  set_register(0x5A, MHD_F, 0x01);
  set_register(0x5A, NHD_F, 0x01);
  set_register(0x5A, NCL_F, 0xFF);
  set_register(0x5A, FDL_F, 0x02);

  // Section C - Sets touch and release thresholds for each electrode
  set_register(0x5A, ELE0_T, TOU_THRESH);
  set_register(0x5A, ELE0_R, REL_THRESH);

  set_register(0x5A, ELE1_T, TOU_THRESH);
  set_register(0x5A, ELE1_R, REL_THRESH);

  set_register(0x5A, ELE2_T, TOU_THRESH);
  set_register(0x5A, ELE2_R, REL_THRESH);

  set_register(0x5A, ELE3_T, TOU_THRESH);
  set_register(0x5A, ELE3_R, REL_THRESH);

  set_register(0x5A, ELE4_T, TOU_THRESH);
  set_register(0x5A, ELE4_R, REL_THRESH);

  set_register(0x5A, ELE5_T, TOU_THRESH);
  set_register(0x5A, ELE5_R, REL_THRESH);

  set_register(0x5A, ELE6_T, TOU_THRESH);
  set_register(0x5A, ELE6_R, REL_THRESH);

  set_register(0x5A, ELE7_T, TOU_THRESH);
  set_register(0x5A, ELE7_R, REL_THRESH);

  set_register(0x5A, ELE8_T, TOU_THRESH);
  set_register(0x5A, ELE8_R, REL_THRESH);

  set_register(0x5A, ELE9_T, TOU_THRESH);
  set_register(0x5A, ELE9_R, REL_THRESH);

  set_register(0x5A, ELE10_T, TOU_THRESH);
  set_register(0x5A, ELE10_R, REL_THRESH);

  set_register(0x5A, ELE11_T, TOU_THRESH);
  set_register(0x5A, ELE11_R, REL_THRESH);

  // Section D
  // Set the Filter Configuration
  // Set ESI2
  set_register(0x5A, FIL_CFG, 0x04);

  // Section E
  // Electrode Configuration
  // Set ELE_CFG to 0x00 to return to standby mode
  set_register(0x5A, ELE_CFG, 0x0C);  // Enables all 12 Electrodes


  // Section F
  // Enable Auto Config and auto Reconfig
  /*set_register(0x5A, ATO_CFG0, 0x0B);
  set_register(0x5A, ATO_CFGU, 0xC9);  // USL = (Vdd-0.7)/vdd*256 = 0xC9 @3.3V   set_register(0x5A, ATO_CFGL, 0x82);  // LSL = 0.65*USL = 0x82 @3.3V
  set_register(0x5A, ATO_CFGT, 0xB5);*/  // Target = 0.9*USL = 0xB5 @3.3V

  set_register(0x5A, ELE_CFG, 0x0C);

}


boolean checkInterrupt(void) {
  return digitalRead(irqpin);
}


void set_register(int address, unsigned char r, unsigned char v) {
  Wire.beginTransmission(address);
  Wire.write(r);
  Wire.write(v);
  Wire.endTransmission();
}
void keypicked(char *alter_keystroke, int addresskey) {


switch(EEPROM.read(addresskey)) {
      case 'A' :
         *alter_keystroke=KEY_LEFT_CTRL;
         break;
    case 'B' :
         *alter_keystroke=KEY_LEFT_SHIFT;
         break;
    case 'C' :
         *alter_keystroke=KEY_LEFT_ALT;
         break;
    case 'D' :
         *alter_keystroke=KEY_LEFT_GUI;
         break;
    case 'E' :
         *alter_keystroke=KEY_RIGHT_CTRL;
         break;
    case 'F' :
         *alter_keystroke=KEY_RIGHT_SHIFT;
         break;
    case 'G' :
         *alter_keystroke=KEY_RIGHT_ALT;
         break;
    case 'H' :
         *alter_keystroke=KEY_RIGHT_GUI;
         break;
    case 'I' :
         *alter_keystroke=KEY_UP_ARROW;
         break;
    case 'J' :
         *alter_keystroke=KEY_DOWN_ARROW;
         break;
    case 'K' :
         *alter_keystroke=KEY_LEFT_ARROW;
         break;
    case 'L' :
         *alter_keystroke=KEY_RIGHT_ARROW;
         break;
    case 'M' :
         *alter_keystroke=KEY_BACKSPACE;
         break;
    case 'N' :
         *alter_keystroke=KEY_RETURN;
         break;
    case 'O' :
         *alter_keystroke=KEY_ESC;
         break;
    case 'P' :
         *alter_keystroke=KEY_INSERT;
         break;
    case 'Q' :
         *alter_keystroke=KEY_DELETE;
         break;
    case 'R' :
         *alter_keystroke=KEY_PAGE_UP;
         break;
    case 'S' :
         *alter_keystroke=KEY_PAGE_DOWN;
         break;
    case 'T' :
         *alter_keystroke=KEY_HOME;
         break;
    case 'U' :
         *alter_keystroke=KEY_END;
         break;
    case 'V' :
         *alter_keystroke=KEY_CAPS_LOCK;
         break;
    case 'W' :
         *alter_keystroke=KEY_F1;
         break;
    case 'X' :
         *alter_keystroke=KEY_F2;
         break;
    case 'Y' :
         *alter_keystroke=KEY_F3;
         break;
    case 'Z' :
         *alter_keystroke=KEY_F4;
         break;
    case '0' :
         *alter_keystroke='\0';
         break;     
   default :
         *alter_keystroke=EEPROM.read(addresskey);
   }
}

