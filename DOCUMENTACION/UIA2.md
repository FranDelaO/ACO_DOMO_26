ARQUITECTURA DE
COMPUTADORAS

UNIDAD
2

INFORMACION DIGITAL Y LOS
SISTEMAS NUMERICOS

1

Se prohíbe la reproducción total o parcial de esta obra, por cualquier medio,
electrónico  o  mecánico  sin  la  autorización  de  la  Dirección  de  Educación  a
Distancia (UDB  Virtual).

Dirección de Educación a Distancia

Apartado Postal, 1874, San Salvador, El Salvador

Tel: 2251-8200 ext: 1743

2

Sumario

Introducción ....................................................................................................................................... 4

Clase 5| Sistema numérico de cualquier base ............................................................................. 5

Clase 6| Transformación entre sistemas numéricos ................................................................. 14

Clase 7| Operaciones aritméticas en sistemas digitales .......................................................... 23

Clase 8| Código de numeración, alfanuméricos y de errores.................................................. 35

Referencias citadas en UNIDAD 2 .............................................................................................. 43

Glosario de los términos citados en la UNIDAD 2..................................................................... 44

3

Introducción

En  la  unidad  1  el  estudiante  adquirió  las  competencias  para  identificar  y  valorar  las
características  principales  de  los  componentes  que  integran  el  PC,  estas  competencias,
nos  darán  la capacidad para  instalar sistemas  de  software,  diseñar  y  ejecutar  planes  de
mantenimiento  de  hardware,  analizar  sistemas  de  computación,  operar  base  de  datos,
implementar y darles mantenimiento a redes, entre otras.

En esta unidad 2 el estudiante podrá distinguir la importancia de los sistemas numéricos en
los avances tecnológicos, es de recalcar que si estos no existieran no tendríamos avances
como el internet, la fibra óptica, el móvil y las redes sociales, debido a que estas se basan
en las matemáticas.

Los sistemas numéricos aportan a la tecnología a través de los procesadores que poseen
los  aparatos  que  pueden  ser  programables,  es  decir  los  chips,  es  probable  que  sin  los
sistemas numéricos no podríamos realizar estas acciones; debido a que los procesadores
realizan  sumas  en sistemas binarios  de forma  incansable y  certera.  Por  ello  se  debe  de
comprender como trabajan los sistemas numéricos básicos ocupados en programación y
tecnología: decimal, binario y hexadecimal.

Al finalizar esta unidad el estudiante realizará el paso de un sistema numérico a otro, esta
competencia la lograremos adquirir a través de ejemplos y ejercicios que desarrollaremos
a lo largo de la unidad.

4

Clase 5| Sistema numérico de cualquier
base
5.Sistemas y códigos de numeración

Los  avances  tecnológicos  han  creado  dependencia  de  los  sistemas  computacionales  e

informáticas,  que  operan  internamente  con  sistemas  de  numeración  distintos  a  los

conocidos. Los sistemas numéricos de dos símbolos son suficientes para realizar diseños

y modelos de circuitos digitales de computadoras. La electrónica digital es el resultado de

la  acción  de  variables  discretas  que  pueden  representar  e  interpretarse,  utilizando  otros

sistemas derivados de este como lo son, el sistema de ocho símbolos octal y el sistema de

16 símbolos llamado hexadecimal. Estos últimos permiten representar números binarios de

forma más pequeña.

5.1 Sistema decimal

Para  Ramos  (2012) “El sistema  decimal,  es  el  sistema  que se maneja cotidianamente,  y
está formado por diez símbolos {0,1,2,3,4,5,6,7,8,9} por tanto la base del sistema es diez”
(p.14).

Se dice que el sistema numérico decimal es el punto de partida para la creación de otros

sistemas numéricos debido a que este contiene todos los dígitos posibles para la creación

de  diferentes  cantidades  e  incluso  cantidades  infinitas.  El  sistema  decimal  maneja  los

números reales del  0  al  9.  Dado que  su  base  cuenta  con  10  dígitos como lo muestra la

siguiente tabla 1:

5

Tabla 1

Tabla de números decimales

Numero Digito  Digito Decimal

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

0

1

2

3

4

5

6

7

8

9

Fuente: Nota. Elaboración propia.

La notación del sistema decimal seria la siguiente, según el tipo de número:

•  Para números enteros: de izquierda a derecha, el primer dígito corresponde a las

unidades (se multiplica por 10 elevado a la potencia 0), el segundo a las decenas

(se  multiplica  por  10),  el  tercero  a  las  centenas  (se  multiplica  por  10  elevado  al

cuadrado),  el  cuatro  al  millar  (se  multiplica  por  10  elevado  al  cubo),  y  así

sucesivamente.

•  Para  números no  enteros:  se recurre a separar  con  una coma  o punto decimal

para separar la parte entera (al lado izquierdo) de la fraccionaria (al lado derecho).

Para leer la parte entera lo haremos de la forma que ya hemos explicamos arriba.

6

Asimismo,  para  la  parte  fraccionaria,  utilizamos  las  potencias  negativas  de  diez,

yendo de izquierda a derecha de mayor a menor.

5.2 Sistema binario

Para  Ramos  (2012)  el  sistema  binario  es  un  sistema  de  numeración  que  utiliza 2
símbolos  0  (cero)  y  1  (uno),  denominados  dígitos  binarios.  El  sistema  binario,
conocido también como el sistema digital, es usado para la representación de textos,
datos y programas ejecutables en dispositivos informáticos. (p.10)

Utiliza dos símbolos para representar las cantidades, estos son: el cero “0” y el uno “1”; la

base  del  sistema  es  dos.  Este  sistema  tiene  aplicación  directa  en  los  circuitos  de

conmutación y compuertas lógicas digitales. También se le asocia niveles de tensión alta y

baja  respectivamente.  Por  lo  general,  se  establecen  relaciones  de  la  siguiente  forma:  el

nivel alto se puede denotar con las expresiones 1, alto, true, verdadero; y el nivel bajo 0,

low, false, falso.

Los números binarios empiezan con 0 que es el número más pequeño después el 1 y ahora

tendría  que  pasar  el  siguiente  número,  que  ya  seria  de  dos  cifras  porque  no  hay  más

números binarios de una sola cifra. El siguiente número binario, por lo tanto, seria combinar

el 1 con el 0, es decir el 10 (ya que el 0 con el 1, sería el 01 y no valdría porque sería igual

que el 1), el siguiente sería el número 11. Ahora ya hemos hecho todas las combinaciones

posibles de números binarios de 2 cifras, ya no hay más, entonces se pasa al de 3 cifras

que serían el 100, luego el 101, el 110 y el 111 y así sucesivamente.

Los conteos de números binarios pueden prestarse a confusión debido a que pueden ser

muy complejos en su representación dada la problemática planteada. En la tabla 2, podrá

comprender el conteo de los números binarios.

7

Tabla 2

Equivalente entre sistemas de los primeros 15 números decimales

Decimal

23=8

22=4

21=2

20=1

0

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

14

15

0

0

0

0

0

0

0

0

1

1

1

1

1

1

1

1

0

0

0

0

1

1

1

1

0

0

0

0

1

1

1

1

0

0

1

1

0

0

1

1

0

0

1

1

0

0

1

1

0

1

0

1

0

1

0

1

0

1

0

1

0

1

0

1

Fuente: Nota. Elaboración propia.

Sin embargo, a pesar de ser el sistema binario el utilizado en los sistemas computacionales,

en muchas ocasiones resulta incómodo trabajar con datos utilizando el sistema binario ya

que para representar números relativamente pequeños hacen falta muchos dígitos binarios.

8

Un ejemplo de ello es la dirección física de una tarjeta de red (dirección MAC), que es un

número binario de 48 bits, esto es algo así:

0011 10101 01110010 11001010 11001101 11010101 10101000

Para comprender mejor que es el sistema binario, te invito a ver el siguiente video:

El Mundo Del Aprendiz. (24 de marzo de 2020). Sistema Binario. [Video].

5.3 Sistema octal

Para Ramos (2012) el sistema octal es un sistema de numeración posicional de base
ocho (8); es decir, que consta de ocho dígitos, que son: 0, 1, 2, 3, 4, 5, 6 y 7. Por lo
tanto,  cada  dígito  de  un  numero  octal  puede  tener  cualquier  valor  de  0  a  7.  Los
números octales son formados a partir de los números binarios. (p.12)

El  sistema  numérico  octal  utiliza  ocho  símbolos  o  dígitos  para  representar  cantidades  y

cifras numéricas. Los dígitos son: {0,1,2,3,4,5,6,7}; la base de este es ocho y es un sistema

que se puede convertir directamente en binario como ser vera más adelante.

Este tipo de sistema numéricos es utilizado en sistemas digitales porque emplea números

enteros en lugar de solamente ceros y unos. Se dice que este tipo de sistema numérico fue

uno de los primeros en usarse debido a su semejanza con el sistema numérico decimal. En

la tabla 3 se representa la notación octal con su respectico equivalente decimal.

9

Tabla 3

Tabla de números decimales y su equivalente en octal

Numero Octal

Digito Decimal

0

1

2

3

4

5

6

7

10

11

12

13

14

15

16

17

Fuente: Nota. Elaboración propia.

0

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

14

15

10

5.4 Sistema hexadecimal

Para  Ramos  (2012)  el  sistema  hexadecimal  es  un  sistema  de  numeración  que
emplea 16 símbolos. Su uso actual está muy vinculado a la informática y ciencias
de  la  computación,  pues  los  computadores  suelen  utilizar  el  byte  u  octeto  como
unidad básica de memoria. (p.16)

El  sistema  numérico  hexadecimal  utiliza  dieciséis  dígitos  y  letras  para  representar

cantidades y cifras numéricas. Los símbolos son: {0,1,2,3,4,5,6,7,8,9, A, B, C, D, E, F}; la

base del sistema es dieciséis. También se puede convertir directamente en binario como

se verá en la tabla 4. Se muestran los primeros veinte números decimales con su respectivo

equivalente binario, octal y hexadecimal.

Tabla 4

Equivalente entre sistemas de los primeros 20 números decimales

Decimal

Binario

Octal

Hexadecimal

0

1

2

3

4

5

6

7

0000

0001

0010

0011

0100

0101

0110

0111

0

1

2

3

4

5

6

7

0

1

2

3

4

5

6

7

11

8

9

10

11

12

13

14

15

16

17

18

19

20

1000

1001

1010

1011

1100

1101

1110

1111

10000

10001

10010

10011

10100

10

11

12

13

14

15

16

17

20

21

22

23

24

8

9

A

B

C

D

E

F

10

11

12

13

14

Fuente: Nota. Elaboración propia.

El sistema de números hexadecimales es uno de los más utilizados en los sistemas digitales

y  en  la  ciencia  de  la  computación,  ya  que  con  este  sistema  se  pueden  representar

posiciones de memoria, sectores del disco duro y demás.

12

Para comprender mejor que es el sistema hexadecimal, te invito a ver el siguiente video:

KhanAcademyEspañol.  (10  de  agosto  de  2014).  Introducción  al  sistema  numérico
hexadecimal. [Video].

13

Clase 6| Transformación entre sistemas
numéricos
6.Transformación entre sistemas numéricos

Para Ramos (2012) “Un sistema numérico se define como el número máximo de dígitos que

el sistema numérico puede soportar o contener” (p.16).

Las ventajas que ofrece el sistema digital sobre el analógico son cada vez mayores debido

a  su  facilidad  para  construirlos  e  implementarlos.  El  almacenamiento  de  información  es

cada vez más sencillo y una de las ventajas más sobresalientes es que son más precisos

que los analógicos.

Entre  sus  desventajas  está  que,  como  el  mundo  es  completamente  analógico,  todas  las

magnitudes medidas se controlan mediante cálculos continuos, aproximados.

Debido al gran incremento de los sistemas digitales se cree que el mundo deberá seguir el

camino de la tecnología, y que en un futuro los sistemas digitales predominarán: desde las

aplicaciones sencillas hasta las muy sofisticadas.

En  las  diferentes  representaciones  de  magnitudes  analógicas  o  digitales  se  usan  los

llamados  sistemas  numéricos,  o  sea  representaciones  numéricas  de  las  magnitudes

tomadas; la más utilizada por los seres humanos es la decimal (compuesta por los números

naturales 0 al 9), pero las computadoras usan el sistema numérico binario (con los dígitos

0 y 1).

Con  ellos se  desarrollan  también  los sistemas  octal  (dígitos  del  0 al  7)  y  el  hexadecimal

(dígitos  el  0  al  9  y  de  la  letra  A  la  F).  Los  diferentes  tipos  de  sistemas  numéricos  se
encuentran en la tabla 5:

14

Tabla 5

Tabla con representación de los sistemas numéricos

Sistema numérico

Binario

Octal

Decimal

Hexadecimal

Ejemplo

10010112

2315728

98075310

4ADF316

Fuente: Nota. Elaboración propia.

6.1 Número de base cualquiera a sistema decimal

El valor de un número en el sistema decimal depende de los dígitos enteros y fraccionarios

que posea, juntamente con el peso posicional de la base del sistema numérico dado. Por

ejemplo,  el  número  de  base  diez  492,8610  tiene  valores  posicionales  por  cada  digito  en

correspondencia con el producto de la base de dicho sistema. En la Tabla 6, podrá observar

el  valor  ponderado  no  es  más  que  la  suma  de  los  productos  de  los  dígitos  por  la  base

elevada al exponente según corresponda la posición de dicho digito.

Tabla 6

Tabla que muestra valor pondera de un número decimal

a2

4

b2

a1

9

b1

a0

2

b0

,

,

,

a-1

8

b-1

a-2

6

b-2

4*10*10*1=4*102  9*10*1=9*101  2+100=2*1

  8*10-1=8*(1/10)

6*10-2=6*(1/100)

Fuente: Nota. Elaboración propia.

15

La parte entera tiene un valor dado en unidades que se obtiene de la forma siguiente:

4*102 +9*101+2*1=492 unidades

La  parte  fraccionaria  tiene  un  valor  dado  en  centésimas  que  se  obtiene  de  la  forma

siguiente:

8*10-1=ocho décimas=ochenta centésimas

6*10-2=seis centésimas

Total 86 centésimas

Para convertir las expresiones de números entre distintas bases puede usarse el siguiente

procedimiento general:

a)  Parte entera del número (términos del polinomio con la base elevada a exponentes

cero o positivos) Supongamos que el primer miembro de la siguiente igualdad esta

expresado en un Sistema de Numeración en base b = b1, y el segundo miembro en

base b = b2

Nb1 = anb2

n + an-1 b2

n-1 + ........ + a1 b2

1 + a0 b2

0

Si dividimos miembro a miembro por b2 vemos que el último término del segundo

miembro  será  a0,  que  es  el  resto  de  la  división  y  la  cifra  menos  significativa  del

número en base b2.

Repitiendo la división entre el cociente anterior y b2, obtendremos como resto a1, y

así sucesivamente hasta llegar a an. El ejemplo presentado en la Tabla 5 aclarará lo

expuesto:

Ejemplo:

b1 = 1010

Nb1 = 2510

b2 = 210

De acuerdo con lo mencionado, tenemos: 2510=110012

b)  Parte  fraccionaria  del  número  (términos  del  polinomio  con  la  base  elevada  a

exponentes negativos). Supongamos que el primer miembro de la siguiente igualdad

esta expresado en un sistema de numeración en base b=b1, y el segundo miembro

en base b=b2

Nb1 = a-1b2

-1 + a-2 b2

-2 + ........ + ak+1 b2

k+1 + a-k b2

-k

16

Si multiplicamos miembro a miembro por b2 observamos que el primer término del

segundo  miembro  es  a-1,  es  decir,  la  primera  cifra  más  significativa  de  la  parte

fraccionaria. La multiplicación solo sobre la parte fraccionaria del resultado, vamos

obteniendo las sucesivas cifras menos significativas.

Un ejemplo aclarará lo expuesto.

Ejemplo:

b1=1010

Nb1=0,2110

b2=210

0,21 x 2 = 0,42

0,42 x 2 = 0,84

0,84 x 2 = 1,68

0,68 x 2 = 1,36

0,36 x 2 = 0,72

0,72 x 2 = 1,44

0,44 x 2 = 0,88

De acuerdo con lo mencionado tenemos:

0,2110 = 0,0011010…2

Si tenemos número como parte entera y fraccionaria, aplicamos la parte a) y la parte b).

Para comprender mejor el procedimiento de convertir de cualquier base a decimal, te invito
a ver el siguiente video:

math2me. (9 de junio de 2016). Convertir de cualquier base a decimal. [Video].

17

Para comprender mejor las conversiones de cualquier base a decimal con fracciones, te

invito a ver el siguiente video:

Hospital de Matemáticas. (18 de septiembre de 2019). Convertir cualquier base a decimal

fraccionario. [Video].

6.2 Número decimal a cualquier base

Para la conversión de números decimales a binarios se utiliza la división entre dos, debido

a que los datos que se van a convertir emplean la base 2(número binario: dos dígitos).

Se cuenta con un procedimiento para transformar un numero decimal en otro de base b con

una cantidad n de dígitos enteros. Para lograr esto se parte de la siguiente ecuación, donde

se obtienen particiones sucesivas hasta llegar la partición n:

𝑛 1(𝑁10

𝑛 )𝑏 𝑎𝑛−1 Enésima partición que se realiza con el numero decimal N10

𝑁10
El resultado de todo este procedimiento es una división sucesiva donde b es el divisor del

número desconocido;

aj: Son los residuos de la división con j desde n-1 hasta 0

𝑛 1 : Es el dividendo

𝑁10

𝑛 : Es el cociente de las sucesivas particiones

𝑁10
La cifra resultante de la transformación de un numero decimal, en otro sistema numérico;

se  construye  tomando  los  residuos  en  orden  inverso  a  las  divisiones  o  particiones

sucesivas. Esto significa que la cifra será: (𝑎𝑛 1𝑎𝑛 2𝑎𝑛 3. . . . 𝑎3𝑎2𝑎1𝑎0)𝑏

18

En la figura 1, se muestra la división sucesiva para la conversión de un numero decimal a

cualquier base.

Figura 1

Transformación de numero decimal a cualquier base

Fuente: Nota. Elaboración propia

La  parte  fraccionaria  se  transforma  multiplicando  esta  última  por  la  base  del  sistema  y

tomando como resultado el digito entero que resulta del producto. Luego se resta el entero

absoluto  y  el  resultado se toma  para  la  conversión;  se  repite  de  nuevo  el  procedimiento

multiplicando por la base. En este tipo de conversión se debe limitar la cantidad de dígitos

necesarios después de la coma:

0, 𝑎1, 𝑎2, 𝑎3, 𝑎4, 𝑎5. . . . . 𝑎𝑘  conversión fraccionaria

La transformación completa de la parte entera y la fraccionaria da como resultado la cifra

de base cualquiera y tiene la siguiente forma:

(𝑎𝑛−1, 𝑎𝑛−2, 𝑎𝑛−3 … . . 𝑎1, 𝑎2, 𝑎3, 𝑎4, 𝑎5 … . . 𝑎𝑘)𝑏

19

Para comprender mejor las conversiones de decimal con fracciones a otra base, te invito a

ver el siguiente video:

Hospital de Matemáticas. (8 de septiembre de 2019). Convertir decimal fraccionario a otra

base. [Video].

6.3 Directas entre sistemas no decimales

Las  conversiones  directas  de  estos  sistemas,  sin  pasar  por  el  sistema  decimal,  se

fundamentan en la equivalencia que existe entre la base del sistema binario con respecto

a  la  base  del  sistema  octal  y  hexadecimal.  Las  equivalencias  se  realizan  en  grupos  de

dígitos  binarios(bits),  por  ejemplo,  para  el  sistema  octal  se  necesitan  tres  bits  y  para  el

sistema hexadecimal se requieren cuatro bits.

Las conversiones binario a octal se hacen por medio de grupos de 3 bits. Esto se debe a la

equivalencia matemática de la base binaria y octal 2x=23=8; por lo tanto, x=3. Los grupos

se toman de dos formas; pariendo de la coma, hacia la izquierda, para la parte entera y de

este mismo sitio, hacia la derecha para la parte fraccionaria.
En la tabla 7, se muestra un ejemplo de conversión de un numero octal a binario.

20

Tabla 7

Tabla que muestra la transformación de 54721,44 octal a sistema binario en grupo de 3

bits

5

4

7

2

1

101

100

111

010

001

,

,

4

100

4

100

Fuente: Nota. Elaboración propia.

El sentido de la conversión seria la siguiente 54721,448=101 100 111 010 001,100 12

Las conversiones de binario a hexadecimal se realizan con grupos de 4 bits. Esto se debe

a la equivalencia matemática de la base binaria y hexadecimal 2x=24=16; por lo tanto, x=4,

los  grupos se toman  de  dos formas:  partiendo de  la  coma,  hacia izquierda  para  la  parte

entera y de este mismo sitio, hacia la derecha, para la parte fraccionaria.
En la tabla 8, se muestra un ejemplo de conversión de un numero hexadecimal a binario.

Tabla 8

Tabla que muestra la transformación de A5F72,B7 hexadecimal a sistema binario

A

5

F

7

2

,

B

7

1010

0101

1111

0111

0010

,

1011

0111

Fuente: Nota. Elaboración propia.

El sentido de la conversión seria la siguiente A5F72,B716=1010 0101 1111 0111 0010,1011

01112.

Del mismo modo se realizan las transformaciones inversas.

Las  conversiones  de  octal  a  hexadecimal  se  deben  de  realizar  con  un  paso  previo  a  la

conversión  binaria.  Luego  se  pasa  del  sistema  binario  al  correspondiente  octal  tomando

grupos de tres bits, o se transforma a hexadecimal formando grupos de cuatro bits. La parte

entera se agrupan desde la coma hacia la izquierda y la parte fraccionaria desde la coma

21

hacia  la  derecha,  de  ser  necesario,  se  rellena  con  cero  en  la  última  posición  menos

significativa de la cifra.

A continuación, se muestra un ejemplo de conversión de octal a hexadecimal, como primer

paso en la tabla 9 se muestra la conversión de octal a binario y en la tabla 10 la conversión
final de binario a hexadecimal.

Tabla 9

Tabla que muestra la transformación de 45674012,3 octal a sistema binario

4

5

6

7

4

0

1

2

100

101

110

111

100

000

001

010

,

,

3

011

Fuente: Nota. Elaboración propia.

El sentido de la conversión seria la siguiente 45674012,316=100 101 110 111 100 000 001

010, 0112.

Tabla 10

Tabla  que  muestra  la  transformación  de  100  101  110  111  100  000  001  010,  0112        a

hexadecimal (bloques de 4 bits)

100

101

110

111

100

000

001

010

1001

0111

0111  1000

0000

1010

9

7

7

8

0

A

,

,

,

011

0110

6

Fuente: Nota. Elaboración propia.

El resultado final provenientes de las tablas 9 y 10, es:    45674012,38 = 97780A,616

22

Clase 7| Operaciones aritméticas en
sistemas digitales

7.  Complemento  con  respecto  a  la  base  del

sistema

Las  representaciones  de  los  números  en  los  distintos  sistemas  son  hechas  por

conversiones  y  acuerdos.  La  finalidad  de  esto  es  buscar  la  forma  sencilla  de  manejar

universalmente  operaciones  y

representaciones  numéricas,

representar  números

procesadas por los circuitos internos de una calculadora o computadora. 𝑁𝑏

fraccionarios y reglamentar las operaciones aritméticas con signo, de forma que puedan ser
𝐶 𝑏𝑛𝑁𝑏 donde
𝐶  es el numero complemento a la base b del  sistema la cantidad de dígitos y 𝑁𝑏 es el

𝑁𝑏
numero dado

7.1 Disminuido en uno a la base del sistema

Existe otra forma de hallar el complemento a la base del Sistema, esta es, obteniendo el

complemento disminuido a uno y luego sumando uno. Para obtener esta fórmula se procede

con un artificio en la siguiente ecuación (Ec.1):

𝑁𝑏

𝐶 = (𝑏𝑛 −   𝑁𝑏) + 1 −  1 = [(𝑏𝑛 −  1) − 𝑁𝑏] + 1  (Ec.1)

𝐶−1 = (𝑏𝑛 −  1) − 𝑁𝑏  (Ec.  2).  Se  conoce  como  el  complemento  de  la  base
El  valor  𝑁𝑏
disminuido  a  uno.  También  se  le  denomina  complemento  a  uno  del  sistema  numérico

correspondiente y, por lo tanto, para hallar el complemento a la base solamente se le debe

sumar uno a la Ec.2.

El complemento disminuido a uno se obtiene aplicando la ecuación Ec.2 en cualquiera de

los sistemas numéricos. La expresión (bn-1) se debe usar como minuendo en el tope de la

potencia  bn  menos  uno,  lo  que  significa  tener  una  cifra  compuesta  por  los  dígitos  más

23

significativos y de mayor valor del Sistema numérico. Por ejemplo, para hallar el minuendo

de  564378,  en  el  Sistema  octal,  se  procede  de  la  siguiente  forma:  n=5;  entonces  85-

1=10000008-1=777778.  Ahora,  para  hallar  el  complemento  disminuido  a  uno,  se  resta  el

numero dado: 𝑁𝑏

𝑐−1 = 777778  - 564378  = 213408

Para comprender mejor el concepto, se presenta el siguiente ejemplo, en donde se debe

hallar el complemento disminuido a uno de los siguientes números:

a)24BCA0F716

b)100111011012

c)12657308.

Sol.

a) 𝑁16

𝑐−1  = (168 − 1)−24𝐵𝐶𝐴0𝐹716  =   𝐹𝐹𝐹𝐹𝐹𝐹𝐹𝐹16  −   24𝐵𝐶𝐴0𝐹716    =   𝑫𝑩𝟒𝟑𝟓𝑭𝟎𝟖𝟏𝟔

Sol.

 b) 𝑁2

𝑐− 1  = (211 − 1) − 100111011012  =

  111111111112  − 100111011012  =   𝟎𝟏𝟏𝟎𝟎𝟎𝟏𝟎𝟎𝟏𝟎𝟐

Sol.

 c) 𝑁8

𝑐−1  = (87 − 1) − 12657308    =   77777778  −   12657308  =   𝟔𝟓𝟏𝟐𝟎𝟒𝟕𝟖

En cualquier sistema de numeración el complemento disminuido a uno se puede hallar de

la siguiente forma:

[(𝑏𝑛 − 1)−𝑁𝑏] =   [(𝑏 −  1)(𝑏  − 1) … . (𝑏 −   1)(𝑏 −  1) −   (𝑎𝑛 −1)(𝑎𝑛 −2) … . (𝑎1)(𝑎0)]

Donde  cada  (b-1)  corresponde  al  digito  de  mayor  peso  en  el  sistema  de  numeración  de

base b. Los “aj” son los n dígitos del número que se va a complementar, con j=0,1,….,n-

2,n-1. El complemento disminuido a uno se halla, en forma directa de la siguiente manera:
𝐶− 1 [(𝑏  − 1)−𝑎𝑛 −1] [(𝑏  −  1)𝑎𝑛− 2] … . [(𝑏  −  1)−𝑎2][(𝑏  −  1)−𝑎1][(𝑏   − 1)−𝑎0]      (Ec.3)
𝑁𝑏
A continuación, se muestra un ejemplo de cómo hallar el complemento disminuido a uno de

los siguientes números:

a) FCBC4016;

b)1010110112

24

Sol. a) 𝑁16

Sol. b) 𝑁2

𝑐−1  =    𝐹𝐹𝐹𝐹𝐹𝐹16  −   𝐹𝐶𝐵𝐶4016  =    0343𝐵𝐹16
𝑐−1  = 1111111112  −   1010110112  =   0101001002

7.1.1 Complemento a uno

Es un caso particular del complemento disminuido a uno de la base binaria, tiene muchas

aplicaciones en los circuitos digitales y sistemas de computación. Sirven para representar

tablas numéricas de cantidades positivas y negativas, invertir los estados de los bits que

conforman el dato binario y es utilizado como paso previo para hallar el complemento a dos,

de la Ec. 2 se puede determinar que el complemento a uno se obtiene invirtiendo el estado

o nivel de los bits que conforman la cifra.

A  continuación,  se  muestra  un  ejemplo  de  cómo  calcular  el  complemento  a  uno  de  los

siguientes números binarios.

a) 1100010101011110102;  b) 1010110101012

Solución (a): 𝑁2

Solución (b): 𝑁2

𝑐−1  = 0011101010100001012
𝑐−1  = 0101001010102

Como habrás notado, solamente se han invertidos los unos por ceros y los ceros por unos.

7.1.2 Complemento a dos

Es  un  caso  particular  del  complemento  a  la  base  del  sistema  binario,  tiene  muchas

aplicaciones en los circuitos digitales y sistemas de computación. Sirven para representar

tablas numéricas de cantidades positivas y negativas, invertir los estados de los bits que

conforman  el  dato  binario  y  realizar  operaciones  aritméticas  con  signos  en  el  sistema

binario. Con la Ec. 1 se puede determinar el complemento a dos de un numero binario; no

obstante, con la misma ecuación se puede hallar un método directo para obtener también

el complemento a dos. Este método consiste en ir seleccionando y colocando de derecha

a izquierda los dígitos binarios hasta conseguir el primer bit en uno, de allí en adelante se

cambian de estado todos los bits restantes.

Para hallar el complemento a dos se puede aplicar un método directo, buscando de derecha

a izquierda hasta conseguir el primer bit en uno; se escriben los ceros anteriores y en los

25

bits restantes, se cambia el estado de los mismo. En la figura 2, se muestra el proceso del

método directo.

Figura 2

Imagen ejemplo de complemento a dos de 1011001010101112

Fuente: Nota. Por Oliver (2002)

Para comprender mejor los complementos a 1 y a 2 de los sistemas binarios, te invito a ver

el siguiente video:

Les Ingenieurs. (31 de enero de 2016). Complemento a 1 y a 2 sistema binario. [Video].

26

En  el  sistema  binario,  la  forma  más  utilizada  para  representar  los  números  enteros  con

signos es la de complemento a dos. Los circuitos microprocesadores poseen internamente

unidades de procesamiento aritmético que trabajan bajo este formato, el cual puede estar

constituido por n bits múltiplos de la potencia de base dos. Por ejemplo, para representar

los números positivos y negativos se definen datos con tamaño estándar: 8 bits, 16 bits, 32

bits, etc.

En este formato, el bit más significativo (MSB) del dato se utiliza para indicar el signo y los

bits restantes representan la magnitud del número, como se puede apreciar en la figura 3

donde el formato utilizado para 16 bits, donde el más significativo B15 indica que el signo es

negativo  si  vale  uno  o  positivo  si  vale  cero.  Las  cantidades  positivas  se  encuentran  en

binario  normal  mientras  que  los  números  negativos  están  en  complemento  a  dos,  esto

significa que estos últimos, se deben complementar para poder hallar su verdadero valor:

Figura 3

Formato de 16 bits para representación numérica con signo

Fuente: Nota. Por Oliver (2002)

En la tabla 11, se muestra la representación de números enteros de 16 bits, los números

positivos representan los binarios normales y los números negativos, se encuentran en su

complemento a dos.

27

Tabla 11

Tabla con representación de números enteros de 16 bits

Numero entero

Formato de 16 bits

+ 32767

0111111111111111

.

.

+5

+4

+3

+2

+1

0

-1

-2

-3

-4

-5

.

.

.

.

0000000000000101

0000000000000100

0000000000000011

0000000000000010

0000000000000001

0000000000000000

1111111111111111

1111111111111110

1111111111111101

1111111111111100

1111111111111011

.

.

-32767

1000000000000001

Fuente: Nota. Elaboración propia.

28

El complemento de un número, en este formato, es igual que cambiar el signo del mismo.

Por otra parte, el complemente del complemento da como resultado el mismo número.𝑁2

𝐶 =

(𝑁2

𝐶(𝑋)) = 𝑋

7.2 Operaciones aritméticas en complemento a dos

La  suma  y  resta  son  las  operaciones  básicas  realizadas  por  los  microprocesadores,

cualquiera  otra  operación,  es  consecuencia  recursiva  de  éstas.  A  continuación,  se

describen  estas  dos  operaciones  aritméticas,  realizadas  con  números  binarios  en

complemento a dos utilizando formato de signo y magnitud de 16 bits.

Son  cuatro  casos  que  se  presentan  al  sumar  dos  datos  en  formato  con  signo  de

complemento a dos:

1.  Suma  de  dos  números  positivos:  el  resultado  debe  ser  positivo,  y  el  bit  más

significativo  de  la  suma,  siempre  dará  cero.  En  la  figura  4,  se  muestra  el

procedimiento de la suma.

Figura 4

Suma de dos números binarios positivos

Fuente: Nota. Por Oliver (2002)

29

Antes de realizar la suma binaria se debe tener la precaución de sumar en decimal

los números. De esta manera se puede chequear el resultado de la suma para terne

certeza de que no exceda el valor +3276710 y por lo tanto no sobrepasar el formato

de 16 bits (Esto se conoce como OVERFLOW). También si 16vo bit vale cero, se

comprueba que no existe OVERFLOW.

Para  comprender  mejor  el  procedimiento  de  la  suma  binaria,  te  invito  a  ver  el  siguiente
video:

Les ingenieurs. (1 de julio de 2019). Suma binaria | Electrónica digital. [Video].

2.  Suma de uno negativo y otro positivo: el resultado debe poseer el signo del que

tenga mayor absoluto. En este caso el resultado es positivo y el 16vo bit vale cero.

En la figura 5, se muestra el procedimiento de la suma.

Figura 5

Suma de dos números binarios, uno negativo con otro positivo

Fuente: Nota. Por Oliver (2002)

30

3.  Suma de uno positivo y otro negativo: el resultado debe poseer el signo del que

tenga mayor valor absoluto. En este caso el resultado es negativo y 16vo bit vale

cero; del mismo modo no se debe tomar en cuenta al acarreo del 17vo bit. En la

figura 6, se muestra el procedimiento de la suma.

Figura 6

Suma de dos números binarios, uno positivo y otro negativo

Fuente: Nota. Por Oliver (2002)

Con  dos  números  de  distintos  signos  se  dan  los  casos  de  acarreo  de  17vo  bit.  Si  este

acarreo es cero significa que el resultado es negativo se debe complementar para hallar su

31

verdadero valor de la otra forma, si el acarreo es uno, entonces el signo del resultado es

mayor o igual a cero y se encuentra en verdadero valor.

4.  Suma de dos números negativos: el resultado debe ser negativo, por lo tanto, el

bit  más  significativo  de  la  suma  siempre  dará  uno.  En  la  figura  7,  se  muestra  el

procedimiento de la suma.

Figura 7

Suma de dos números binarios negativos

Fuente: Nota. Por Oliver (2002)

Antes  de  realizar  la  suma  binaria  se  debe  tener  la  precaución  de  sumar  en  decimal  los

números. De esta manera se puede chequear el resultado de la suma para tener la certeza

32

de que no exceda el valor -3276710 y por lo tanto no sobrepasar el formato de 16 bits (Esto

se conoce OVERFLOW). También el 16vo y 17vo bits en cero señalan el sobre flujo de la

operación.

La resta en complemento a dos resuelve el problema de esta operación con los signos. Por

ejemplo, el sustraendo negativo y minuendo positivo produce un resultado positivo; la resta

de dos números A y B negativos puede dar resultados positivos o negativos. Para realizarla

se procede con la fórmula definida de la siguiente forma:

𝐴 − 𝐵 = 𝐴 + 𝑁2
es equivalente a la suma de A más el complemento a dos de B.

𝐶−1(𝐵) + 1 = 𝐴 + 𝑁2

𝐶(𝐵) (Ec.1.5); La diferencia de dos números, A menos B

5.  Resta de dos números positivos. en la figura 8, se muestra el procedimiento de

la resta.

Figura 8

Resta de dos números binarios positivos

Fuente: Nota. Por Oliver (2002)

De esta manera, el resultado es negativo y queda en forma de complemento a dos,

el acarreo del 17vo bit no se toma en cuenta. Sin embargo, para saber el verdadero

valor, el resultado se debe complementar a dos. Este es un número binario negativo
𝐶(𝑁2

𝐶(𝐵))= 01011011011010112. En decimal

de 16 bits, lo cual tiene un valor de: 𝑁2

33

la operación se efectúa: A = 774810 y B = 3115110 entonces el resultado es A-B = -

2340310.

6.  Resta de dos números negativos y de distinto signo. El resultado puede presentar

varias formas que se determinan aplicando los mismos casos de la suma en formato

de 16 bits.

Para comprender mejor los números binarios con signo, te invito a ver el siguiente video:

Pasos por ingeniería. (4 de julio de 2017). Números binarios con signo. [Video].

7.3 Representación numérica con coma fija y flotante

Estas  representaciones  son  utilizadas  por  las  computadoras  para  procesar  cálculos

numéricos con formatos grandes. Consiste en una cadena de bits que guardan relación con

la  notación  científica,  y  pueden  representar  números  enteros  y  números  reales  tanto

negativos como positivos. Los formatos más conocidos son la coma fija y la coma flotante,

también  denominados  punto  fijo  y  punto  flotante  respectivamente.  Antes  de  comenzar  a

describir  estos  formatos  se  debe  entender  el  funcionamiento  de  un  caso  especial  de

complemento a dos el cual se denomina representación con exceso o sesgada.

34

Clase 8| Código de numeración,
alfanuméricos y de errores
8.Codigo de numeración, alfanuméricos y de

errores

Los códigos en los sistemas digitales se clasifican en tres tipos: códigos numéricos, códigos

alfanuméricos y códigos detectores y correctores de errores. El objetivo de los códigos es

simplificar

la  comunicación  entre

los  distintos  circuitos  digitales,  normalizar  el

funcionamiento  de  los  mismos  y  detectar  posibles  fallas  de  datos  para  su  posterior

corrección.

8.1 Códigos numéricos

Los más utilizados,  en  circuitos digitales  combinacionales son  el  código BCD,  Exceso  3,

Aiken  o  2421,  5421,  Biquinario,  Dos  de  Cinco.  Existen  otros  códigos  de  tipo  secuencial

cíclicos, dos de ellos es son código Jhonson y el código Gray. En la tabla 12 se describen

algunos de ellos con sus respectivos equivalentes decimales.

Tabla 12

Tabla de equivalencia desde cero hasta quince de algunos códigos numéricos más

utilizados

Decimal

BCD

Exceso 3

2421

5421

Biquinario  Dos de

Gray

Cinco

0

1

2

0000

0011

0000

0000

0100001

00011

0000

0001

0100

0001

0001

0100010

00101

0001

0010

0101

0010

0010

0100100

01001

0011

35

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

14

15

0011

0110

0011

0011

0101000

10001

0010

0100

0111

0100

0100

0110000

00110

0110

0101

1000

1011

1000

1000001

01010

0111

0110

1001

1100

1001

1000010

10010

0101

0111

1010

1101

1010

1000100

01100

0100

1000

1011

1110

1011

1001000

10100

1100

1001

1100

1111

1100

1010000

11000

1101

0001

0000

0001

0001

0001

0010

0001

0011

0001

0100

0001

0101

0100

0011

0100

0100

0100

0101

0100

0110

0100

0111

0100

1000

0001

0000

0001

0001

0001

0010

0001

0011

0001

0100

0001

1011

0001

0100010

00101

1111

0000

0100001

00011

0001

0100010

00101

1110

0001

0100010

00101

0001

0100010

00101

1010

0010

0100100

01001

0001

0100010

00101

1011

0011

0101000

10001

0001

0100010

00101

1001

0100

0110000

00110

0001

0100010

00101

1000

1000

1000001

01010

Fuente: Nota. Elaboración propia.

8.2 Códigos alfanuméricos

Estos códigos son interpretados por el computador como caracteres e indistintamente

pueden representar símbolos numéricos, símbolos de control y letras.

Las computadoras se comunican mediante estos códigos y los más utilizados son el

36

código ASCII y el UNICODE.

Para  Ramos  (2012)  “ASCII:  American  Standard  Code  Interchange  Information.  Cada

carácter alfanumérico está formado por una cadena de siete bits. Este código representa

128  símbolos  diferentes  entre  dígitos,  letras  e  instrucciones  de  control  del  computador”

(p.25).

La tabla 13 muestra los símbolos con su respectivo valor hexadecimal. Por ejemplo, para

codificar la palabra UNEXPO se procede de la siguiente forma:

1010101

1001110

1000101

1011000

1010000

1001111

U

55J

N

4EH

E

45H

X

58H

P

50H

O

4FH

Tabla 13

Tabla de código ASCII

BIN

000

001

010

011

100

101

110

111

B3B2B1B0  HEX

0

1

2

0000

0001

0010

0011

0100

0

1

2

3

4

NUL

DLE

SP

SOH  DC1

STX

DC2

ETX

DC3

EOT

DC4

!

“

#

$

3

0

1

2

3

4

37

4

@

A

B

C

D

5

P

Q

R

S

T

6

`

a

b

c

d

7

p

q

r

s

t

0101

0110

0111

1000

1001

1010

1011

1100

5

6

7

8

9

A

B

C

ENQ  NAK

%

ACK

SYN

&

BEL

ETB

BS

CAN

HT

EM

LF

SUB

VT

ESC

FF

FS

1101

D

CR

GS

1110

1111

E

F

SO

RS

SI

US

Fuente: Nota. Elaboración propia.

‘

(

)

*

+

,

-

.

/

5

6

7

8

9

:

;

<

=

>

?

E

F

G

H

I

J

K

L

M

N

O

U

V

W

X

Y

Z

[

\

]

^

_

e

f

g

h

i

j

k

l

m

n

o

u

v

w

x

y

z

{

|

}

~

DEL

Para Ramos (2012) “Unicode: es un código universal actualizado de propósito general, sirve

para representar todos los símbolos utilizados en los alfabetos internacionales” (p.25).

Es una nueva norma de códigos alfanuméricos de 16 bits. Los símbolos se representan con

cuatro  dígitos  hexadecimales  como  se  muestra  en  la  tabla  14.  El  código  ASCII  es  un

subconjunto de éste y está representado desde 000016 hasta 007F16.

38

Tabla 14

Primeros 256 símbolos UNICODE

HEX  000

001

002

003

004

005

006

007

008

009  00A  00B  00C  00D  00E

00F

0

1

2

3

4

5

6

7

8

9

A

B

CTL  CTL

SP

CTL  CTL

CTL  CTL

!

“

CTL  CTL

#

CTL  CTL

$

CTL  CTL  %

CTL  CTL

&

CTL  CTL

CTL  CTL

CTL  CTL

‘

(

)

CTL  CTL

*

CTL  CTL

+

C

CTL  CTL

D

CTL  CTL

E

F

CTL  CTL

CTL  CTL

,

-

.

/

0

1

2

3

4

5

6

7

8

9

:

;

<

=

>

?

@

A

B

C

D

E

F

G

H

I

J

K

L

M

N

O

P

Q

R

S

T

U

V

W

X

Y

Z

[

\

]

^

_

Fuente: Nota. Elaboración propia.

Ç

ü

é

â

ä

à

å

ç

ê

ë

è

ï

î

ì

Ä

Â

`

a

b

c

d

e

f

g

h

i

j

k

l

m

n

o

p

q

R

S

T

U

V

w

x

y

z

{

|

}

~

CTL

39

É

á

_

_

_

¦

¦

Á

Â

À

í

ó

ú

ñ

Ñ

a

o

¿

©

®

¬

¦

¦

1⁄2   +

1⁄4   +

¡

«

¢

¥

+

-

-

+

-

+

Ã

Ã

+

+

-

-

¦

-

+

ð

Ð

Ê

Ë

È

I

Í

Î

Ï

+

+

_

_

¦

Ì

Ó

ß

Ô

-

±

_

Ò

3⁄4

õ

Õ

μ

Þ

Þ

Ú

Û

Ù

Ý

Ý

̄

¶

§

÷

,

°

̈

·

1

3

2

_

»

+

CTL

_

  ́

SP

æ

Æ

ô

ö

ò

û

ù

ÿ

Ö

Ü

ø

£

Ø

×

ƒ

Para comprender mejor los códigos ASCII y el UNICODE, te invito a ver el siguiente video:

Manik. (6 de diciembre de 2020). ¿Cómo funciona la codificación de caracteres?. [Video].

8.3 Códigos detectores y correctores de errores

La transmisión y recepción de datos binarios, desde un dispositivo a otro, están propensas

a  errores,  campos  magnéticos,  interferencias  y  ruidos  eléctricos  pueden  ocasionar  este

problema. El costo agregado que ocasiona añadir circuitos detectores y correctores de error

se ve compensado con el avance de la tecnología en el área de las telecomunicaciones.

Los sistemas de comunicación digital son la tecnología de punta en el ámbito mundial y,

específicamente,  las  redes  de  computadoras;  ejemplo  de  esto  son  las  redes  locales,

Internet, etc.

Los  sistemas  deben  detectar  y/o  corregir  errores  de  comunicación  en  el  menor  tiempo

posible de manera que puedan mantener el intercambio de información digital en línea y en

tiempo real. La tarea no parece sencilla; sin embargo, los diseñadores de sistemas digitales

deben considerar el costo de estos circuitos adicionales, a la hora de implementar el circuito.

De hecho, es necesario agregar más bits al dato que se desea transmitir con la finalidad de

chequear, en el receptor, los posibles errores durante el proceso de comunicación.

El método para realizar esto; va desde solicitar que reenvíen el dato, el bloque o hasta la

información  completa.  También  hay  métodos  más  seguros  que  implementan  sistemas

redundantes de tres o más circuitos de comunicación idénticos que operan en paralelo y

por lo tanto disminuyen considerablemente el índice de errores.

40

En esta sección se analizarán los métodos de detección de errores por paridad y detección

y/o corrección mediante el código Hamming.

El sistema de chequeo de error por paridad es muy utilizado en las comunicaciones seriales

de datos. El método consiste en establecer un tipo de paridad (par o impar) en el sistema

de comunicación y generar en el transmisor, un bit adicional de modo que el peso del dato

corresponda con la paridad (par o impar) establecida. Por lo general, este bit se agrega en

la posición más significativa del dato.

Ejemplo 1. En los datos a, b, y c generar el bit de paridad par e impar en la posición más

significativa (MSB).

a) 1010; b) 1110101; c) 00001

Solución par: El bit, hay que generarlo en el MSB de forma que el peso sea par;

a) 01010; b) 11110101; c) 100001

Solución impar: El bit, hay que generarlo en el MSB de forma que el peso sea impar;

a) 11010; b) 01110101; c) 000001

El método de paridad con un solo bit es eficiente en la detección de errores cuando hay

confiabilidad en el sistema de comunicación. De hecho, el peso del dato queda determinado

con m=n+1 bits, donde n es el número de bits que contiene la información. Este método

solamente  puede  detectar  errores  de  dos  datos  que  difieran  en  un  bit;  ósea,  tengan

distancia uno y que cambie, por error del sistema, solamente un bit. Sin embargo, no los

corrige y a lo sumo, puede señalizar error y/o solicitar que vuelvan a enviar el byte, dato,

palabra, o bloque de información que presentó el problema de comunicación.

De la misma forma, si hay cambios de distancias pares (2,4, 6,...), el método no detectará

error.  Sin  embargo,  en  las  distancias  impares  señaliza  los  errores.  Ejemplo  de  esto  se

puede ver comparando, en el punto anterior, los casos (D1 - D'1) y (A - A'). En 1950 R.W.

Hamming introdujo un método para detectar y corregir errores de datos en los sistemas de

comunicación donde las distancias pueden ser mayores a la unidad. Este código trabaja

con  una  distancia  mínima  de  tres  y  puede  detectar  errores  con  cambios  de  1  o  2  bits  y

corregir, cambios de un solo bit.

41

Los bits necesarios para el código Hamming se dividen en dos grupos; m bits de información

y k bits de chequeo o paridad, por lo que, el tamaño del dato a transmitir debe ser n=m+k

bits. Éste debe cumplir con la siguiente ecuación:

2𝑘 ≥ 𝑚 + 𝑘 + 1

La paridad del código puede ser par o impar, sin embargo, toda la información relacionada

está dada en paridad par. Por lo tanto, los ejemplos se realizarán tomando como referencia

codificación Hamming de paridad par con el número de bits n igual a siete.

Para comprender mejor los códigos de detección y corrección de errores, te invito a ver el

siguiente video:

AR2 Flipped (23 de marzo de 2020). Técnicas de detección y corrección de errores. [Video].

42

   Referencias citadas en UNIDAD 2

Ramos, J. (2012). Sistemas digitales. Red Tercer Milenio.

Martin-Pozuelo, J. (2014). Mi PC: Actualización, configuración, mantenimiento y reparación.

RA-MA.

Vázquez, J. (2012). Arquitectura de Computadoras. Red Tercer Milenio.

Parhami, B. (2007). Arquitectura de computadoras. McGraw-Hill.

Argüello, D., Pérez, S. y Facchini, H. (2018). Arquitectura de computadoras. Universidad

Tecnológica Nacional.

Kreisberger,  S.  (2011).  Mantenimiento  de  computadoras.  Taller  Editorial  Universidad  del

Cauca.

Asenjo,  R.,  Gutiérrez,  E.  y  Ramos,  J.  (2001).  Fundamento  de  los  computadores.

Universidad de Málaga.

Lopez, J. (2007). Redes inalámbricas wireles Lan. Coorporacion universitaria tecnológica

de bolivar.

43

Glosario de los términos citados en la
UNIDAD 2

Notación

La  notación  matemática  es  el  lenguaje  simbólico  formal

matemática

que  sigue  convenciones  propias.  Los  símbolos  permiten

representar  conceptos,  operaciones  y  todo  tipo  de

entidades matemáticas.

Numero base

La base (o Raíz) es el número de  dígitos en un sistema

numérico

El

bit  más

En  electrónica  digital,  el  bit  más  significativo,  most

significativo

significant  bit  (MSB),  en  sus  siglas  en  inglés,  es  el  bit,

(MSB)

que, de acuerdo a su posición, tiene el mayor valor. En

ocasiones,  se  hace  referencia  al  MSB  como  el  bit  del

extremo izquierdo.

Coma Fijo

La representación de coma fija es una forma de notación

científica  que  consiste  en  destinar  una  cantidad  fija  de

dígitos  para  la  parte  entera  y  otra  para  la  parte

fraccionaria. La cantidad de dígitos destinados a la parte

fraccionaria  indica  en  definitiva  la  posición  de  la  coma

dentro del número.

Coma flotante

La  representación  de  punto  flotante  (en  inglés  floating

point)  es  una  forma  de  notación  científica  usada  en  los

computadores con la cual se pueden representar números

reales  extremadamente  grandes  y  pequeños  de  una

manera muy eficiente y compacta, y con la que se pueden

realizar operaciones aritméticas.

44

alfanumérico

Es  un  término  colectivo  que  se  utiliza  para  identificar

letras del alfabeto latino y de números arábigos.

Código

Es un código detector y corrector de errores que lleva el

Hamming

nombre de su inventor, Richard Hamming.

45

