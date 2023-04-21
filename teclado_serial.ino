
/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral KINAL
 Electronica
 Grado:5to A
 Nombre:Roberto Monterroso
 Carne :2019507
 */

#include <Keypad.h>

#define Filas 4   
#define Columnas 4 
#define F_1 9
#define F_2 8
#define F_3 7
#define F_4 6
#define C_1 5
#define C_2 4
#define C_3 3
#define C_4 2

#define A 10
#define B 11
#define C 12
#define D 14
#define E 15
#define F 16
#define G 17

char keys[Filas][Columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte PinesFilas[Filas] = {F_1,F_2,F_3,F_4};
byte PinesColumnas[Columnas] = {C_1,C_2,C_3,C_4};

Keypad Teclado = Keypad(makeKeymap(keys),PinesFilas,PinesColumnas,Filas,Columnas);

void setup() { 
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
}
void loop() {
  char tecla = Teclado.getKey();
     
if (tecla == 'A') {
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
  }
if (tecla == 'B') {
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
    
  }
if (tecla == 'C') {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,LOW);
delay(1000);
}
// Tecla D
   if (tecla == 'D') {
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,LOW);
digitalWrite(17,HIGH);
delay(1000);
    }  
if (tecla == '*') {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
  }
  if (tecla == '#') {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(14,LOW);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
  }    
if(tecla == '0')
{ 
digitalWrite(10,HIGH);// 0
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,LOW);
delay(100);
}
if(tecla == '1')
{
digitalWrite(10,LOW);//1
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,LOW);
digitalWrite(16,LOW);
digitalWrite(17,LOW);
delay(1000);
}
if(tecla == '2')
{
digitalWrite(10,HIGH);//2
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,LOW);
digitalWrite(17,HIGH);
delay(1000);
}
if(tecla == '3')
{
digitalWrite(10,HIGH);//3
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,LOW);
digitalWrite(16,LOW);
digitalWrite(17,HIGH);
delay(1000);
}
if(tecla == '4')
{
digitalWrite(10,LOW);//4
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,LOW);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}
if(tecla == '5')
{
digitalWrite(10,HIGH);//5
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,LOW);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}
if(tecla == '6')
{
digitalWrite(10,HIGH);//6
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}
if(tecla == '7')
{
digitalWrite(10,HIGH);//7
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,LOW);
digitalWrite(16,LOW);
digitalWrite(17,LOW);
delay(1000);
}
if(tecla == '8')
{
digitalWrite(10,HIGH);//8
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}
if(tecla == '9')
{
digitalWrite(10,HIGH);//9
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,LOW);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}


else
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(14,HIGH);
   digitalWrite(15,HIGH);
   digitalWrite(16,HIGH);
   digitalWrite(17,LOW);
  
   }
