<p style="text-align: center;">![uteq](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\uteq.jpg)


#**<p style="text-align: center;">UNIVERSIDAD TÉCNICA ESTATAL DE QUEVEDO</p>**

##**<p style="text-align: center;">FACULTAD DE CIENCIAS DE LA INGENIERÍA</p>**

###**<p style="text-align: center;">ESCUELA DE ELÉCTRICA</p>**


**<p style="text-align: center;">CARRERA:</p>**

<p style="text-align: center;">INGENIERÍA EN TELEMÁTICA</p>


**<p style="text-align: center;">UNIDAD DE APRENDIZAJE:</p>**

<p style="text-align: center;">INTERACCIÓN HOMBRE MÁQUINA</p>


**<p style="text-align: center;">TEMA:</p>**

<p style="text-align: center;">CUBO LED 4X4X4</p>

**<p style="text-align: center;">INTEGRANTES:</p>**


<p style="text-align: center;">BRIONES BRAVO JHON KEVIN</p>

<p style="text-align: center;">ESPINOZA MARTÍNEZ ÁLVARO DANIEL</p>

<p style="text-align: center;">SOLÓRZANO CASTRO LUIS ENRIQUE</p>

**<p style="text-align: center;">DOCENTE:</p>**

<p style="text-align: center;">ING. PAULO CHILIGUANO</p>


**<p style="text-align: center;">QUEVEDO – LOS RIOS – ECUADOR</p>**

**<p style="text-align: center;">2016 – 2017</p>**
 

----------

###**<p style="text-align: center;">ÍNDICE DE CONTENIDO</p>**

CONTENIDO............................................................................................................PÁG


1 INTRODUCCIÓN..................................................................................................... 1 
  
2 RECURSOS............................................................................................................ 2

3 MARCO TEÓRICO...................................................................................................3

3.1. COMPONENTES ELECTRÓNICOS....................................................................3

3.1.1 DIODO LED........................................................................................................3

3.1.2 RESISTENCIA....................................................................................................3

3.1.3 PROTOBOARD..................................................................................................4

3.1.4 CABLE UTP........................................................................................................4

3.1.5 ARDUINO...........................................................................................................4

4 DESARROLLO.........................................................................................................5

4.1CONSTRUCCIÓN DEL PROTOTIPO DE UN CUBO LED 4X4X4.........................5

4.1.1	CONECTANDO Y CONFIGURANDO EL ARDUINO..........................................5

4.1.2.	CREACIÓN DEL CUBO LED............................................................................15

5 CONCLUSIÓN.........................................................................................................18

6 RESULTADO...........................................................................................................19

7 BIBLIOGRAFÍA........................................................................................................20



----------


###**<p style="text-align: center;">ÍNDICE DE FIGURAS</p>**


CONTENIDO…………………………………………………………………………………PÁG

Figura 1. Diodo Led......................................................................................................    3

Figura 2. Resistencia.....................................................................................................3  

Figura 3. Protoboard......................................................................................................4

Figura 4. Cable UTP......................................................................................................4

Figura 5. Arduino...........................................................................................................4

Figura 6. Cable de Arduino............................................................................................5

Figura 7. Conexión arduino al pc...................................................................................5

Figura 8. Configuración Software Arduino.....................................................................5

Figura 9. Seleccionando el arduino...............................................................................5

Figura 10. Verificando el código para el arduino..........................................................14

Figura 11. Subiendo la información al arduino.............................................................14

Figura 12. Conexión cables del arduino a protoboard.................................................15

Figura 13. Proceso de armado del cubo .....................................................................15

Figura 14. Conexión de resistencias y los leds............................................................16

Figura 15. Proceso de colocación del cubo.................................................................16

Figura 16. Funcionamiento paso a paso del cubo led.................................................17







----------

###**<p style="text-align: center;">1. INTRODUCCIÓN</p>**
<p style="text-align: justify;">

En el siguiente informe describiremos los procedimientos a ejecutar para el diseño en primera instancia de un cubo led de dimensiones 4x4x4, para luego implementarlo físicamente usando componentes electrónicos y los conocimientos adquiridos dentro de la unidad de aprendisaje.
</p>

<p style="text-align: justify;">El diseño del circuito es flexible según las necesidades del usuario, logrando desde un simple cubo led, o hasta un sistema complejo de secuencias de manejos dentro del mismo cubo led.</p>

<p style="text-align: justify;">El Arduino fue el sucesor de diversos sistemas similares pero bastantes más costosos, los microcontroladores, cuál fuese el modelo previo al arduino eran escasos en muchas de las instituciones en las cuales eran necesario este tipo de aparatos para los estudiantes de computación, de esta manera surgió la idea de crear un sistema de menor costo y mayor facilidad técnica a la hora de trabajar en él, el arduino en sí fue creado por y para alumnos.
</p>

<p style="text-align: justify;">Dentro de nuestro proyecto buscamos presentar paso a paso la utilización del arduino de una forma creativa y didáctica, y para ello hemos decidido recrear un cubo con la utilización de leds a través del programa y el sistema arduino.</p>

----------


###**<p style="text-align: center;">2.	RECURSOS</p>**



**<p style="text-align: center;">2.1.	MATERIALES PARA UN CUBO LED DE DIMENSIÓN 4X4X4</p>**

-	Cable para conexión de un arduino.
-	Arduino
-	Computador
-	Leds
-	Protoboard
-	Software “Arduino”
-	Resistencias
-	Soldadura
-	Cables para energizar


----------

###**<p style="text-align: center;">3.	MARCO TEÓRICO</p>**


**<p style="text-align: center;">3.1.	COMPONENTES ELECTRÓNICOS PARA EL PROTOTIPO</p>**

**<p style="text-align:justify;">3.1.1.	DIODO LED </p>**

<p style="text-align: justify;">El LED (Light-Emitting Diode: Diodo Emisor de Luz), es un dispositivo semiconductor que emite luz incoherente de espectro reducido cuando se polariza de forma directa la unión PN en la cual circula por él una corriente eléctrica . Este fenómeno es una forma de electroluminiscencia, el LED es un tipo especial de diodo que trabaja como un diodo común, pero que al ser atravesado por la corriente eléctrica, emite luz . Este dispositivo semiconductor está comúnmente encapsulado en una cubierta de plástico de mayor resistencia que las de vidrio que usualmente se emplean en las lámparas incandescentes. Aunque el plástico puede estar coloreado, es sólo por razones estéticas, ya que ello no influye en el color de la luz emitida. Usualmente un LED es una fuente de luz compuesta con diferentes partes, razón por la cual el patrón de intensidad de la luz emitida puede ser bastante complejo</p>


<p style="text-align: center;">![diodo](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\diodo.jpg) 
<p style="text-align: center;">Figura 1. Diodo Led</p>


**3.1.2. RESISTENCIAS**

<p style="text-align:justify;">Una resistencia también llamado resistor es un elemento que causa oposición al paso de la corriente, causando que en sus terminales aparezca una diferencia de tensión (un voltaje). (Dorf, 2013) </p>


<p style="text-align: center;">![resistencia](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\resistencia.jpg)
<p style="text-align: center;">Figura 2. Resistencia</p>


----------





**3.1.3. PROTOBOARD**

<p style="text-align:justify;">El "protoboard”, “breadboard" o "placa board" es un tablero con orificios conectados eléctricamente entre sí, habitualmente siguiendo patrones de líneas, en el cual se pueden insertar componentes electrónicos y cables para el armado y prototipo de circuitos electrónicos y sistemas similares.</p>


<p style="text-align: center;">![proto](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\proto.jpg)
<p style="text-align: center;">Figura 3. Protoboard</p>




**3.1.4. CABLES UTP**


<p style="text-align:justify;">Unshielded Twisted Pair, Par trenzado sin blindaje. Cable de telecomunicaciones universalmente utilizado para conectar equipos de escritorio a una red. Contiene cuatro pares de cables y se clasifica en categorías dependiendo de la velocidad de conducción: Categorías 3, 4, 5, 5e, 6 y 7. (Garza Garza, 2006).</p>

<p style="text-align: center;">![utp](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\utp.jpg)
<p style="text-align: center;">Figura 4. Cable UTP</p>


**3.1.5. ARDUINO**

<p style="text-align:justify;">El Arduino fue el sucesor de diversos sistemas similares pero bastantes más costosos, los microcontroladores, cuál fuese el modelo previo al arduino eran escasos en muchas de las instituciones en las cuales eran necesario este tipo de aparatos para los estudiantes de computación, de esta manera surgió la idea de crear un sistema de menor costo y mayor facilidad técnica a la hora de trabajar en él, el arduino en sí fue creado por y para alumnos.
Para entender de mejor forma la creación del arduino, fue en el año 2005 donde un estudiante del instituto IVRAE Massimo Banzi, decide emprender un proyecto para obtener una alternativa a los microcontroladores de la época  debido a su gran costo y a su escases, pero este no era el único factor de cambio sino que también los microcontroladores de la época no ofrecían un soporte adecuado al sistema. 
En un principio el único objetivo de este proyecto fue crear alternativas para estudiantes de su instituto, pero cuando comprendió lo útil que fue su proyecto y la posibilidad de comercializarlo decidió hacerlo con el objetivo de ayudar a salvar de la quiebra a su escuela, producto de esto se creó hasta ahora uno de los sistemas más eficientes y útiles a la hora de trabajar en computadores.</p>

<p style="text-align: center;">![arduino](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\arduino.jpg)
<p style="text-align: center;">Figura 5. Arduino</p>


----------




###**<p style="text-align: center;">4.	DESARROLLO</p>**


**<p style="text-align: center;">4.1.	CONSTRUCCIÓN DEL PROTOTIPO DE UN CUBO LED 4X4X4</p>**

**4.1.1	CONECTANDO Y CONFIGURANDO EL ARDUINO**

- Para poder comenzar a utilizar el hardware del arduino es necesario previamente tener instalado el software de este mismo.
-	Para conectar el arduino es necesario tener el cable de conexión especial para el arduino.

<p style="text-align: center;">![cable_arduino](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\cable_arduino.jpg)
<p style="text-align: center;">Figura 6. Cable de Arduino</p>

-	Luego este cable debe ser conectado al arduino y posteriormente al computador de esta manera: 

<p style="text-align: center;">![conexiónarduinoalpc](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\conexiónarduinoalpc.jpg)
<p style="text-align: center;">Figura 7. Conexión arduino al pc</p>

-	El siguiente paso es entrar al software del arduino desde donde configuraremos todo lo necesario para nuestro cube led, cuando estemos dentro del programa arduino lo configuraremos para nuestro dispositivo de la siguiente manera: 

<p style="text-align: center;">![ConfiguraciónSoftwareArduino](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\ConfiguraciónSoftwareArduino.jpg)
<p style="text-align: center;">Figura 8. Configuración Software Arduino</p>

-	Luego procederemos a verificar que nuestro arduino esté siendo identificado por nuestro computador  y por consiguiente seleccionarlo, para ello haremos lo siguiente:

<p style="text-align: center;">![Seleccionandoelarduino](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\Seleccionandoelarduino.jpg)
<p style="text-align: center;">Figura 9. Seleccionando el arduino</p>


----------


-	Luego de tener preparado nuestro arduino procederemos a introducir los valores y los datos necesarios para hacer funcionar nuestro led cube, es decir nuestro código.

*/

include <LedCube.h>

define SIZE 3
define COLS (SIZE*SIZE)

byte levelPins[SIZE] = {11,12,13};
byte colPins[COLS] = {2,3,4,5,6,7,8,9,10};

LedCube cube(SIZE, levelPins, colPins);

//#define DEBUG
ifdef DEBUG
include <memdebug.h>
void showmem(const char label[] = "")
{
  char buffer[100];
 
  sprintf(buffer,"%s: %04u %04u %04u : used/free",
      label,
      getMemoryUsed(),
      getFreeMemory()
    );
 

----------

  Serial.println(buffer);
}
endif

void setup ()
{
 DEBUG
    Serial.begin(9600);
endif
}

void loop ()
{
    delay(10);
    
ifdef DEBUG
    showmem("start");
endif
    cubeFrame* f[] = {
        cube.createFrame((byte[]) {0,6, 1,6, 2,6}, 6, 80),
        cube.createFrame((byte[]) {0,7, 1,7, 2,7}, 6, 70),
        cube.createFrame((byte[]) {0,8, 1,8, 2,8}, 6, 60),
        cube.createFrame((byte[]) {0,5, 1,5, 2,5}, 6, 50),
        cube.createFrame((byte[]) {0,2, 1,2, 2,2}, 6, 40),
        cube.createFrame((byte[]) {0,1, 1,1, 2,1}, 6, 30),


----------

        cube.createFrame((byte[]) {0,0, 1,0, 2,0}, 6, 20),
        cube.createFrame((byte[]) {0,3, 1,3, 2,3}, 6, 10)
    };
ifdef DEBUG
    showmem("before free");
endif
    cube.lightFrames(f, 8);
    
    // light each light one at a time
    for(byte level=0; level<cube.getLevels(); level++)
    {
        for(byte col=0; col<cube.getCols(); col++)
        {
            cube.lightPulse(level, col, 100);
        }
    }
    
    // light one level at a time, increasing speed each time
    for(byte d=25; d>2; d-=2)
    {
        for(byte l=1; l <= cube.getLevels(); l++)
        {
            cube.lightLevel(l, d);
        }
    }
    

----------


    // light each row on each level
    for(byte level=1; level<=cube.getLevels(); level++)
    {
        for(byte row=1; row<=cube.getLevels()*2; row++)
        {
            cube.lightRow(row, level);
        }
    }
    
    // light each plane
    for(byte i=3; i; i--)
    {
        for(byte row=1; row<=cube.getLevels()*2; row++)
        {
            cube.lightPlane(row, 10*i);
        }
    }
    
    // single random light at a time
    cube.randomLight(random(25,100),100);
    
    // random column drop
    for(byte x=0; x<=15; x++)
    {


----------

        cube.lightDrop(random(0,cube.getCols()), random(50,150));
    }
    
    // circle around cube at a random level
    for(byte x=0; x<=5; x++)
    {
        cube.lightPerimeter(random(0,cube.getLevels()), random(1,5), random(25,100));
    }
    
    // light each face
    byte planes[] = {cube.getLevels()+1,cube.getLevels(),cube.getLevels()*2,1};
    for(byte i=5; i; i--)
    {
        for(byte p=0; p<sizeof(planes); p++)
        {
            cube.lightPlane(planes[p], 5*i);
        }
    }
    
    // random columns
    cube.randomColumn(25);
    
    // turn off a single column randomly


----------

    cube.enableBuffer();
    for(byte c=0; c<30; c++)
    {
        cube.fillBuffer();
        cube.invertBuffer();
        cube.randomColumn();
        cube.drawBuffer(7);
    }
    cube.enableBuffer(false);
    
    // cols in and out
    for(byte c=1, d=0; c<=10; c++)
    {
        if(c%2 == 0)
        {
            for(d=0; d<20; d++)
            {
                cube.lightColumn(2,1);
                cube.lightColumn(4,1);
                cube.lightColumn(6,1);
                cube.lightColumn(8,1);
            }
        }
        else if(c%4 == 1)
        {


----------


            for(d=0; d<30; d++)
            {
                cube.lightColumn(1,1);
                cube.lightColumn(3,1);
                cube.lightColumn(7,1);
                cube.lightColumn(9,1);
            }
        }
        else
        {
            for(d=0; d<70; d++)
            {
                cube.lightColumn(5,1);
            }
        }
    }
    
    // diamond and box
    byte diamond[] = {0,4,  1,1, 1,3, 1,4, 1,5, 1,7,   2,4};
    byte box[] = {
        2,0, 2,1, 2,2, 2,3, 2,5, 2,6, 2,7, 2,8,
        1,0, 1,2, 1,6, 1,8,
        0,0, 0,1, 0,2, 0,3, 0,5, 0,6, 0,7, 0,8
    };
    cube.lightSequence(box, sizeof(box), 200);


----------

    cube.lightSequence(diamond, sizeof(diamond), 400);
    
    // helicopter effect
    byte topSeq[8] = {0,3,6,7,8,5,2,1};
    byte botSeq[8] = {8,5,2,1,0,3,6,7};
    for(byte loops = 0, delay = 50; loops<=8; loops++)
    {
        for(byte s=0; s<8; s++)
        {
            byte seq[] = {2,topSeq[s], 1,4, 0,botSeq[s]};
            cube.lightSequence(seq, sizeof(seq), delay);
        } 
        if(loops < 5) delay-=10;  else delay += 10;
    }
    
    // turn off one light at a time
    cube.lightsOut();
}


----------



-	Luego de introducir el código debemos verificar y cargar al arduino nuestro código como mostraremos en las siguientes fotos:



<p style="text-align: center;">![Verificandoelcódigoparaelarduino](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\Verificandoelcódigoparaelarduino.jpg)
<p style="text-align: center;">Figura 10. Verificando el código para el arduino</p>

<p style="text-align: center;">![Subiendoainformaciónalarduino](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\Subiendoainformaciónalarduino.jpg)
<p style="text-align: center;">Figura 11. Subiendo la información al arduino </p>


----------

**4.1.2.	CREACIÓN DEL CUBO LED**

-	Ya al completar todos los pasos mencionados anteriormente nuestro led estaría listo para funcionar y procederemos a ensamblar y conectar lo necesario para construir nuestro “led cube”
-	En primer lugar procedemos a conectar los cables a la protoboard según como hemos indicado en el código

<p style="text-align: center;">![Conexióncablesdelarduinoaprotoboard](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\Conexióncablesdelarduinoaprotoboard.jpg)
<p style="text-align: center;">Figura 12. Conexión cables del arduino a protoboard </p>


-	Debemos soldar los leds de manera que obtengan la forma de un cubo.


<p style="text-align: center;">![Procesodearmadodelcubo](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\Procesodearmadodelcubo.jpg)
<p style="text-align: center;">Figura 13. Proceso de armado del cubo </p>


----------


-	Procedemos a conectar las resistencias y los leds en la protoboard como se indica a continuación.

<p style="text-align: center;">![Conexiónderesistenciasylosleds](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\Conexiónderesistenciasylosleds.jpg)
<p style="text-align: center;">Figura 14. Conexión de resistencias y los leds</p>

<p style="text-align: center;">![Procesodecolocacióndelcubo](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\Procesodecolocacióndelcubo.jpg)
<p style="text-align: center;">Figura 15. Proceso de colocación del cubo</p>


----------


<p style="text-align: center;">![Funcionamientopasoapasodelcuboled](C:\Users\credito\Desktop\VIISEMESTRE\ELECTRÓNICA\Nuevacarpeta\Funcionamientopasoapasodelcuboled.jpg)
<p style="text-align: center;">Figura 16. Funcionamiento paso a paso del cubo led</p>


----------


###**<p style="text-align: center;">5. 	CONCLUSIÓN</p>**

<p style="text-align: justify;">El arduino fue un sistema que llego para revolucionar todos los sistemas de la época ya que era de un muy bajo costo y constaba de un mayor sistema de soporte hacia el usuario en comparación a los micro controladores de la época, cabe recordar que en la actualidad la mayoría de los objetos tecnológicos contienen micro controladores para llevar a cabo sus diversas funciones que nos ayudan en todo ámbito de nuestras vidas, por todas estas razones mencionadas anteriormente el arduino se hizo tan popular en tan poco tiempo.
Nosotros como grupo hemos buscado crear un “led cube”, el cual si bien su creación no tiene el objetivo de tener una funcionalidad específica como muchos de los aparatos de hoy en día, cumple con el rol de entretener y de esta forma entender y comprender de una manera didáctica más sobre el arduino y sus distintas funciones.
El trabajo llevado a cabo por nosotros ayuda de muy buena forma a entender lo básico del arduino ya sean códigos, sistemas y formas,  de esta manera a futuro poder entregar proyectos con una funcionalidad y un objetivo claro, es decir que cumplan un rol en nuestra sociedad.
Volviendo al led cube en sí cuando trabajamos en el software específicamente en el código tuvimos ciertas dificultades pero paso a paso y revisando cada línea logramos darnos cuentas de las falencias de este para lograr llegar al resultado deseado para darle vida a nuestro led cube.
Para finalizar en base a todo lo anteriormente mencionado el arduino es un micro controlador de bajo costo que ofrece al usuario un mayor soporte a la hora de hacer uso de este sistema, cabe resaltar que el arduino cuenta con un sistema libre o liberado el cual facilita su uso, y gracias al arduino y muchos otros micro controladores podemos utilizar diversos objetos tecnológicos que facilitan muchas de nuestras tareas básicas.</p>


----------



###**<p style="text-align: center;">6. RESULTADO</p>**

<p style="text-align: justify;">Ejecución del Proyecto. En esta etapa, luego de tener todos los recursos disponibles, el proyecto es ejecutado.
Es fundamental cumplir a cabalidad con lo expresado en el cronograma de actividades.</p>

<p style="text-align: justify;">De esa forma, se garantiza que los recursos disponibles permitirán completar el proyecto. Evaluación del Proyecto.- Una vez finalizado el proyecto o, incluso, en algunos períodos de este, se puede hacer una evaluación del proyecto.</p>

<p style="text-align: justify;">Dicha evaluación responde a los intereses e inquietudes de quienes forman parte del proyecto o de quienes se ven afectados por éste. La finalidad de la evaluación del proyecto es replantear aspectos positivos y negativos del mismo, buscar oportunidades de mejora, transmitir información, etc. Para ello, es fundamental que quienes formaron parte de la formulación del proyecto y quienes ejecuten el proyecto, discutan y reflexionen sobre el mismo</p>


----------


###**<p style="text-align: center;">7. 	BIBLIOGRAFÍA</p>**

-	http://arduinodhtics.weebly.com/historia.html 	
-	https://botscience.wordpress.com/2012/06/05/historia-de-arduino-y-su-nacimiento/ 	
-	https://www.youtube.com/watch?v=HUes0IfPd2s 
-	https://www.youtube.com/watch?v=SljyILTbkUE&feature=youtu.be
-	Boylestad, R. L. (2014). Electrónica (Teoría de circuitos y dispositivos electrónicos). Mexico: Prentice Hall.
-	Díaz, R. (23 de Enero de 2014). Electrónica fácil. Obtenido de https://www.electronicafacil.net/tutoriales/El-rele.php
-	Dorf, R. C. (2013). Circuitos Eléctricos . México: Alfaomega.





















