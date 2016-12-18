char buffer[67]; // el buffer o zona de almacenamiento intermedia en el que se depositarán los bytes.
//En esta sección se procede a declarar cada uno de los pines del Arduino

byte Pino02 = 2;    //15
byte Pino03 = 3;    //12
byte Pino04 = 4;    //11
byte Pino05 = 5;    //10  
byte Pino06 = 6;    //9
byte Pino07 = 7;    //5
byte Pino08 = 8;    //6
byte Pino09 = 9;    //7
byte Pino10 = 10;   //8
byte Pino11 = 11;   //4
byte Pino12 = 12;   //3
byte Pino13 = 13;   //16
byte PinoA0 = A0;   //13
byte PinoA1 = A1;   //14
byte PinoA2 = A2;   //1
byte PinoA3 = A3;   //2
byte PinoA4 = A4;
byte PinoA5 = A5;

void setup() //setup() es la parte encargada de recoger la configuración
{
  Serial.begin(9600);// Abre el puerto serie y fija la velocidad en baudios para la transmisión de datos en serie
  Serial.flush(); // Vacia el buffer del puerto serial. Posteriormente se llama read() y available() las cuales retornarán datos recibidos después del uso del comando flush.
  
  pinMode(Pino02, OUTPUT); // configura 'pin' como salida
  pinMode(Pino03, OUTPUT);
  pinMode(Pino04, OUTPUT);
  pinMode(Pino05, OUTPUT);
  pinMode(Pino06, OUTPUT);
  pinMode(Pino07, OUTPUT);
  pinMode(Pino08, OUTPUT);
  pinMode(Pino09, OUTPUT);
  pinMode(Pino10, OUTPUT);
  pinMode(Pino11, OUTPUT);
  pinMode(Pino12, OUTPUT);
  pinMode(Pino13, OUTPUT);
  pinMode(PinoA0, OUTPUT);
  pinMode(PinoA1, OUTPUT);
  pinMode(PinoA2, OUTPUT);
  pinMode(PinoA3, OUTPUT);
  pinMode(PinoA4, OUTPUT);
  pinMode(PinoA5, OUTPUT);
}
void loop() //loop() es la que contiene el programa que se ejecutará cíclicamente
{
  if (Serial.available()>0){
    int index=0;
    delay(100);// Pausa el programa en un lapso de tiempo en milisegundos
    int numChar = Serial.available();
    if(numChar>65)
    {
      numChar=65;
    }
    while(numChar--)
    {
      buffer[index++] = Serial.read();
    }
    splitString(buffer);
  }
}
void splitString(char* data)
{
  Serial.print("Dados inseridos: ");
  Serial.println(data);
  char* parameter;
  parameter= strtok (data, " ,");
  while(parameter != NULL)
  {
    setLED(parameter);
    parameter = strtok (NULL, " ,");
  }
  //Limpia el texto y llama a los puertos seriales
  for (int x=0; x<66; x++){
    buffer[x]='\0';
  }
  Serial.flush();
}

void setLED(char* data)
{
  bool activo=false;
  if ((data[0] =='a') || (data[0] == 'A')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    activo=true;
    digitalWrite(Pino13,Ans);
    Serial.print("Pino02 esta em: ");
    Serial.println(Ans);
    
    int Ans1 = strtol(data+1, NULL, 10);
    Ans1 = constrain(Ans1,0,1);
    digitalWrite(Pino02,Ans1);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans1);

     int Ans2 = strtol(data+1, NULL, 10);
    Ans2 = constrain(Ans2,0,1);
    digitalWrite(PinoA0,Ans2);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans2);

     int Ans3 = strtol(data+1, NULL, 10);
    Ans3 = constrain(Ans3,0,1);
    digitalWrite(PinoA1,Ans3);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans3);
    
    delay(1000);

  int Ans4 = strtol(data+1, NULL, 10);
    Ans4 = constrain(Ans4,0,1);
    activo=true;
    digitalWrite(Pino06,Ans4);
    Serial.print("Pino02 esta em: ");
    Serial.println(Ans4);
    
    int Ans5 = strtol(data+1, NULL, 10);
    Ans5 = constrain(Ans5,0,1);
    digitalWrite(Pino05,Ans5);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans5);

     int Ans6 = strtol(data+1, NULL, 10);
    Ans6 = constrain(Ans6,0,1);
    digitalWrite(Pino04,Ans6);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans6);

     int Ans7 = strtol(data+1, NULL, 10);
    Ans7 = constrain(Ans7,0,1);
    digitalWrite(Pino03,Ans7);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans7);
    
   Serial.write(0x0d);

    
  }
  if ((data[0] =='b') || (data[0] == 'B')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,255);
    analogWrite(Pino03, Ans);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='c') || (data[0] == 'C')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(Pino04, Ans);
    Serial.print("Pino04 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='d') || (data[0] == 'D')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,255);
    analogWrite(Pino05, Ans);
    Serial.print("Pino05 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='e') || (data[0] == 'E')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,255);
    analogWrite(Pino06, Ans);
    Serial.print("Pino06 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='f') || (data[0] == 'F')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(Pino07, Ans);
    Serial.print("Pino07 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='g') || (data[0] == 'G')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(Pino08, Ans);
    Serial.print("Pino08 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='h') || (data[0] == 'H')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,255);
    analogWrite(Pino09, Ans);
    Serial.print("Pino09 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='i') || (data[0] == 'I')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,255);
    analogWrite(Pino10, Ans);
    Serial.print("Pino10 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='j') || (data[0] == 'J')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,255);
    analogWrite(Pino11, Ans);
    Serial.print("Pino11 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='k') || (data[0] == 'K')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(Pino12, Ans);
    Serial.print("Pino12 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='l') || (data[0] == 'L')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(Pino13, Ans);
    Serial.print("Pino13 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='m') || (data[0] == 'M')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(PinoA0, Ans);
    Serial.print("PinoA0 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='n') || (data[0] == 'N')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(PinoA1, Ans);
    Serial.print("PinoA1 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='o') || (data[0] == 'O')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(PinoA2, Ans);
    Serial.print("PinoA2 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='p') || (data[0] == 'P')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(PinoA3, Ans);
    Serial.print("PinoA3 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='q') || (data[0] == 'Q')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(PinoA4, Ans);
    Serial.print("PinoA4 esta em: ");
    Serial.println(Ans);
  }
  if ((data[0] =='r') || (data[0] == 'R')){
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    digitalWrite(PinoA5, Ans);
    Serial.print("PinoA5 esta em: ");
    Serial.println(Ans);
  } 
}
