ARQUITECTURA DE
COMPUTADORAS
MATERIA

UNIDAD
  3

ELECTRÓNICA DIGITAL

1

Se  prohíbe  la  reproducción  total  o  parcial  de  esta  obra,  por  cualquier  medio,
electrónico o mecánico sin la autorización de la Dirección de Educación a Distancia
(UDB Virtual).

Dirección de Educación a Distancia

Apartado Postal, 1874, San Salvador, El Salvador

Tel: 2251-8200 ext: 1743

2

Sumario

Introducción ..................................................................................................................................... 4

Clase 9| Electrónica analógica y digital ........................................................................................ 5

Clase 10| Convertidores analógicos a digitales y digital a analógicos .................................. 14

Clase 11| Operaciones lógicas y compuertas lógicas .............................................................. 23

Clase 12| Almacenamiento de la información: registros y memorias .................................... 31

Referencias citadas en UNIDAD 3 ............................................................................................ 37

Glosario de los términos citados en la UNIDAD 3 ............................................................... 38

3

Introducción de
la Asignatura

En  la  unidad  2  el  estudiante  adquirió  las  competencias  para  trabajar  con  los  sistemas
numéricos, que son un gran aporte a la tecnología a través de los procesadores que poseen
los  aparatos  que  pueden  ser  programables,  es  decir  los  chips,  es  probable  que  sin  los
sistemas numéricos no podríamos realizar estas acciones; debido a que los procesadores
realizan  sumas  en sistemas binarios  de forma  incansable y  certera.  Por  ello se debe  de
comprender como trabajan los sistemas numéricos básicos ocupados en programación y
tecnología: decimal, binario y hexadecimal.

En esta unidad 3 el estudiante podrá distinguir los conceptos básicos de la electrónica digital
y  analógica,
los  circuitos
analógico/digitales,  conversión  de  señales  de  analógico-digital  y  de  digital  a  analógico,
operaciones de las compuertas lógicas, finalizando con el funcionamiento de los circuitos
combinacionales y secuenciales.

las  magnitudes  electicas  presentes  en

tales  como:

La  electrónica  digital  es  la  rama  de  la  electrónica  más  moderna  y  que  evoluciona  más
rápidamente. Se encarga de sistemas electrónicos en los que la información está codificada
en estados discretos, a diferencia de los sistemas analógicos donde la información toma un
rango continuo de valores.

Al  finalizar  esta  unidad  el  estudiante  podrá  identificar  las  etapas  de  los  sistemas  de
conversión  de  señales  analógico/digital  (A/D)  y  digital/analógico  (D/A).  Realizará  los
cálculos para cuantizar señales en los procesos de conversiones A/D. Las competencias la
lograremos adquirir a través de ejemplos y ejercicios que desarrollaremos a lo largo de la
unidad.

4

Clase 9| Electrónica analógica y digital
9.  Electrónica analógica y digital

9.1  Electrónica analógica

La  electrónica  es  el  campo  de  la  ingeniería  y  de  la  física  aplicada  relativo  al  diseño  y

aplicación  de  dispositivos,  por  lo  general  circuitos  electrónicos,  cuyo  funcionamiento

depende del flujo de electrones para la generación, transmisión, recepción, almacenamiento

de información, entre otros. Esta información puede consistir en voz o música como en un

receptor de radio, en una imagen en una pantalla de televisión, o en números u otros datos

en un ordenador o computadora.

Los  circuitos  electrónicos  ofrecen  diferentes  funciones  para  procesar  esta  información,

incluyendo  la  amplificación  de  señales  débiles  hasta  un  nivel  que  se  pueda  utilizar;  el

generar ondas de radio; la extracción de información, como por ejemplo la recuperación de

la señal de sonido de una onda de radio; el control, como en el caso de introducir una señal

de  sonido  a  ondas  de  radio,  y  operaciones  lógicas,  como  los  procesos  electrónicos  que

tienen lugar en las computadoras.

9.1.1 Magnitudes eléctricas

La corriente eléctrica [I] es un flujo ordenado de electrones que atraviesa un material y su

unidad de medida es el Amperio (A) (García et al, 2014).

5

Algunos materiales como los "conductores" tienen electrones libres que pasan con facilidad

de un átomo a otro. Estos electrones libres, si se mueven en una misma dirección conforme

saltan de un átomo a átomo, se vuelven en su conjunto, una corriente eléctrica. Cuando se

coloca  un  material  eléctricamente  neutro  entre  dos  cuerpos  cargados  con  diferente

potencial (tienen diferente carga), los electrones se moverán desde el cuerpo con potencial

más negativo hacia el cuerpo con potencia más positivo. Ver la figura 1.

Figura 1

Flujo de electrones

Fuente: Nota. Elaboración propia.

El  voltaje,  tensión  o  diferencia  de  potencial  [V]  es  la  presión  que  ejerce  una  fuente  de

suministro de energía eléctrica o fuerza electromotriz (FEM) sobre las cargas eléctricas o

electrones en un circuito eléctrico cerrado (García et al, 2014).

El voltaje es capaz de producir el flujo de una corriente eléctrica en un circuito cerrado. La

unidad de medida es el voltio (volts). A mayor diferencia de potencial o presión que ejerza

6

una fuente de FEM sobre las cargas eléctricas o electrones contenidos en un conductor,

mayor será el voltaje o tensión existente en el circuito al que corresponda ese conductor.

Resistencia  eléctrica  [R]  es  toda  oposición  que  encuentra  la  corriente  a  su  paso  por  un

circuito eléctrico cerrado, atenuando o frenando el libre flujo de circulación de las cargas

eléctricas o electrones (García et al, 2014).

Cualquier dispositivo o consumidor conectado a un circuito eléctrico representa en sí una

carga,  resistencia  u  obstáculo  para  la  circulación  de  la  corriente  eléctrica.  La  unidad  de

medida de la resistencia es el Ohm (Ω).

Normalmente, los electrones tratan de circular por el circuito eléctrico de una forma más o

menos  organizada,  de  acuerdo  con  la  resistencia  que  encuentren  a  su  paso.  Mientras

menor  sea  esa  resistencia,  mayor  será  el  orden  existente  en  el  micro  mundo  de  los

electrones; pero cuando la resistencia es elevada, comienzan a chocar unos con otros y a

liberar  energía  en  forma  de  calor.  Esa  situación  hace  que  siempre  se  eleve  algo  la

temperatura del conductor y que, además, adquiera valores más altos en el punto donde

los electrones encuentren una mayor resistencia a su paso.

7

9.1.2 Señales analógicas

Una señal analógica es aquella cantidad física que varía con el tiempo, espacio o cualquier
otra variable independiente de forma continua (López et al, 2006).

En  la  vida  cotidiana  nos  encontramos  con  muchas  señales  de  ámbito  físico  como  las

señales  electrocardiográficas  (ECG),  voz,  electroencefalogramas  (EEG),

imágenes

(señales bidimensionales), sísmicas, bursátiles, radar, satélite, etc. Las señales eléctricas

que  estarán  presentes  en  cualquier  circuito  electrónico  son  las  diferentes  tensiones  o

corrientes, variables con el tiempo, presentes en un sistema electrónico. Las tensiones y

corrientes de alimentación no se consideran señales del sistema, puesto que, aunque son

imprescindibles, desempeñan un papel secundario al tener en cuenta los objetivos para los

que el sistema ha sido diseñado.

Las  señales  analógicas se pueden medir  cuantitativamente y  aparecen en  la  naturaleza.

La temperatura de un sitio varía dentro de un rango continuo de valores. A lo largo de un

día, la temperatura no varía entre 20ºC y 25ºC de forma instantánea, sino tendrá todos los

infinitos valores en ese intervalo. Si dibujamos la gráfica de la temperatura de un día de

verano, tendríamos una curva continua como la mostrada en Figura 2. Otros ejemplos de

magnitudes analógicas son el tiempo, la humedad, la cantidad de luz y las ondas acústicas.

8

Figura 2

Gráfica de magnitud analógica (temperatura en función del tiempo)

Fuente: Nota. Por Floyd (2006).

9.1.3 Transductores

Los transductores son sistemas o dispositivos que realizan la conversión de una magnitud
física cualquiera a una magnitud eléctrica, generalmente a corriente o voltaje (Granada et
al., 2015).

En  este  componente  se  puede  diferenciar  entre  el  sensor,  que  es  el  elemento  sensible

primario que responde a las variaciones de la magnitud que se mide, y el transductor que

es el que lleva a cabo la conversión energética de la magnitud de entrada para dar como

salida una señal eléctrica. Así, por ejemplo, un transductor de presión se puede construir

con  una  membrana  a  la  que  se  une  una  galga  extensiométrica  (resistencia  cuyo  valor

depende de su deformación). En este caso el diafragma es el sensor, mientras que la galga

es el transductor.

9

En  la  vida  cotidiana  utilizamos  los  transductores,  especialmente,  cuando  tenemos  una

conversación a distancia por medio de un celular o una computadora, el micrófono consta

de un transductor que transforma las ondas de sonido o acústicas en señales eléctricas,

siendo  este,  un  transductor  de  entrada  hacia  el  dispositivo.  En  los  audífonos  sucede  lo

contrario, se utiliza un transductor de salida, convirtiendo una señal eléctrica a una señal

acústica, te invito a ver la figura 3, donde se aprecia lo explicado anteriormente.

Figura 3

Ejemplo de transductores: micrófono y auriculares.

Fuente: Nota. Elaboración propia.

10

Te invito a ver el siguiente video, para comprender que son los transductores
de sonido:

Paco Melero (6 de septiembre de 2020). Transductores, Distorsión y Señales
de Audio. [Video].

9.1.4 Sistemas analógicos

Los  sistemas  analógicos,  son  un  conjunto  de  dispositivos  que  utilizan  componentes  que

trabajan  con  señales  que  se  representan  mediante  variables  continuas,  análogas  a  las

magnitudes  que  dan  lugar  a  la  generación  de  esta  señal  en  el  sistema.  En  un  sistema

analógico, los dispositivos manipulan cantidades físicas representadas en forma analógica

mediante señales de voltaje o corriente.

9.2 Electrónica digital

9.2.1 Señales digitales

En la actualidad la información es manejada por un sistema binario, es decir, las señales

se  componen  de  valores  discretos,  estas  señales  se  componen  por  secuencias  de  dos

dígitos: el 0 y el 1. Se suele denominar al ”1” como valor cierto, True o Low y al ”0” como

valor falso, False o High. Estas señales se codifican mediante una magnitud eléctrica como

el voltaje. Cada tecnología define dos valores de voltaje: valor bajo (VL) y el valor alto (VH).

En  la  figura  4  se  muestran  los  niveles  de  voltaje  para  el  “1”  y  el  “0”  lógico  para  los

dispositivos Arduino y Raspberry PI.

11

Figura 4

Lógica de niveles de voltaje que representan el 1 (HIGH) y el 0 (LOW)

Fuente: Nota. Elaboración propia.

9.2.2 Sistemas digitales

Los  sistemas  digitales,  son  aquellos  sistemas  electrónicos  que  realizan  operaciones

numéricas  y  lógicas  en  sistema  binario.  Un  ejemplo  de  estos  son  los  ordenadores  o

computadoras, cuya misión fundamental es realizar operaciones aritméticas.

Los  sistemas  digitales  tienen  un  papel  muy  importante  en  la  vida  cotidiana que  el  actual

periodo  tecnológico  se  conoce  como  “era  digital”.  Los  sistemas  digitales  se  utilizan  en

comunicaciones,  transacciones  de  negocios,  control  de  tráfico,  navegación  espacial,

tratamiento  médico,  monitoreo  meteorológico,  Internet  y  muchas  empresas  comerciales,

industriales  y  científicas.  Tenemos  teléfonos  digitales,  televisión  digital,  discos  versátiles

digitales, cámaras digitales y, desde luego, computadoras digitales incluyendo los sistemas

embebidos.  La  propiedad  más  notable  de  la  computadora  digital  es  su  generalidad.  Es

capaz de seguir una secuencia de instrucciones, llamada programa, que opera con ciertos

datos. El usuario puede especificar y modificar el programa o los datos según necesidades

determinadas. Gracias a esta flexibilidad, las computadoras digitales de uso general son

capaces  de  realizar  diversas  tareas  de  procesamiento  de  información  que  cubren  una

amplia gama de aplicaciones.

12

9.2.2 Ventajas de los sistemas digitales

Actualmente,  la  electrónica  digital  está  experimentando  un  gran  empuje  y  se  está

imponiendo en los tradicionalmente se imponía la electrónica analógica. Esto se debe a sus

numerosas ventajas. En la tabla 1 se muestran algunas de las ventajas:

Tabla 1

Ventaja de los sistemas digitales

Ventajas

Descripción

Sencillez

El  diseño  de  circuitos  digitales  es  relativamente  simple

reduciendo  el  tiempo  de  diseño  y  abaratando  el  coste  del

producto. Existen numerosas aplicaciones y herramientas tanto

de alto nivel como de bajo nivel que nos permiten el diseño e

implementación de los circuitos digitales de forma sencilla.

Menor sensibilidad a

Al  transmitir  la  señal  por  un  determinado  medio,  esta  puede

ruidos

atenuarse y degradarse por inducción de ruido. La señal digital

puede  amplificarse,  regenerando  los  niveles  de  la  señal  y

además tiene mecanismos para eliminar el ruido en la señal.

Tolerancia a fallos

Existen numerosos sistemas de codificación digital capaces de

detectar información corrupta y en algunos casos regenerarla.

Ejemplo  de  estos  mecanismos  son:  bits  de  paridad,  códigos

Hamming, códigos de redundancia cíclica (CRC), etc.

Facilidad de

Existen  medios  que  son  capaces  de  almacenar  grandes

almacenamiento

cantidades de información  digital, tales  como:  memorias  flash

(USB, SD), discos duros (HDD), discos de estado sólido (SSD),

etc. Además, se cuentan con algoritmos de compresión digital

eficientes.

Fuente: Nota. Elaboración propia, a partir de García (2014)

13

Te  invito  a  ver  el  siguiente  video,  para  comprender  que  son  las  señales
analógicas y digitales:

Educación  Activa  (9  de  agosto  de  2020).  Señales  analógicas  y  señales
digitales. [Video].

Clase 10| Convertidores analógicos a
digitales y digital a analógicos

10.Convertidores  analógicos  a  digital  y

digital a analógicos

Tal como vimos en la clase anterior, las magnitudes digitales toman valor en el rango de los

números reales y las magnitudes digitales toman valor en el rango de los números enteros.

De este modo, tiene sentido hablar de un voltaje de 2.25V y no tiene sentido decir en una

determinada librería hay 20.4 libros. Una determinada magnitud puede variar en el tiempo,

estas  variaciones  en  el  tiempo  reciben  el  nombre  de  señal  y  pueden  ser  analógicas  o

digitales.  Los  sistemas  analógicos  procesan  información  analógica,  mientras  que  los

sistemas digitales procesan información digital.

14

La mayoría de los fenómenos naturales se miden mediante magnitudes analógicas, por otro

lado, los sistemas electrónicos más utilizados hoy en día son los sistemas digitales. Si bien

es  cierto  que  los  sistemas  digitales  como  una  computadora,  solo  pueden  manipular  y

procesar  información  digital,  la  información  análoga  puede  transformase  en  información

digital  mediante  convertidores  analógicos/digitales  (A/D)  y  la  información  digital  puede

transformarse en información analógica mediante convertidores digitales/analógicos (D/A).

En la figura 5, se muestra un sistema de conversión A/D, teniendo una señal analógica de

entrada  y  su  salida  una  señal  digital.  La  señal  de  salida  en  formato  digital  puede  ser

procesada, mostrada o almacenada en una computadora, por ejemplo.

Figura 5

Sistema de conversión análogo a digital (A/D)

Fuente: Nota. Elaboración propia.

A continuación, en la figura 6 se muestra el sistema de conversión de digital a analógico
(D/A), teniendo como entrada información digital y como salida una señal analógica.

Figura 6

Sistema de conversión digital a análogo (D/A)

Fuente: Nota. Elaboración propia.

15

10.1 Convertidores de analógico a digital

“El  muestreo  es  el  proceso  de  tomar  un  número  suficiente  de  valores  discretos  en
determinados puntos de una forma de onda como para poder definir adecuadamente esa
forma de onda” (Floyd, 2006, p.837).

La conversión analógico-digital (A/D) es el proceso de convertir la salida de un circuito de

muestreo y retención en una serie de códigos binarios que representan la amplitud de la

entrada  analógica  en  cada  uno  de  los  instantes  de  muestreo.  El  proceso  de  muestreo y

retención hace que se mantenga constante la amplitud de la señal analógica de entrada

entre sucesivos impulsos de muestreo; así, la conversión analógico-digital puede realizarse

utilizando un valor constante, en lugar de permitir que la señal analógica varíe durante el

intervalo de conversión, que es el intervalo comprendido entre los impulsos de muestreo.

La figura 7, muestra la función del circuito de muestreo y retención y en la figura 8, se ilustra

la función básica de un convertidor analógico-digital (ADC, Analog-to-Digital Converter). Los

intervalos de muestreo se indican mediante líneas de puntos.

Figura 7

Operación de muestreo y retención en un sistema A/D

Fuente: Nota. Por Floyd (2006).

16

Figura 8

Función básica de un convertidor analógico-digital (ADC) en un sistema A/D

Fuente: Nota. Por Floyd (2006).

La cuantificación es el proceso de convertir un valor analógico en un determinado
código  se  denomina  cuantificación.  Durante  el  proceso  de  cuantificación,  el  ADC
convierte cada valor muestreado de la señal analógica en un código binario. Cuantos
más  bits  se  empleen  para  representar  un  valor  muestreado,  más  precisa  será  la
representación. (Floyd, 2006, p.841)

En la figura 9 se muestra el proceso de cuantificación de cuatro niveles (0 a 3) con respecto
a la señal  analógica  a  digitalizar.  Cada nivel  de cuantización  se representa  mediante un
código de dos bits en el eje vertical, mientras que cada intervalo de muestreo está numerado
a  lo  largo  del  eje  horizontal,  en  el  proceso  se  muestran  13  intervalos.  El  proceso  de
cuantificación se resume en la tabla 2.

17

Figura 9

Operación de cuantización con 2 bits en un sistema A/D

Fuente: Nota. Por Floyd (2006).

Tabla 2

Cuantización de 2 bits para la forma de onda

Intervalo de

Código con 2

muestreo

bits

1

2

3

4

5

6

7

8

00

01

10

01

01

01

01

10

18

9

10

11

12

13

11

11

11

11

11

Fuente: Nota. Elaboración propia, a partir de Floyd (2006)

Como podrá observar, la codificación con dos bits es insuficiente para la señal analógica

de entrada, al tener códigos idénticos consecutivos en los intervalos del 4 al 7 (01) y en los

intervalos  del  9  al  13  (11).  Para  mejorar  la  precisión  de  la  conversión,  es  necesario

incrementar la cantidad de bits en la conversión A/D. En la figura 10, se muestra el proceso

de cuantificación con 4 bits, haciendo 16 niveles de cuantificación.

Figura 10

Operación de cuantización con 4 bits en un sistema A/D

Fuente: Nota. Por Floyd (2006).

19

En la tabla 3, se muestra la codificación con 4 bits en cada intervalo,

Tabla 3

Cuantización de 4 bits para la forma de onda

Intervalo de

Código con 4

muestreo

bits

1

2

3

4

5

6

7

8

9

10

11

12

13

0000

0101

1000

0111

0101

0111

0110

1010

1110

1111

1111

1111

1110

Fuente: Nota. Elaboración propia, a partir de Floyd (2006)

20

Te invito a ver el siguiente video, para comprender el proceso de conversión
de analógico a digital:

Electrónica  FP  (18  de  noviembre  de  2020).  Conversión  analógico  -  digital.
[Video].

10.2 Convertidores de digital a analógico

La  conversión  en  un  sistema  digital-analógica  (D/A),  es  una  parte  importante  de  los

sistemas  de  procesamiento  de  señales  digitales,  como  por  ejemplo  una  computadora  al

reproducir  el  audio  en  unos  auriculares.  Una  vez  procesados  los  datos  digitales,  los

convierte  de  nuevo  a  forma  analógica.  Para  la  conversión  digital-analógica  se  utilizan

convertidores digital-analógico (DAC, Digital-to-Analog Converter).

Si utilizamos el código binario resultante de la tabla 3, donde la precisión utilizada es de 2

bits y luego realizamos el proceso de conversión digital-analógica, el resultado es una señal

muy imprecisa a la señal  analógica  deseada.  El  resultado se  observa en  la  figura 11,  la

línea de color rojo es el resultado de la conversión y se compara con la señal analógica

deseada.

21

Figura 11

Forma de onda de la conversión con el sistema D/A, reconstruida a partir de la

tabla 2

Fuente: Nota. Elaboración propia, a partir de Floyd (2006)

En la figura 12 se muestra el resultado de la conversión con una precisión con 4 bits. La

señal de salida (línea roja) se reconstruye a partir de la tabla 3.

Figura 12

Forma de onda de la conversión con el sistema D/A, reconstruida a partir de la

tabla 4

Fuente: Nota. Elaboración propia, a partir de Floyd (2006)

22

Como se puede observar los sistemas A/D y D/A, basan su precisión en la cantidad de bits

que  utilizan  en  la  etapa  de  cuantificación,  La  mayoría  de  los  ADC  y  DAC  en  circuitos

integrados utilizan entre 8 y 14 bits en los procesos de conversión.

Te  invito  a  ver  el  siguiente  video,  para  comprender  el  proceso  de  la
digitalización de una señal de audio:

Defecto digital (16 de agosto de 2017). Audio Digital Explicado: Cuantización
PCM, Bits y Hertz. [Video].

Clase 11| Operaciones y compuertas
lógicas

11. Operaciones y compuertas lógicas

El álgebra booleana, al igual que todos los sistemas matemáticos deductivos, se define con

un conjunto de elementos, un conjunto de operadores y varios axiomas o postulados no

demostrados (Morris, 2003).

23

Las  operaciones  lógicas  se  expresan  en  términos  AND,  OR  y  NOT,  es  más  fácil

implementar  una  función  booleana  con  estos  tipos  de  compuertas.  La  posibilidad  de

construir compuertas para las otras operaciones lógicas tiene interés práctico. Los factores

para considerar al investigar la construcción de otros tipos de compuertas lógicas son:

1)  la factibilidad y economía de producir la compuerta con componentes físicos

2)  la posibilidad de extender la compuerta a más de dos entradas

3)  las propiedades básicas del operador binario, como conmutatividad y asociatividad

4)  la capacidad de la compuerta para implementar funciones booleanas solas o junto

con otras compuertas.

Los  símbolos  gráficos  de  las  ocho  compuertas aparecen  en  la  tabla  5.  Cada  compuerta

tiene una o dos variables binarias de entrada designadas con “x” y “y”, y una variable binaria

de salida designada con F. Ya definimos los circuitos de AND, OR y el inversor.

Tabla 5

Compuertas lógicas digitales

Nombre

símbolo

función

AND

OR

𝐹 = 𝑋𝑌

𝐹 = 𝑋 + 𝑌

INVERSOR

𝐹 = 𝑋′

24

NAND

NOR

OR exclusivo

(XOR)

NOR exclusivo o

equivalencia

𝐹 = (𝑋𝑌)′

𝐹 = (𝑋 + 𝑌)′

𝐹 = 𝑋𝑌′ + 𝑋′𝑌 = 𝑋⨁𝑌

𝐹 = 𝑋𝑌 + 𝑋′𝑌′ = (𝑋⨁𝑌)′

Fuente: Nota. Elaboración propia, a partir de Morris (2003)

En la tabla 5, el circuito inversor invierte el sentido lógico de una variable binaria: produce

la función NOT, o complemento. El pequeño círculo en la salida del símbolo gráfico de un

inversor (llamado burbuja) indica el complemento lógico. El símbolo de triángulo, por sí solo,

denota un circuito búfer.

Un búfer produce la función de transferencia, pero no una operación lógica, ya que el valor

binario de la salida es igual al valor binario de la entrada. Este circuito sirve para amplificar

la potencia de la señal y equivale a dos inversores conectados en cascada (Morris, 2003).

La función NAND es el complemento de la función AND, como lo indica el símbolo gráfico

que consiste  en  un  símbolo gráfico  AND  seguido  de  una burbuja.  La función  NOR  es el

complemento de la función OR y su símbolo gráfico es el de OR seguido de una burbuja.

25

Las  compuertas  NAND  y  NOR  se  usan  mucho  como  compuertas  lógicas  estándar  y,  de

hecho, son mucho más populares que las compuertas AND y OR. Ello se debe a que es

fácil  construir  compuertas  NAND  y  NOR  con  circuitos  de  transistores,  y  a  que  es  fácil

implementar con ellas circuitos digitales.

La compuerta de OR exclusivo tiene un símbolo gráfico parecido al de la compuerta OR,

sólo  que  lleva  una  línea  curva  adicional  del  lado  de  la  entrada.  La  compuerta  de

equivalencia o NOR exclusivo, es el complemento del OR exclusivo, como indica la burbuja

en el lado de salida del símbolo gráfico.

Te  invito  a  ver  el  siguiente  video,  para  comprender  el  algebra  booleana
aplicada a una compuerta AND:

Pasos  por  la  ingeniería  (11  de  agosto  de  2017).  ÁLGEBRA  BOOLEANA
(FUNCIÓN de las compuertas lógicas AND). [Video].

11.1  Definiciones  de  circuitos  combinacionales  y

secuenciales

Los circuitos lógicos para sistemas digitales pueden ser combinacionales o secuenciales.

Un  circuito  combinacional  consiste  en  compuertas  lógicas  cuyas  salidas  en  cualquier

momento están determinadas por la combinación actual de entradas (Morris, 2003).

26

Esto último, a su vez, es función de entradas anteriores. Por ello, las salidas de un circuito

secuencial  dependen  no  sólo  de  los  valores  actuales  de  las  entradas,  sino  también  de

entradas anteriores, y el comportamiento del circuito se debe especificar con una sucesión

temporal  de  entradas y estados internos.  En  la  figura 12  podrá  observar  el  diagrama  en

bloques del circuito combinacional.

Figura 12

Diagrama de bloque de circuito combinacional

Fuente: Nota. Por Morris (2003).

Un circuito combinacional consiste en variables de entrada, compuertas lógicas y variables

de salida. Las compuertas lógicas aceptan señales de las entradas y generan señales para

las salidas. Este proceso transforma información binaria, de los datos de entrada dados a

los datos de salida requeridos. Las n variables binarias de entrada provienen de una fuente

externa; las m variables de salida van a un destino externo. Cada variable de entrada y de

salida  existe  físicamente  como  una  señal  binaria  que  representa  1  lógico  y  0  lógico.  En

muchas  aplicaciones,  el  origen  y  el  destino  son  registros  de  almacenamiento.  Si  los

registros se incluyen con las puertas combinacionales, el circuito total se considera como

un  circuito  secuencial.  Con  n  variables  de  entrada,  hay  2n  posibles  combinaciones  de

entradas binarias. Para cada una de esas combinaciones, hay un posible valor de salida.

Por  tanto,  es  posible  especificar  un  circuito  combinacional  con  una  tabla  de  verdad  que

presenta los valores de salida para cada combinación de variables de entrada. También es

factible  describir  un  circuito  combinacional  con  m  funciones  booleanas,  una  para  cada

variable de  salida.  Cada función  de  salida  se  expresa en  términos  de  las n variables de

entrada.

27

Los  circuitos  secuenciales  usan  elementos  de  almacenamiento  además  de  compuertas

lógicas,  y  sus  salidas  son  función  de  las  entradas  y  del  estado  de  los  elementos  de

almacenamiento (Morris, 2003).

Los  circuitos  digitales  estudiados  hasta  ahora  han  sido  combinacionales:  sus  salidas

dependen  exclusivamente  de  las  entradas  actuales.  Aunque  es  probable  que  todos  los

sistemas  digitales  tengan  circuitos  combinacionales,  casi  todos  los  que  se  usan  en  la

práctica también incluyen elementos de almacenamiento, que requieren que el sistema se

describa en términos de lógica secuencial.

Figura 13

Diagrama de bloque de circuito secuencial

Fuente: Nota. Por Morris (2003).

En la figura 13 se presenta un diagrama de bloques de un circuito secuencial. Consiste en

un circuito combinacional al que se conectan elementos de almacenamiento para formar

una trayectoria de retroalimentación. Los elementos de almacenamiento son dispositivos

capaces de guardar información binaria. La información almacenada en estos elementos

en cualquier momento dado define el estado del circuito secuencial en ese momento. El

circuito  secuencial recibe información  binaria  de  entradas  externas.  Esas  entradas, junto

con el estado actual de los elementos de almacenamiento, determinan el valor binario de

28

las salidas. También determinan la condición para cambiar el estado de los elementos de

almacenamiento. El diagrama de bloques indica que las salidas de un circuito secuencial

son función no sólo de las entradas, sino también del estado actual de los elementos de

almacenamiento.  El  siguiente  estado  de  los  elementos  de  almacenamiento  también  es

función de entradas externas y del estado actual. A un circuito secuencial se especifica con

una sucesión temporal de entradas, salidas y estados internos.

El comportamiento de un circuito secuencial asincrónico depende de las señales de entrada

en  cualquier  instante  dado  y  del  orden  en  que  cambian  las  entradas.  Los  elementos  de

almacenamiento  que  suelen  usarse  en  los  circuitos  secuenciales  asincrónicos  son

dispositivos de retardo de tiempo. La capacidad de almacenamiento de un dispositivo de

retardo de tiempo se debe al tiempo que la señal tarda en propagarse por el dispositivo. En

la práctica, el retardo interno de propagación de las compuertas lógicas tiene la suficiente

duración como para producir el retardo requerido, de modo que podrían no ser necesarias

unidades  de  retardo  adicionales.  En  los  sistemas  asincrónicos  tipo  compuerta,  los

elementos  de  almacenamiento  consisten  en  compuertas  lógicas  cuyo  retardo  de

propagación  hace  posible  el  almacenamiento  requerido.  Así,  un  circuito  secuencial

asincrónico  podría  considerarse  como  un  circuito  combinacional  con  retroalimentación.

Gracias a la retroalimentación entre compuertas lógicas, el circuito secuencial asincrónico

podría volverse inestable ocasionalmente.

Te invito a ver el siguiente video, donde podrás observar la diferencia entre
los sistemas combinacionales y secuenciales.

unoseisdieciocho  (1  de  septiembre  de  2018).  Diferencia  entre  sistema
combinacional y sistema secuencial. [Video].

29

11.2 Condición “true/false” y las tablas de verdad

La  lógica  binaria  se  parece  a  la  aritmética  binaria,  y  las  operaciones  AND  y  OR  tienen

similitudes con la multiplicación y la suma, respectivamente. De hecho, los símbolos que se

usan para AND y OR son los mismos que los empleados para la multiplicación y la suma.

No obstante, la lógica binaria no debe confundirse con la aritmética binaria. Debemos tener

presente que una variable aritmética designa a un número que podría consistir en muchos

dígitos. Una variable lógica siempre es 0 o 1. Por ejemplo, en aritmética binaria tenemos

1+1=10  (léase:  “uno  más  uno  es  igual  a  dos”),  mientras  que  en  lógica  binaria  tenemos

1+1=1 (léase: “uno OR uno es igual a uno”).

En  la  Figura  14  se  presentan  las  tablas  de  verdad  para  AND,  OR  y  NOT.  Estas  tablas

muestran claramente la definición de las operaciones.

Figura 14

Tablas de verdad de operaciones lógicas

Fuente: Nota. Por Morris (2003).

Para  cada  combinación  de  los  valores  de  “x”  y  “y”,  la  definición  de  la  operación  lógica

especifica un valor de z. Dichas definiciones se pueden presentar en forma compacta con

tablas de verdad. Una tabla de verdad es una tabla de todas las posibles combinaciones de

las variables, muestra la relación entre los valores que las variables pueden adoptar y el

resultado de la operación. Las tablas de verdad de las operaciones AND y OR con variables

“x” y “y” se obtienen enumerando todos los posibles valores que pueden tener las variables

30

cuando  se  les  combina  en  pares.  Luego,  se  anota  en  una  fila  aparte  el  resultado  de  la

operación para cada combinación.

Clase 12| Almacenamiento de la
información: registros y memorias

12. Almacenamiento  de

la

información:

registros y memorias

12.1  Comunicación  de  la  información:  registros  de

desplazamiento, dispositivos de tres estados y códigos

binarios

12.1.1 Registros de desplazamiento

Los registros de desplazamiento son un tipo de circuitos lógicos secuenciales, que están

íntimamente  relacionados  con

los  contadores  digitales.  Los  registros  se  utilizan

principalmente para almacenar datos digitales y, normalmente, no poseen una secuencia

característica interna de estados como los contadores.

“Un flip-flop es un circuito lógico biestable (dos estados estables) que sólo puede almacenar
un bit cada vez, bien un 1 o un 0. La salida de un flip-flop indica qué bit está almacenado”
(Floyd, 2006, p.20).

31

En la figura 15, se muestran los símbolos lógicos de los Flip-Flop, utilizados en los
registros de desplazamiento.

Figura 15

Símbolos lógicos de los Flip-Flop

Fuente: Nota. Por Floyd (2006).

Los registros de desplazamiento están formados por un conjunto de flip-flops, y son muy

importantes  en  las  aplicaciones  que  precisan  almacenar  y  transferir  datos  dentro  de  un

sistema digital. La diferencia básica entre un registro y un contador es que un registro no

tiene  una  secuencia  de  estados  específica,  excepto  en  ciertas  aplicaciones  muy

especializadas. En general, un registro se utiliza únicamente para almacenar y desplazar

datos (1s y 0s), que introduce en él una fuente externa y, normalmente, no posee ninguna

secuencia característica interna de estados.

En la figura 16, se muestra un ejemplo de funcionamiento de un registro de desplazamiento

serie de 4 bits. Cada bloque representa una “celda” de almacenamiento o flip-flop.

32

Figura 16

Funcionamiento de un registro de desplazamiento serie de 4 bits

Fuente: Nota. Por Floyd (2006).

En  la  figura  17,  se  muestra  el  circuito  lógico  utilizando  Flip-Folp  tipo  D  para  el

desplazamiento de registro en serie de 4 bits.

Figura 17

Circuito lógico desplazamiento serie de 4 bits utilizando Flip-Flop tipo D

Fuente: Nota. Elaboración propia, a partir de Floyd (2006).

33

Te invito a ver el siguiente video, para comprender el funcionamiento de los
registros de desplazamiento:

Electrónica FP (24 de septiembre de 2020). Registros. [Video].

12.1.2 Dispositivos de tres estados

Los  dispositivos  de  tres  estados  son  aquellos  que  cuentan  con  salidas  que  tienen  tres

estados:  alto (1),  bajo (0) y  alta  impedancia  (Z). Cuando el  dispositivo  está habilitado,  la

salida está en el estado normal de 0 o 1 lógico, pero cuando está inhabilitado, la salida está

en un estado de alta impedancia, que equivale a un circuito abierto.

La figura 18, se muestra el símbolo gráfico de una compuerta búfer de tres estados. Cuando

la entrada de control C es alta, la compuerta está habilitada y se comporta como un búfer

normal  cuya salida  es  igual  al  valor  binario de  entrada.  Cuando la  entrada  de  control  es

baja, la salida es un circuito abierto, lo que produce una impedancia alta (el tercer estado)

independientemente  del  valor  de  la  entrada  A.  Algunas  compuertas  de  tres  estados

producen un estado de alta impedancia cuando la entrada de control es alta.

Figura 18

Símbolos de compuertas lógicas de tres estados

Fuente: Nota. Por Mano (2003).

34

Te  invito  a  ver  el siguiente  video,  para  comprender  el funcionamiento de la
lógica de dispositivos de tres estados:

nicosiored (24 de junio de 2016). Lógica Tri-State. [Video].

12.1.3 Códigos binarios

El código binario es utilizado en los sistemas electrónicos digitales para representar textos,

instrucciones,  comandos,  imágenes  o  video,  los  cuales  utilizan  las  computadoras  para

procesarlas. Las compuertas lógicas hacen uso del código binario para poder representar

valores a las entradas de estas y proporcionar resultados. Las compuertas lógicas son los

bloques  con

los  que  están  construidos

los

flip-flops,  sumadores,  multiplexores,

multiplicadores,  decodificadores,  registros  (memorias),  registros  de  desplazamiento

(módulos  de  comunicación  serial),  etc.  A  su  vez,  estos  bloques  más  complejos  forman

sistemas  como  procesadores,  memorias,  periféricos  y  unidades  de  control  que  son  el

principio de funcionamiento de los microprocesadores y los microcontroladores.

Los  códigos  binarios  se  agrupan  en  cantidades  de  bits.  A  continuación,  detallan  las

agrupaciones:

-  Nibble:  agrupación de 4 bits.

-  Byte: agrupación de 8 bits o dos nibbles.

-  Palabra: una unidad de información y está formada, generalmente, por uno o más

bytes.

-  Kbyte: Es la agrupación de 1000 bytes, que para ser exactos seria 1024 bytes.

-  Kbits, Mbits y Gbits: Estas cantidades son métricas utilizadas en las codificaciones

binarias sobre los protocolos de comunicación digital en formato serial. Por ejemplo,

al medir la velocidad de Internet, se suele utilizar estas métricas.

35

-

“Una palabra es una unidad completa de información, consistente en una unidad de datos
binarios. Cuando se aplica a las instrucciones de una computadora, una palabra se define
de forma más específica como dos bytes (16 bits)” (Floyd, 2006, p.602).

En la tabla 6, se muestran ejemplos de códigos binarios.

Tabla 6

Ejemplos de codificación binaria

Codificación binaria

Descripción

Permite  formar  números  binarios  de  forma  muy

8421

sencilla.  También  se  conoce  como  código  binario

natural.

BCD

Es  muy  utilizada  para  poder  representar  a  los

números en agrupaciones de 4 bits o un nibble.

Es  una  forma  de  representar  caracteres  de  un

sistema  de  escritura.  Para  las  regiones  donde

ASCII

utilizamos

un

abecedario

de

caracteres

Detector y correctores de

errores

occidentales,  se  llama  UTF-8.  Consiste  de  8  bits

que representan a los caracteres.

Consiste en incluir en los datos transmitidos, una

cantidad  de  bits  redundantes  de  forma  que

permita al receptor detectar que se ha producido

un  error  y  corregirlo.  Ejemplo:  el  código  ASCII

utiliza  7  bits  para  la  representación  de  128

caracteres y utiliza un octavo bit de paridad para

la detección de error.

Fuente: Nota. Elaboración propia.

36

Te invito a ver el siguiente video, para comprender que es el código binario,
el bit y el byte:

Eductronica  (4  de  noviembre  de  2020).  Que  es  un  bit  y  un  byte  |  Como
funciona en la computadora. [Video].

   Referencias citadas en UNIDAD 3

Mano, M. (2003). Diseño digital. PEARSON.

Floyd, T. (2006). Fundamentos de sistemas digitales. PEARSON.

García, M., Huerta, P., Sánchez, C. y Toharia, P. (2014). Electrónica. RA-MA.

Granada,  M.  y  Mediavilla,  E.  (2011).  Instrumentación  electrónica:  transductores  y

acondicionadores de señal. Universidad Cantabria.

37

Glosario de los términos citados en la
UNIDAD 3

Electrónica

Rama  de  la  física  aplicada  que  comprende  la  física,  la

ingeniería, la tecnología y las aplicaciones que tratan con

la emisión, el flujo y el control de los electrones.

Circuitos

Son placas compuestas por materiales semiconductores,

electrónicos

materiales  activos  y  pasivos,  cuyo  funcionamiento

depende  del  flujo  de  electrones  para  la  generación,

transmisión,

recepción,

almacenamiento

de

información, entre otros.

Sensor

Es  un  objeto  capaz  de  variar  una  propiedad  ante

magnitudes  físicas  o  químicas,  llamadas  variables  de

instrumentación, y transformarlas con un transductor en

variables eléctricas.

Era digital

Es el nombre que recibe el período de la historia de la

humanidad  que  va  ligado  a  las  Tecnologías  de  la

Información y la Comunicación (TIC).

Ruido

Toda señal no deseada que se mezcla con la señal útil

(comunicaciones)

que se quiere transmitir.

Circuito integrado  Un circuito integrado (CI), también conocido como chip

o microchip, es una estructura de pequeñas dimensiones

de  material  semiconductor,  normalmente  silicio,  de

algunos milímetros cuadrados de superficie (área).

Comunicación  en

La  comunicación  serie  o  comunicación  secuencial,  en

serie

telecomunicaciones e informática, es el proceso de envío

38

de datos de un bit a la vez, de forma secuencial, sobre

un canal de comunicación o un bus.

Impedancia

Es una medida de oposición que presenta un circuito a

una  corriente  cuando  se  aplica  una  tensión.  La

impedancia  extiende  el  concepto  de  resistencia  a  los

circuitos  de  corriente  alterna  (CA),  y  posee  tanto

magnitud como fase.

39

