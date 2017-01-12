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
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

  //secuencia encender toda la matriz
  bool activo=false,botonpress=false;
  int time=50;
  
  if ((data[0] =='a') || (data[0] == 'A')){
    
      bool encendido=false;
    for(int i=0; i<15; i++){
      if((data[0] !='e') || (data[0] != 'E'))
     {
      if(encendido){
        digitalWrite(PinoA2, LOW); 
        digitalWrite(PinoA3, LOW); 
        digitalWrite(Pino12, LOW); 
        digitalWrite(Pino11, LOW); 
        digitalWrite(Pino07, LOW); 
        digitalWrite(Pino08, LOW); 
        digitalWrite(Pino09, LOW); 
        digitalWrite(Pino10, LOW); 
        digitalWrite(Pino06, LOW); 
        digitalWrite(Pino05, LOW); 
        digitalWrite(Pino04, LOW); 
        digitalWrite(Pino03, LOW); 
        digitalWrite(PinoA0, LOW); 
        digitalWrite(PinoA1, LOW); 
        digitalWrite(Pino02, LOW); 
        digitalWrite(Pino13, LOW);
        encendido=false;
      }
      else{
            int Ans = strtol(data+1, NULL, 10);
            Ans = constrain(Ans,0,1);
            activo=true;
            digitalWrite(Pino13,Ans);
            Serial.println(Ans);

            //LED ENCENDIDO 15
            int Ans1 = strtol(data+1, NULL, 10);
             Ans1 = constrain(Ans1,0,1);
            digitalWrite(Pino02,Ans1);
            Serial.println(Ans1);

              //LED ENCENDIDO 14
              int Ans2 = strtol(data+1, NULL, 10);
              Ans2 = constrain(Ans2,0,1);
             digitalWrite(PinoA1,Ans2);
             Serial.println(Ans2);
    
    //LED ENCENDIDO 13
    int Ans3 = strtol(data+1, NULL, 10);
    Ans3 = constrain(Ans3,0,1);
    digitalWrite(PinoA0,Ans3);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans3);
    
    //LED ENCENDIDO 12
    int Ans4 = strtol(data+1, NULL, 10);
    Ans4 = constrain(Ans4,0,1);
    activo=true;
    digitalWrite(Pino03,Ans4);
    Serial.println(Ans4);

    //LED ENCENDIDO 11
    int Ans5 = strtol(data+1, NULL, 10);
    Ans5 = constrain(Ans5,0,1);
    digitalWrite(Pino04,Ans5);
    Serial.println(Ans5);

    //LED ENCENDIDO 10
    int Ans6 = strtol(data+1, NULL, 10);
    Ans6 = constrain(Ans6,0,1);
    digitalWrite(Pino05,Ans6);
    Serial.println(Ans6);

    //LED ENCENDIDO 9
    int Ans7 = strtol(data+1, NULL, 10);
    Ans7 = constrain(Ans7,0,1);
    digitalWrite(Pino06,Ans7);
    Serial.println(Ans7);

    //la mitad de la matriz

    //LED ENCENDIDO 8
    int Ans8 = strtol(data+1, NULL, 10);
    Ans8 = constrain(Ans8,0,1);
    digitalWrite(Pino10,Ans1);
    Serial.println(Ans8);

    //LED ENCENDIDO 7
    int Ans9 = strtol(data+1, NULL, 10);
    Ans9 = constrain(Ans9,0,1);
    digitalWrite(Pino09,Ans9);
    Serial.println(Ans9);

    //LED ENCENDIDO 6
    int Ans10 = strtol(data+1, NULL, 10);
    Ans3 = constrain(Ans10,0,1);
    digitalWrite(Pino08,Ans10);
    Serial.println(Ans10);
   
    //LED ENCENDIDO 5
    int Ans11 = strtol(data+1, NULL, 10);
    Ans11 = constrain(Ans11,0,1);
    activo=true;
    digitalWrite(Pino07,Ans11);
    Serial.println(Ans11);

    //LED ENCENDIDO 4
    int Ans12 = strtol(data+1, NULL, 10);
    Ans12 = constrain(Ans12,0,1);
    digitalWrite(Pino11,Ans5);
    Serial.println(Ans12);
    
    //LED ENCENDIDO 3
    int Ans13 = strtol(data+1, NULL, 10);
    Ans13 = constrain(Ans13,0,1);
    digitalWrite(Pino12,Ans13);
    Serial.println(Ans13);
    
    //LED ENCENDIDO 2
    int Ans14 = strtol(data+1, NULL, 10);
    Ans14 = constrain(Ans14,0,1);
    digitalWrite(PinoA3,Ans14);
    Serial.println(Ans14);

     //LED ENCENDIDO 1
    int Ans15 = strtol(data+1, NULL, 10);
    Ans14 = constrain(Ans15,0,1);
    digitalWrite(PinoA2,Ans15);
    Serial.println(Ans15);
    encendido=true;
      }
      delay(200);
      
      
    }
    else{
      digitalWrite(PinoA2, LOW); 
           digitalWrite(PinoA3, LOW); 
           digitalWrite(Pino12, LOW); 
           digitalWrite(Pino11, LOW); 
           digitalWrite(Pino07, LOW); 
           digitalWrite(Pino08, LOW); 
           digitalWrite(Pino09, LOW); 
           digitalWrite(Pino10, LOW); 
           digitalWrite(Pino06, LOW); 
           digitalWrite(Pino05, LOW); 
            digitalWrite(Pino04, LOW); 
           digitalWrite(Pino03, LOW); 
           digitalWrite(PinoA0, LOW); 
            digitalWrite(PinoA1, LOW); 
           digitalWrite(Pino02, LOW); 
           digitalWrite(Pino13, LOW);
          break;
          encendido=false;
    }
    }  
  }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Marea 
  if ((data[0] =='b') || (data[0] == 'B')){
    botonpress=false;
    //LED ENCENDIDO 16
    
   bool en=false;
    for(int i=0; i<15; i++){
    if((data[0] !='e') || (data[0] != 'E'))
    {  
    if(en){
    digitalWrite(PinoA2, LOW); 
    digitalWrite(PinoA3, LOW); 
    digitalWrite(Pino12, LOW); 
    digitalWrite(Pino11, LOW); 
    digitalWrite(Pino07, LOW); 
    digitalWrite(Pino08, LOW); 
    digitalWrite(Pino09, LOW); 
    digitalWrite(Pino10, LOW); 
    digitalWrite(Pino06, LOW); 
    digitalWrite(Pino05, LOW); 
    digitalWrite(Pino04, LOW); 
    digitalWrite(Pino03, LOW); 
    digitalWrite(PinoA0, LOW); 
    digitalWrite(PinoA1, LOW); 
    digitalWrite(Pino02, LOW); 
    digitalWrite(Pino13, LOW);
    en=false;
      }
      else{
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    activo=true;
    digitalWrite(Pino13,Ans);
    Serial.println(Ans);

    //LED ENCENDIDO 15
    int Ans1 = strtol(data+1, NULL, 10);
    Ans1 = constrain(Ans1,0,1);
    digitalWrite(Pino02,Ans1);
    Serial.println(Ans1);

    //LED ENCENDIDO 14
    int Ans2 = strtol(data+1, NULL, 10);
    Ans2 = constrain(Ans2,0,1);
    digitalWrite(PinoA1,Ans2);
    Serial.println(Ans2);
    
    //LED ENCENDIDO 13
    int Ans3 = strtol(data+1, NULL, 10);
    Ans3 = constrain(Ans3,0,1);
    digitalWrite(PinoA0,Ans3);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans3);

    delay(200);

 //LED ENCENDIDO 12
    int Ans4 = strtol(data+1, NULL, 10);
    Ans4 = constrain(Ans4,0,1);
    activo=true;
    digitalWrite(Pino03,Ans4);
    Serial.println(Ans4);

    //LED ENCENDIDO 11
    int Ans5 = strtol(data+1, NULL, 10);
    Ans5 = constrain(Ans5,0,1);
    digitalWrite(Pino04,Ans5);
    Serial.println(Ans5);

    //LED ENCENDIDO 10
    int Ans6 = strtol(data+1, NULL, 10);
    Ans6 = constrain(Ans6,0,1);
    digitalWrite(Pino05,Ans6);
    Serial.println(Ans6);

    //LED ENCENDIDO 9
    int Ans7 = strtol(data+1, NULL, 10);
    Ans7 = constrain(Ans7,0,1);
    digitalWrite(Pino06,Ans7);
    Serial.println(Ans7);

    delay (200);

        //LED ENCENDIDO 8
    int Ans8 = strtol(data+1, NULL, 10);
    Ans8 = constrain(Ans8,0,1);
    digitalWrite(Pino10,Ans8);
    Serial.println(Ans8);

    //LED ENCENDIDO 7
    int Ans9 = strtol(data+1, NULL, 10);
    Ans9 = constrain(Ans9,0,1);
    digitalWrite(Pino09,Ans9);
    Serial.println(Ans9);

    //LED ENCENDIDO 6
    int Ans10 = strtol(data+1, NULL, 10);
    Ans3 = constrain(Ans10,0,1);
    digitalWrite(Pino08,Ans10);
    Serial.println(Ans10);
   
    //LED ENCENDIDO 5
    int Ans11 = strtol(data+1, NULL, 10);
    Ans11 = constrain(Ans11,0,1);
    activo=true;
    digitalWrite(Pino07,Ans11);
    Serial.println(Ans11);  

    delay(200);

    
    //LED ENCENDIDO 4
    int Ans12 = strtol(data+1, NULL, 10);
    Ans12 = constrain(Ans12,0,1);
    digitalWrite(Pino11,Ans12);
    Serial.println(Ans12);
    
    //LED ENCENDIDO 3
    int Ans13 = strtol(data+1, NULL, 10);
    Ans13 = constrain(Ans13,0,1);
    digitalWrite(Pino12,Ans13);
    Serial.println(Ans13);
    
    //LED ENCENDIDO 2
    int Ans14 = strtol(data+1, NULL, 10);
    Ans14 = constrain(Ans14,0,1);
    digitalWrite(PinoA3,Ans14);
    Serial.println(Ans14);

     //LED ENCENDIDO 1
    int Ans15 = strtol(data+1, NULL, 10);
    Ans14 = constrain(Ans15,0,1);
    digitalWrite(PinoA2,Ans15);
    Serial.println(Ans15);
        en=true;
    
      }
       delay(time);
      }
      else
      {
         digitalWrite(PinoA2, LOW); 
           digitalWrite(PinoA3, LOW); 
           digitalWrite(Pino12, LOW); 
           digitalWrite(Pino11, LOW); 
           digitalWrite(Pino07, LOW); 
           digitalWrite(Pino08, LOW); 
           digitalWrite(Pino09, LOW); 
           digitalWrite(Pino10, LOW); 
           digitalWrite(Pino06, LOW); 
           digitalWrite(Pino05, LOW); 
            digitalWrite(Pino04, LOW); 
           digitalWrite(Pino03, LOW); 
           digitalWrite(PinoA0, LOW); 
            digitalWrite(PinoA1, LOW); 
           digitalWrite(Pino02, LOW); 
           digitalWrite(Pino13, LOW);
          break;
          en=false;
        
      }
    }
  }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SNAKE
  if ((data[0] =='c') || (data[0] == 'C')){
         //LED ENCENDIDO 1
         botonpress=false;
            bool en=false;
    for(int i=0; i<10; i++){
      if((data[0] !='e') || (data[0] != 'E'))
    {  
      if(en){
    digitalWrite(PinoA2, LOW); 
    digitalWrite(PinoA3, LOW); 
    digitalWrite(Pino12, LOW); 
    digitalWrite(Pino11, LOW); 
    digitalWrite(Pino07, LOW); 
    digitalWrite(Pino08, LOW); 
    digitalWrite(Pino09, LOW); 
    digitalWrite(Pino10, LOW); 
    digitalWrite(Pino06, LOW); 
    digitalWrite(Pino05, LOW); 
    digitalWrite(Pino04, LOW); 
    digitalWrite(Pino03, LOW); 
    digitalWrite(PinoA0, LOW); 
    digitalWrite(PinoA1, LOW); 
    digitalWrite(Pino02, LOW); 
    digitalWrite(Pino13, LOW);
    en=false;
      }
      else
      {
    int Ans15 = strtol(data+1, NULL, 10);
    Ans15 = constrain(Ans15,0,1);
    digitalWrite(PinoA2,Ans15);
    Serial.println(Ans15);

    delay(200);

    //LED ENCENDIDO 2
    int Ans14 = strtol(data+1, NULL, 10);
    Ans14 = constrain(Ans14,0,1);
    digitalWrite(PinoA3,Ans14);
    Serial.println(Ans14);

    delay(200);

    //LED ENCENDIDO 3
    int Ans13 = strtol(data+1, NULL, 10);
    Ans13 = constrain(Ans13,0,1);
    digitalWrite(Pino12,Ans13);
    Serial.println(Ans13);

    delay(200);

        //LED ENCENDIDO 4
    int Ans12 = strtol(data+1, NULL, 10);
    Ans12 = constrain(Ans12,0,1);
    digitalWrite(Pino11,Ans12);
    Serial.println(Ans12);
    
     delay(200);

      //LED ENCENDIDO 8
    int Ans8 = strtol(data+1, NULL, 10);
    Ans8 = constrain(Ans8,0,1);
    digitalWrite(Pino10,Ans8);
    Serial.println(Ans8);
     delay(200);
       
    //LED ENCENDIDO 7
    int Ans9 = strtol(data+1, NULL, 10);
    Ans9 = constrain(Ans9,0,1);
    digitalWrite(Pino09,Ans9);
    Serial.println(Ans9);
        delay(200);
     
          //LED ENCENDIDO 6
    int Ans10 = strtol(data+1, NULL, 10);
    Ans10 = constrain(Ans10,0,1);
    digitalWrite(Pino08,Ans10);
    Serial.println(Ans10);
 delay(200);
            //LED ENCENDIDO 5
    int Ans11 = strtol(data+1, NULL, 10);
    Ans11 = constrain(Ans11,0,1);
    activo=true;
    digitalWrite(Pino07,Ans11);
    Serial.println(Ans11);
 delay(200);
         //LED ENCENDIDO 9
    int Ans7 = strtol(data+1, NULL, 10);
    Ans7 = constrain(Ans7,0,1);
    digitalWrite(Pino06,Ans7);
    Serial.println(Ans7);
     delay(200);

         //LED ENCENDIDO 10
    int Ans6 = strtol(data+1, NULL, 10);
    Ans6 = constrain(Ans6,0,1);
    digitalWrite(Pino05,Ans6);
    Serial.println(Ans6);
     delay(200);

    
         //LED ENCENDIDO 11
    int Ans5 = strtol(data+1, NULL, 10);
    Ans5 = constrain(Ans5,0,1);
    digitalWrite(Pino04,Ans5);
    Serial.println(Ans5);
    
     delay(200);

      //LED ENCENDIDO 12
    int Ans4 = strtol(data+1, NULL, 10);
    Ans4 = constrain(Ans4,0,1);
    activo=true;
    digitalWrite(Pino03,Ans4);
    Serial.println(Ans4);

         delay(200);

         //LED ENCENDIDO 16
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    activo=true;
    digitalWrite(Pino13,Ans);
    Serial.println(Ans);

        
     delay(200);
         //LED ENCENDIDO 15
    int Ans1 = strtol(data+1, NULL, 10);
    Ans1 = constrain(Ans1,0,1);
    digitalWrite(Pino02,Ans1);
    Serial.println(Ans1);


        delay(200);

     
    //LED ENCENDIDO 14
    int Ans2 = strtol(data+1, NULL, 10);
    Ans2 = constrain(Ans2,0,1);
    digitalWrite(PinoA1,Ans2);
    Serial.println(Ans2);

    
   delay(200);

         //LED ENCENDIDO 13
    int Ans3 = strtol(data+1, NULL, 10);
    Ans3 = constrain(Ans3,0,1);
    digitalWrite(PinoA0,Ans3);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans3);
    en=true;
      }
      
    
   delay(time);
    }
    else{
      digitalWrite(PinoA2, LOW); 
           digitalWrite(PinoA3, LOW); 
           digitalWrite(Pino12, LOW); 
           digitalWrite(Pino11, LOW); 
           digitalWrite(Pino07, LOW); 
           digitalWrite(Pino08, LOW); 
           digitalWrite(Pino09, LOW); 
           digitalWrite(Pino10, LOW); 
           digitalWrite(Pino06, LOW); 
           digitalWrite(Pino05, LOW); 
            digitalWrite(Pino04, LOW); 
           digitalWrite(Pino03, LOW); 
           digitalWrite(PinoA0, LOW); 
            digitalWrite(PinoA1, LOW); 
           digitalWrite(Pino02, LOW); 
           digitalWrite(Pino13, LOW);
          break;
          en=false;
    }
    delay(time);
    }
    
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// LLUVIA
  if ((data[0] =='d') || (data[0] == 'D')){
     //do{
       bool en=false;
       
       for(int i=0;i<20;i++){
         if((data[0] !='e') || (data[0] != 'E'))
         {
           if(en){
           digitalWrite(PinoA2, LOW); 
           digitalWrite(PinoA3, LOW); 
           digitalWrite(Pino12, LOW); 
           digitalWrite(Pino11, LOW); 
           digitalWrite(Pino07, LOW); 
           digitalWrite(Pino08, LOW); 
           digitalWrite(Pino09, LOW); 
           digitalWrite(Pino10, LOW); 
           digitalWrite(Pino06, LOW); 
           digitalWrite(Pino05, LOW); 
            digitalWrite(Pino04, LOW); 
           digitalWrite(Pino03, LOW); 
           digitalWrite(PinoA0, LOW); 
            digitalWrite(PinoA1, LOW); 
           digitalWrite(Pino02, LOW); 
           digitalWrite(Pino13, LOW);
            en=false;
          }
          else{
             int Ans15 = strtol(data+1, NULL, 10);
    Ans15 = constrain(Ans15,0,1);
    digitalWrite(PinoA2,Ans15);
    Serial.println(Ans15);

    delay(50);

    //LED ENCENDIDO 2
    int Ans14 = strtol(data+1, NULL, 10);
    Ans14 = constrain(Ans14,0,1);
    digitalWrite(Pino07,Ans14);
    Serial.println(Ans14);

    delay(50);

    //LED ENCENDIDO 3
    int Ans13 = strtol(data+1, NULL, 10);
    Ans13 = constrain(Ans13,0,1);
    digitalWrite(Pino06,Ans13);
    Serial.println(Ans13);

    delay(50);

        //LED ENCENDIDO 4
    int Ans12 = strtol(data+1, NULL, 10);
    Ans12 = constrain(Ans12,0,1);
    digitalWrite(PinoA0,Ans12);
    Serial.println(Ans12);
    
     delay(50);

      //LED ENCENDIDO 8
    int Ans8 = strtol(data+1, NULL, 10);
    Ans8 = constrain(Ans8,0,1);
    digitalWrite(PinoA3,Ans8);
    Serial.println(Ans8);
     delay(50);
       
    //LED ENCENDIDO 7
    int Ans9 = strtol(data+1, NULL, 10);
    Ans9 = constrain(Ans9,0,1);
    digitalWrite(Pino08,Ans9);
    Serial.println(Ans9);
        delay(50);
     
          //LED ENCENDIDO 6
    int Ans10 = strtol(data+1, NULL, 10);
    Ans10 = constrain(Ans10,0,1);
    digitalWrite(Pino05,Ans10);
    Serial.println(Ans10);
 delay(50);
            //LED ENCENDIDO 5
    int Ans11 = strtol(data+1, NULL, 10);
    Ans11 = constrain(Ans11,0,1);
    activo=true;
    digitalWrite(PinoA1,Ans11);
    Serial.println(Ans11);
 delay(50);
         //LED ENCENDIDO 9
    int Ans7 = strtol(data+1, NULL, 10);
    Ans7 = constrain(Ans7,0,1);
    digitalWrite(Pino12,Ans7);
    Serial.println(Ans7);
     delay(50);

         //LED ENCENDIDO 10
    int Ans6 = strtol(data+1, NULL, 10);
    Ans6 = constrain(Ans6,0,1);
    digitalWrite(Pino09,Ans6);
    Serial.println(Ans6);
     delay(50);

    
         //LED ENCENDIDO 11
    int Ans5 = strtol(data+1, NULL, 10);
    Ans5 = constrain(Ans5,0,1);
    digitalWrite(Pino04,Ans5);
    Serial.println(Ans5);
    
     delay(50);

      //LED ENCENDIDO 12
    int Ans4 = strtol(data+1, NULL, 10);
    Ans4 = constrain(Ans4,0,1);
    activo=true;
    digitalWrite(Pino02,Ans4);
    Serial.println(Ans4);

         delay(50);

         //LED ENCENDIDO 16
    int Ans = strtol(data+1, NULL, 10);
    Ans = constrain(Ans,0,1);
    activo=true;
    digitalWrite(Pino11,Ans);
    Serial.println(Ans);

        
     delay(50);
         //LED ENCENDIDO 15
    int Ans1 = strtol(data+1, NULL, 10);
    Ans1 = constrain(Ans1,0,1);
    digitalWrite(Pino10,Ans1);
    Serial.println(Ans1);


        delay(50);

     
    //LED ENCENDIDO 14
    int Ans2 = strtol(data+1, NULL, 10);
    Ans2 = constrain(Ans2,0,1);
    digitalWrite(Pino03,Ans2);
    Serial.println(Ans2);

    
   delay(50);

         //LED ENCENDIDO 13
    int Ans3 = strtol(data+1, NULL, 10);
    Ans3 = constrain(Ans3,0,1);
    digitalWrite(Pino13,Ans3);
    Serial.print("Pino03 esta em: ");
    Serial.println(Ans3);
    en=true;
          }
        }
        
        else{
          digitalWrite(PinoA2, LOW); 
           digitalWrite(PinoA3, LOW); 
           digitalWrite(Pino12, LOW); 
           digitalWrite(Pino11, LOW); 
           digitalWrite(Pino07, LOW); 
           digitalWrite(Pino08, LOW); 
           digitalWrite(Pino09, LOW); 
           digitalWrite(Pino10, LOW); 
           digitalWrite(Pino06, LOW); 
           digitalWrite(Pino05, LOW); 
            digitalWrite(Pino04, LOW); 
           digitalWrite(Pino03, LOW); 
           digitalWrite(PinoA0, LOW); 
            digitalWrite(PinoA1, LOW); 
           digitalWrite(Pino02, LOW); 
           digitalWrite(Pino13, LOW);
          break;
          en=false;
        }
        delay(time);
       }
       
       
     //}while((data[0] !='c') || (data[0] != 'C'));

         
  }
  
  //DETENER
  if ((data[0] =='e') || (data[0] == 'E')){ 
      time=0;     
  }
  
}
