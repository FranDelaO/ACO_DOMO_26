ARQUITECTURA DE
COMPUTADORAS

UNIDAD
  4

ARQUITECTURA DE
COMPUTADORAS

1

Se prohíbe la reproducción total o parcial de esta obra, por cualquier medio,
electrónico  o  mecánico  sin  la  autorización  de  la  Dirección  de  Educación  a
Distancia (UDB Virtual).

Dirección de Educación a Distancia

Apartado Postal, 1874, San Salvador, El Salvador

Tel: 2251-8200 ext: 1743

2

Sumario

Introducción ..................................................................................................................................... 4

Clase 13| Representación de datos en la computadora ............................................................ 5

Clase 14| Clases de computadoras ............................................................................................ 14

Clase 15| Virtualización ................................................................................................................. 22

Clase 16| Programa monitor y BIOS ........................................................................................... 30

Referencias citadas en UNIDAD 4 ............................................................................................ 38

Glosario de los términos citados en la UNIDAD 4 ............................................................... 39

3

Introducción

En  la  unidad  3,  el  estudiante  adquirió  las  competencias  sobre  la  electrónica  digital  y

analógica, además adquirido los conceptos básicos tales como: las magnitudes eléctricas

presentes  en  los  circuitos  analógico/digitales,  etapas  en  la  conversión  de  señales  de

analógico-digital  y  de  digital  a  analógico,  operaciones  de  las  compuertas  lógicas  y  el

funcionamiento de los circuitos combinacionales y secuenciales.

En  esta  unidad  4  el  estudiante  podrá  distinguir  la  importancia  de  la  arquitectura  de

computadoras, la virtualización de máquinas virtuales, la clasificación de las computadoras

y la función de la BIOS.

Al finalizar esta unidad el estudiante realizara la virtualización de sistemas operativos en

máquinas virtuales, configuración y manejo de la BIOS por medio del SETUP y el POST.

4

Clase 13| Representación de datos en la
computadora
13.Representación  de  datos  en

la

computadora

13.1.  Códigos  de

representación  de  carácter

alfanuméricos

Todo  tipo  de  datos  que  entran  del  exterior  a  un  ordenador  se  transforman  en  esta

representación uniforme, cuando se almacenan en un ordenador y se vuelven a transformar

en su representación original cuando salen del ordenador. Este formato universal se llama

patrón de bits.

Un solo bit no puede resolver el problema de la representación de datos; si cada pieza de

datos  pudiera  representarse  por  un  1  o  un  0,  entonces  sólo  se  necesitaría  un  bit.  Sin

embargo, es necesario almacenar números más grandes, almacenar texto, gráficos y otros

tipos de datos. Para representar diferentes tipos de datos se utiliza un patrón de bits, una

secuencia o, como a veces se le llama, una cadena de bits. La figura 1 muestra un patrón

de bits formado por 16 bits: es una combinación de ceros (0) y unos (1). Esto significa que,

si usted quiere almacenar un patrón de bits formado por 16 bits, necesita 16 interruptores

electrónicos. Si quiere almacenar 1000 patrones de bits, cada uno de 16 bits, necesita 16

000 bits y así sucesivamente.

Figura 1

Patrón 16 bits.

Fuente: Nota. Por Forouzan (2003)

5

Una  pieza  de  texto  en  cualquier  idioma  es  una  secuencia  de  símbolos  usados  para

representar una idea en ese idioma. Por ejemplo, el idioma inglés utiliza 26 símbolos (A, B,

C, ..., Z) para representar las letras mayúsculas, 26 símbolos (a, b, c, ..., z) para representar

las letras minúsculas, 9 símbolos (0, 1, 2, ..., 9) para los caracteres numéricos (no números;

la diferencia se verá más adelante) y símbolos (., ?, :, :..., !) para representar la puntuación.

Otros  símbolos  como  el  espacio  en  blanco,  la  línea  nueva  y  el  tabulador  se  usan  para

alineación de texto y legibilidad.

Se puede representar cada símbolo con un patrón de bits. Dicho de otra forma, en la figura

2 se muestra un texto con la palabra "BYTE", el texto está formada por cuatro símbolos,

puede  representarse  como  4  patrones  de  bits,  en  los  que  cada  patrón  define  un  solo

símbolo.

Figura 2

Texto con 4 símbolos.

Fuente: Nota. Por Forouzan (2003)

Ahora la pregunta es: ¿Cómo sabe la memoria del ordenador qué tipo de datos representa

el  patrón de  bits? No  lo sabe.  La memoria  del  ordenador sólo almacena los datos  como

patrones  de  bits.  Es  responsabilidad  de  los  dispositivos  de  entrada/salida  o  de  los

programas interpretar un patrón de bits como un número, texto o algún otro tipo de datos.

En  otras  palabras,  los  datos  se  codifican  cuando  entran  al  ordenador  y  se  decodifican

cuando se presentan al usuario.

En  la  figura  3  se  muestra  el  proceso  de  codificación  de  los  datos  de  entrada  y  la

decodificación de los datos de salida.

6

Figura 3

Proceso de codificación y decodificación de diferentes datos.

Fuente: Nota. Por Forouzan (2003)

Te invito a ver el siguiente video, para comprender que son los patrones de
bits:

TekniChere  (13  de  agosto  de  2016).  Patrones  de  bits  y  códigos  binarios.
[Video].

7

13.1.1  Código  estándar  estadounidense  para  el  intercambio  de

Información (ASCII)

Código  ASCII  por  sus  siglas  en  ingles  American  Standard  Code  for  Information

Interchange, es decir código americano estándar para el intercambio de información es el

modelo o patrón de caracteres a usarse durante el intercambio de información basado en

el  alfabeto  latino  tal  como  se  usa  en  ingles  moderno  y  en  otros  lenguajes  occidentales

(Forouzan, 2003).

Este  código  se  definió,  originalmente,  para  uso  en  teletipos.  Contaba  de  64  símbolos,

correspondientes  tanto  a  comandos,  como  a  caracteres  imprimibles.  Posteriormente  fue

ampliado a 128 símbolos y adoptado para uso en toda clase de terminales.

El Instituto Nacional Norteamericano de Estándares, desarrolló un código llamado Código

norteamericano de estándares para intercambio de información ASCII. Este código utiliza

siete  bits  para  cada  símbolo.  Esto  significa  que  128  símbolos  distintos  pueden  definirse

mediante este código.

La lista siguiente destaca algunas de las características de este código:

•  ASCII utiliza un patrón de siete bits que varía de 0000000 a 1111111.

•  El primer patrón (0000000) representa el carácter nulo (la ausencia de carácter).

•  El último patrón (1111111) representa el carácter de eliminación.

•  Hay 31 caracteres de control (no imprimibles).

•  Los caracteres numéricos (0 a 9) se codifican antes que las letras.

•  Hay varios caracteres de impresión especiales.

•  Las letras mayúsculas (A ... Z) están antes que las letras minúsculas (a ... z).

8

•  Los caracteres en mayúsculas y en minúsculas se distinguen sólo por un bit. Por

ejemplo,  el  patrón  para  A  es  1000001;  el  patrón  para  a  es  1100001.  La  única

diferencia es el sexto bit a partir de la derecha.

•  Hay seis caracteres especiales entre las letras mayúsculas y minúsculas.

13.1.2 Código ASCII ampliado

Para hacer que el tamaño de cada patrón sea de 1 byte (8 bits), a los patrones de bits ASCII

se les aumenta un 0 más a la izquierda. Ahora cada patrón puede caber fácilmente en un

byte de memoria. En otras palabras, en ASCII extendido el primer patrón es 00000000 y el

último es 01111111.

Además de los 128 caracteres ASCII estándar, existen 128 caracteres adicionales (del 128

al 255) que fueron adoptados por IBM para utilizar en sus computadoras personales (PC).

Debido a la popularidad del PC, estos caracteres especiales del código ASCII extendido se

usan también en otras aplicaciones distintas de la PC, por lo que se ha convertido en un

estándar oficial.

El  código  ASCII  extendido  está  formado  por  caracteres  que  pertenecen  a  las  siguientes

categorías generales:

•  Caracteres alfabéticos no ingleses

•  Símbolos de moneda no ingleses

•  Símbolo de moneda no ingleses

•  Letras griegas

•  Símbolos matemáticos

•  Caracteres para gráficos

•  Caracteres para gráficos de barra

•  Caracteres sombreados

9

13.1.3 Delimitación de string

La longitud del patrón de bits depende del número de símbolos, la relación no es lineal; es

logarítmica. Si se requieren dos símbolos, la longitud es 1 bit (el log22 es 1). Si se necesitan

cuatro símbolos, la longitud es 2 bits (log24 es 2). La tabla 1 muestra esta relación, la cual

es fácilmente perceptible. Un patrón de bits de 2 bits puede tomar cuatro formas diferentes:

00, 01, 10 y 11; cada una de las cuales representa un símbolo. Del mismo modo, un patrón

de tres bits puede tomar ocho formas diferentes: 000, 001, 010, 011, 100, 101, 110 y 111.

Tabla 1

Número de símbolos y longitud de un patrón de bits

Numero de símbolos

Longitud de patrón de bits

2

4

8

…

128

256

…

65,536

Fuente: Nota. Elaboración propia.

1

2

3

…

7

8

…

16

10

13.2 Códigos de representación decimal (BCD)

13.2.1 BCD puro o natural

Código BCD (Binary-Coded Decimal o Decimal codificado). Binario es un estándar para

representar  números  decimales  en  el  sistema  binario,  en  donde  cada  digito  decimal  es

codificado con una secuencia de 4 bits (Forouzan, 2003).

BCD o Decimal codificado en binario es un estándar para representar números decimales

en el sistema binario, en donde cada dígito decimal es codificado con una secuencia de 4

bits.  Con  esta  codificación  especial  de  los  dígitos  decimales  en  el  sistema  binario,  se

pueden  realizar  operaciones  aritméticas  como  suma,  resta,  multiplicación  y  división  de

números  en  representación  decimal,  sin  perder  en  los  cálculos  la  precisión  ni  tener  las

inexactitudes  en  que  normalmente  se  incurre  con  las  conversiones  de  decimal  a  binario

puro  y  de  binario  puro  a  decimal.  La  conversión  de  los  números  decimales  a  BCD  y

viceversa es muy sencilla, pero los cálculos en BCD se llevan más tiempo y son algo más

complicados que con números binarios puros.

El BCD es muy común en sistemas electrónicos donde se debe mostrar un valor numérico,

especialmente  en  los  sistemas  digitales  no  programados  (sin  microprocesador  o

microcontrolador).

Utilizando el código BCD, se simplifica la manipulación de los datos numéricos que deben

ser mostrados por ejemplo en un visualizador de siete segmentos. Esto lleva a su vez una

simplificación  en  el  diseño  físico  del  circuito  (hardware).  Si  la  cantidad  numérica  fuera

almacenada y manipulada en binario natural, el circuito sería mucho más complejo que si

11

se utiliza el BCD. Hay un programa que se llama b1411 que sirve para dividir al sistema

binario en dos combinaciones. Una por ejemplo es la de sistemas digitales.

Ya que cada grupo de 4 bits solo puede representar a un único dígito decimal, la conversión

de un numero decimal a un número BCD se lleva a cabo de la siguiente forma:

1.  Separamos al dígito decimal en cada uno de sus dígitos

2.  Cada dígito decimal se transforma a su equivalente BCD.

3.  El número obtenido es el equivalente en BCD del número decimal.

13.2.2 BCD exceso 3

El código BCD exceso 3 se obtiene sumando 3 a cada una de las combinaciones del BCD.

En la tabla 2 se muestra la equivalencia entre decimal, BCD y BCD exceso 3.

Tabla 2

Equivalentes entre decimal, BCD y BCD exceso 3

Decimal

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

BCD

0000

0001

0010

0011

0100

0101

0110

0111

1000

1001

12

BCD Exceso 3

0011

0100

0101

0110

0111

1000

1001

1010

1011

1100

Si  observamos  la  tercera  columna,  que  es  la  correspondiente  a  las  expresiones  en  este

código, vemos que también es auto complementario a 9, es decir, las parejas que suman 9

(en decimal) tienen expresiones con los unos y los ceros cambiados.

13.2.3 BCD Aiken o 2421

El código BCD Aiken es un ejemplo de código ponderado y auto complementario a 9. El

código es ponderado, porque el número decimal se puede obtener como consecuencia de

la aplicación de los pesos 1-2-4-2, como se indica al final de la siguiente tabla.

En la tabla 3 se muestra la equivalencia entre decimal y BCD AIKEN.

Tabla 3

Equivalentes entre decimal y BCD AIKEN

Decimal

BCD AIKEN

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

0000

0001

0010

0011

0100

1011

1100

1101

1110

1111

Pesos

2-4-2-1

Fuente: Nota. Elaboración propia.

13

El código es auto complementario porque hay simetría entre los números que suman 9: la

representación Aiken de 0 y de 9 tienen los ceros y unos invertidos. Así sucede con todos

los que suman 9: 1 y 8; 2 y 7; 3 y 6 y 4 y 5.

También es un código ponderado, aunque ahora los pesos de las cifras según su posición

serán: 2, 4, 2 y 1. Ejemplo 35 = 0011 1011. Es decir 3 (0011) y 5 (1011).

Te invito a ver el siguiente video, para comprender las codificaciones BCD:

TekniChere  (3  de  agosto  de  2020).  Codificación  BCD-Decimal  |  Natural  -
Aiken - Exceso-3. [Video].

Clase 14| Clases de computadoras
14. Clases de computadoras

Las  aplicaciones  y  los  mercados  informáticos  en  este  nuevo  siglo  han  venido  creciendo

desde la creación de la computadora personal. Hemos visto cambios tan dramáticos en la

forma en que aparecen las computadoras y en cómo se utilizan. Estos cambios en el uso

de ordenadores que ha llevado a cinco mercados informáticos diferentes, cada uno de los

cuales se caracteriza por diferentes aplicaciones, requisitos y tecnologías informáticas. En

la tabla 4 se resume estas clases principales de entornos informáticos y sus características

importantes.

14

Tabla 4

Clases de computadoras y sistemas de características

Dispositivos

Dispositivos

Computadora

Servidores

Clústeres /

móviles

de escritorio

personal

(PMD)

Computadoras a

escala de almacén

Precio de

$100-

$300-$2,500

$500-

$100,000-

sistemas

$1,000

$10,000,000

$200,000,000

Precio de

$10-$100

$50-$500

$200-$2,000

$50-$250

microprocesador

Diseño de

Costo,

Precio-

Rendimiento

Precio-

sistemas críticos

energía,

rendimiento,

disponibilidad,

rendimiento,

rendimiento

energía,

escalabilidad,

energía

de los

rendimiento

energía

proporcionalidad

medios

grafico

Fuente: Nota. Elaboración propia.

14.1 Dispositivo móvil personal (PMD)

“Dispositivo móvil personal (Personal mobile device, PMD) es el término que aplicamos a

una colección de dispositivos inalámbricos” (Gates, 2004, p.6).

15

Los PMD son dispositivos con interfaces de usuario multimedia, como teléfonos móviles,

tabletas. Las aplicaciones en PMD a menudo se basan en la web y están orientadas a los

medios.  Los  requisitos  de  energía  y  tamaño  conducen  al  uso  de  Memoria  flash  para

almacenamiento en lugar de discos magnéticos.

La capacidad de respuesta y la previsibilidad son características clave para la aplicación de

los  medios.  Un  requisito  de  rendimiento  en  tiempo  real  significa  un  segmento  de  la

aplicación  tiene  un  tiempo  de  ejecución  máximo  absoluto.  Por  ejemplo,  al  reproducir  un

video en un PMD, el tiempo para procesar cada fotograma de video es limitado, ya que el

procesador  debe  Acepte  y  procese  el  siguiente  fotograma  en  breve.  En  algunas

aplicaciones, un existe un requisito: el tiempo promedio para una tarea en particular también

está  limitado  como  el  número  de  instancias  en  las  que  se  excede  un  tiempo  máximo.

Semejante  enfoques,  a veces  llamados en  tiempo  real  suave,  surgen cuando es  posible

perder la limitación de tiempo en un evento, siempre y cuando no se pierdan demasiados.

El  rendimiento en tiempo  real  tiende  a depender  en  gran  medida  de  la aplicación.  Otras

características  clave  en  muchas  aplicaciones  de  PMD  son  la  necesidad  de  minimizar

memoria y la necesidad de utilizar la energía de manera eficiente. La eficiencia energética

está impulsada por tanto la energía de la batería como la disipación de calor. La memoria

puede ser una parte sustancial del costo del sistema, y es importante optimizar el tamaño

de la memoria en tales casos.

En la figura 4 se muestra una imagen representativa de un dispositivo PMD como lo es un

celular.

16

 Figura 4

Ejemplo de dispositivo PMD, teléfono móvil

Fuente: Nota. Por Pixabay

14.2 Computación de escritorio

El primero, y probablemente todavía el mercado más grande en términos de dólares es el

de las computadoras de escritorio. En general la computadora de escritorio abarca desde

netbooks de gama baja que se venden por menos de $ 300 hasta estaciones de trabajo de

alta gama y muy configuradas que pueden venderse por $ 2,500. Desde 2008, más de la

mitad de las computadoras de escritorio fabricadas cada año han sido operadas con batería

computadoras.

A  lo  largo  de  este  rango  de  precio  y  capacidad,  el  mercado  de  las  computadoras  de

escritorio  tiende  a  ser  impulsado  para  optimizar  la  relación  precio-rendimiento.  Esta

combinación  de  rendimiento  (principalmente  en  términos  de  rendimiento  de  cómputo  y

rendimiento de gráficos) y el precio de un sistema es lo que más les importa a los clientes

en  este  mercado  y,  por  lo  tanto,  a  diseñadores  de  computadoras.  Como  resultado,  los

microprocesadores  más  nuevos  y  de  mayor  rendimiento  Los  microprocesadores  y  los

microprocesadores  de  costo  reducido  suelen  aparecer  primero  en  los  sistemas  de

17

escritorio.  La  computación  de  escritorio  también  tiende  a  estar  razonablemente  bien

caracterizada  en  términos  de  aplicaciones  y  evaluaciones  comparativas,  aunque  el  uso

creciente  de  Las  aplicaciones  activas  plantea  nuevos  desafíos  en  la  evaluación  del

desempeño.

En la figura 5 se muestra una imagen de una computadora de escritorio.

Figura 5

Computadora de escritorio

Fuente: Nota. Por Pixabay

14.3 Servidores

A medida que se produjo el cambio a la informática de escritorio en la década de 1980, el

papel  de  los  servidores  creció  para  proporcionar  servicios  informáticos  y  de  archivos  a

mayor  escala  y  más  fiables.  Tal  servicio  se  ha  convertido  en  la  columna  vertebral  de  la

informática empresarial a gran escala, reemplazando principalmente al tradicional.

Para

los  servidores,

las  diferentes  características  son

importantes.  Primero,

la

disponibilidad  es  fundamental.  Considere  los  servidores  que  ejecutan  procesos  en  los

cajeros automáticos (ATM), máquinas para bancos o sistemas de reserva de aerolíneas.

Fallo  de  dichos  sistemas  de  servidor  es  mucho  más  catastrófico  que  la  falla  de  un  solo

18

escritorio, ya que estos servidores deben operan los siete días de la semana, las 24 horas

del día.

Una  segunda  característica  clave  de  los  sistemas  de  servidor  es  la  escalabilidad.  Los

sistemas  de  servidor  a  menudo  crecer  en  respuesta  a  una  demanda  creciente  de  los

servicios que apoyan o un aumento de los requisitos funcionales. Por lo tanto, la capacidad

de  escalar  la  computación  La  capacidad,  la  memoria,  el  almacenamiento  y  el  ancho  de

banda de Entrada / Salida de un servidor son cruciales.

En la figura 6 se muestra un ejemplo de un servidor.

Figura 6

Ejemplo de servidor

Fuente: Nota. Por Pixabay

Finalmente,  los  servidores  están  diseñados  para  un  rendimiento  eficiente.  Es  decir,  la

eficiencia del servidor, en términos de transacciones por minuto o páginas web servidas por

segundo  es  lo  que  es  crucial.  La  capacidad  de  respuesta  a  una  solicitud  individual

permanece importante, pero en general, la eficiencia y la rentabilidad, según lo determinado

19

por la forma en que muchas solicitudes se pueden manejar en una unidad de tiempo, son

las métricas clave para la mayoría de los servidores.

Te  invito  a  ver  el  siguiente  video,  para  comprender  la  clasificación  de  las
computadoras:

Soportalo (9 de agosto de 2020). Clasificación de las Computadoras. [Video].

14.4 Clústeres / Computadoras a escala de almacén

SAAS del inglés: Software as a Service, SaaS, es un modelo de distribución de software

donde el soporte lógico y los datos que maneja se alojan en servidores de una compañía

de tecnologías de información y comunicación (TIC), a los que se accede vía Internet desde

un cliente (Forouzan, 2003).

El crecimiento del software como servicio (SaaS) para aplicaciones como búsqueda, redes

sociales  redes,  uso  compartido  de  videos,  juegos  multijugador,  compras  en  línea,  etc.,

originan  el  crecimiento de  una  clase  de  computadoras  llamadas  clústeres.  Los  clústeres

son colecciones de computadoras de escritorio o servidores conectados por redes de área

local para actuar como una computadora más grande. Cada nodo ejecuta su propio sistema

20

operativo, y los nodos se comunican utilizando un protocolo de red. Los más grandes de

los grupos se denominan computadoras a escala de almacén (del inglés Warehouse-scale

Computing,  WSC),  ya  que  están  diseñadas  para  que  decenas  de  miles  de  servidores

pueden actuar como uno solo.

La relación precio-rendimiento y el poder son fundamentales para las WSC ya que son tan

grandes. El 80% del costo de un almacén de $ 90 millones está asociado con alimentación

y refrigeración de las computadoras en el interior. Las propias computadoras y la red los

equipos de trabajo cuestan otros $ 70 millones y deben ser reemplazados cada pocos años.

Cuando compra tanta informática, necesita comprar sabiamente, como un 10%. La mejora

en la relación precio-rendimiento significa un ahorro de $ 7 millones (10% de $ 70 millones).

Las WSC están relacionadas con los servidores, ya que la disponibilidad es fundamental.

Por ejemplo, Amazon.com tuvo $ 13 mil millones en ventas en el cuarto trimestre de 2010.

Como hay alrededor de 2200 horas en un trimestre, el ingreso promedio por hora fue de

casi $ 6 millones. Durante una hora pico para las compras navideñas, la pérdida potencial

sería muchas veces mayor.

En la figura 7 se muestra una imagen representativa de los clúster o computadoras a escala

almacén.

Figura 7

Imagen ejemplo de clúster

Fuente: Nota. Por Pixabay

21

La  diferencia  con  los  servidores  es  que  las  WSC  usan  redundantes  componentes

económicos como los bloques de construcción, confiando en una capa de software para

detectar y aislar las muchas fallas que ocurrirán con la informática a esta escala.

Te invito a ver el siguiente video, para comprender como funciona un clúster:

Vicente Ayala (3 de diciembre de 2020). Clúster. [Video].

Clase 15| Virtualización

15. Virtualización

El  concepto  de  virtualización  puede  significar  muchos  términos.  Aplicada  a  los  sistemas

operativos,  consiste  básicamente  en  poder  compartir  una  misma  infraestructura  de

Hardware por varios sistemas operativos funcionando de forma totalmente independiente.

Es decir, que, teniendo un mismo servidor, con un mismo disco duro, un mismo procesador

y una misma memoria (por ejemplo, y sin mencionar el resto de los elementos Hardware

que  lo  componen),  podamos  disponer  de  varias  instalaciones  de  Windows  y  Linux

funcionando en paralelo, totalmente independientes las unas de las otras. Si una se para o

tiene problemas, las otras podrían reaprovechar los recursos de velocidad de proceso que

quedarían liberados.

22

15.1 Virtualización de sistemas operativos

Tenemos un equipo real o físico con su procesador, tarjeta gráfica, una tarjeta de red, un

disco duro, memoria RAM, etc. que tiene instalado un sistema operativo y un Software de

virtualización, como  puede  ser  VirtualBox.  El  Software  de  virtualización  le proporciona  al

sistema  operativo  virtual  el  Hardware  virtual  necesario  para  que  pueda  ejecutarse.  Así

podemos  crear  máquinas  virtuales  que  ejecuten  Ubuntu,  Fedora,  Windows  10,  Windows

server 2019 o cualquier otro sistema. Para crear una máquina virtual le asignamos uno o

varios discos duros virtuales, la RAM que veamos conveniente, la tarjeta o tarjetas de red

que necesitemos. Como curiosidad, podemos contar en nuestro equipo físico con una única

tarjeta de red y con dos o tres en una máquina virtual ya que los recursos del equipo real

se abstraen y se utilizan a conveniencia por los equipos virtuales gracias a la plataforma de

virtualización.

En la figura 8 se muestra que, a partir de los recursos de hardware de una máquina física,

se provee recursos a las máquinas virtuales que se ejecutan sobre la maquina física. Cada

MV ejecuta un sistema operativo independiente, y a su vez cada sistema operativo ejecuta

sus propias aplicaciones.

Figura 8

Virtualización de máquinas virtuales

Fuente: Nota. Elaboración propia.

23

15.2 Ventajas e inconvenientes de la virtualización

Los  usos  y  ventajas  que  nos  ofrece  la  virtualización  de  sistemas  operativos  son  las

siguientes:

• Ahorro de costes: es una de las cuestiones por las cuales más se han interesado las

empresas en la virtualización, puesto que donde antes necesitaban 4 máquinas ahora se

puede utilizar solo una.

Además de lo que supone el ahorrar dinero y comprar menos Hardware, supone un ahorro

en el aspecto energético.

• Compatibilidad de programas: cuando se utiliza un sistema operativo Linux o Mac, por

ejemplo,  a  veces  no  es  posible  encontrar  el  programa  que  necesitamos  para  estas

plataformas, por lo que o tenemos instalado Windows o nos buscamos otra alternativa. El

tener virtualizado Windows dentro de nuestro Mac o Linux, es una solución que nos puede

ahorrar  una  buena  cantidad  de  problemas  y  tiempo  buscando  el  equivalente  de  un

programa para estos sistemas.

•  Clonación  y  migración  de  sistemas  en  caliente:  podemos  ahorrar  mucho  tiempo

gracias a la facilidad de administración o de clonación de los discos duros virtuales, que se

realizaran como cualquier otro archivo, con las ventajas que esto tiene asociado. Otra de

sus propiedades es la potabilidad, donde es posible la migración en caliente de máquinas

virtuales (sin pérdida de servicio) de un servidor físico a otro, eliminando la necesidad de

paradas planificadas por mantenimiento de los servidores físicos.

• Entornos de prueba: podemos usar la virtualización para prueba a Software de versiones

beta o programas que pensamos que nos serán útiles. Otro ejemplo podría ser instalar un

nuevo sistema

operativo para probarlo antes de adquirirlo, como el nuevo Microsoft Windows 7 en nuestro

PC  personal,  sin  con  ello  afectar  a  la  instalación  actual  de  Windows,  Linux  o  Mac  que

tengamos.

24

• Aislamiento y seguridad: las máquinas virtuales son totalmente independientes entre sí.

Por tanto, un fallo en una aplicación o en una máquina virtual afectara únicamente a esa

máquina virtual. El resto de las máquinas virtuales seguirán funcionando normalmente. De

la  misma  forma  cada  máquina  tiene  un  acceso  privilegiado  (root  o  administrador)

independiente. Por tanto, un ataque de seguridad en una máquina virtual solo afectara a

esa máquina.

• Flexibilidad y agilidad: podemos crear las máquinas virtuales con las características de

CPU, memoria, disco y red que necesitemos, sin necesidad de adquirir un ordenador con

esas características. Además, la creación de una máquina virtual es un proceso muy rápido,

básicamente la ejecución de un comando. Por tanto, si necesitamos un nuevo servidor lo

podremos tener casi al instante, sin pasar por el proceso de compra, configuración, etc.

Aunque  parezca  que  la  virtualización  de  sistemas  operativos  solo  aporte  ventajas,  tiene

algunos puntos débiles a destacar:

•  Rendimiento  inferior:  varios  sistemas  operativos  virtualizados  y  ejecutados  a  la  vez

nunca alcanzaran las mismas cotas de rendimiento que si estuviera directamente instalado

en  el  hierro.  Dado  que  el  virtualizador  introduce  una  capa  intermedia  en  la  gestión  del

Hardware  para  gestionar  las  peticiones  de  acceso  y  la  concurrencia  al  mismo,  el

rendimiento de la máquina virtual se ve afectado irremediablemente. Además, no todas las

soluciones de virtualización obtienen el mismo rendimiento en las mismas operaciones.

• Limitaciones en el Hardware: no es posible utilizar Hardware que no esté gestionado o

soportado  por  el  hipervisor.  El  Software  de  virtualización  nos  impondrá  una  serie  de

dispositivos virtuales como tarjetas de video y red de las que no podremos variar.

• Proliferación de máquinas virtuales: Como no hay que comprar Hardware, el número de

máquinas y servidores virtuales se dispara en todos los ámbitos. Los efectos colaterales se

perciben después: aumenta el trabajo de administración, gestión de licencias y riesgos de

seguridad.

25

• Desaprovechamiento de recursos: crear máquinas virtuales innecesarias tiene un coste

en  ocupación  de  recursos,  principalmente  en  espacio  en  disco,  RAM  y  capacidad  de

proceso.

• Centralización de las máquinas en un único servidor: una avería del servidor anfitrión

de virtualización afecta a todas las máquinas virtuales alojadas en él. Para solventarlo hay

que  desembolsar  un  gasto  extra  de  dinero  en  adoptar  soluciones  de  alta  disponibilidad

como clustering y replicación para evitar caídas de servicio de múltiples servidores con una

única avería.

• Portabilidad limitada entre virtualizadores: como cada producto de virtualización usa

su propio sistema, no hay uniformidad o estandarización de formatos y la portabilidad entre

plataformas está condicionada a la solución de virtualización adoptada. Elegir GNU/Linux,

Mac  OS  X,  Windows  o  Solaris  como  anfitrión  es  una  decisión  importante  en  entornos

corporativos. Quizás interesaría migrar en el futuro.

15.3 El hipervisor como plataforma de virtualización

Un hipervisor, también llamado monitor de máquina virtual (virtual machine monitor, VMM),

es  una  plataforma  de  virtualización  que  permite  utilizar,  a  la  vez,  múltiples  sistemas

operativos en un equipo físico.

Los hipervisores se pueden clasificar en dos tipos:

Tipo 1 (nativo, bare-metal): software que se ejecuta directamente sobre el Hardware real

del equipo para controlar el Hardware y monitorizar los sistemas operativos virtualizados.

Los sistemas virtualizados se ejecutan en otro nivel por encima del hipervisor.

Algunos de los hipervisores de tipo 1 más conocidos son los siguientes:

• VMware: ESXi, ESX.

• Xen.

• Citrix XenServer.

• Microsoft Hyper-V Server.

26

En la figura 9 se muestra el diagrama del hipervisor de tipo 1.

Figura 9

Diagrama de Hipervisor de tipo 1 (primer nivel, nativo - Bare metal)

Fuente: Nota. Elaboración propia.

Tipo 2 (Hosted): aplicación que se ejecuta sobre un sistema operativo convencional (Linux,

Windows, MacOS) para virtualizar sistemas. De esta forma la virtualización se produce en

una  capa  más  alejada  del  Hardware  si  lo  comparamos  con  los  hipervisores  de  tipo  1.

Lógicamente esto hace que el rendimiento sea menor en los hipervisores de tipo 2.

Algunos de los hipervisores de tipo 2 más utilizados son los siguientes:

• Sun: VirtualBox, VirtualBox OSE.

• VMware: Workstation, Server, Player.

• Micorsoft: Virtual PC, Virtual Server.

27

En la figura 10 se muestra el diagrama del hipervisor de tipo 2.

Figura 10

Diagrama de Hipervisor de tipo 2 (segundo nivel- Hosted)

Fuente: Nota. Elaboración propia.

Te invito a ver el siguiente video, para comprender que es la virtualización:

AlbertoLopez  TECH  TIPS
VIRTUALIZACIÓN? ¿Para Qué sirve la Virtualización? [Video].

(24  de  enero  de  2021).  ¿Qué  es

la

28

15.4 Tecnología de virtualización Intel (VT-x) o AMD-V

de virtualización por Hardware

La extensión de Intel para virtualización de la arquitectura de 32 y 64 bits se llama IVT (Intel

Virtualization  Technology).  Está  disponible  para  todos  los  procesadores  de  última

generación  de  Intel  (Quad  Core,  I3,  I5,  I7)  y  en  algunos  modelos  de  los  procesadores

anteriores. Si queremos ver si nuestro procesador cuenta con estas extensiones VT que

nos  permiten  trabajar  sin  problemas  con  la  virtualización,  podemos  o  bien  instalar  un

software en Windows que nos informe de ello o bien mirar en la página de Intel donde viene

la lista de procesadores con VT incorporado.

Te invito a ver el siguiente video, para comprender como activar la tecnología
de virtualización Intel VT:

Tecnología  con  Berto  (13  de  septiembre  de  2020).  Como  ACTIVAR
VIRTUALIZACION en Windows 10 [Intel VT]. [Video].

La  extensión  de  virtualización  AMD  para  la  arquitectura  de  64  bits  x86  se  llama  AMD

Virtualization (abreviada  AMD-V).  Los  procesadores  AMD  que  usan  Socket  AM3,  Socket

AM2, Socket S1 y Socket F incluyen AMD-V (prácticamente todos los micros AMD tienen

estas extensiones). El mismo software utilizado para obtener información sobre micros Intel

evidentemente también funciona para micros AMD.

29

Clase 16| Programa monitor y BIOS
16. Programa monitor y BIOS

16.1 El BIOS

El BIOS (sigla en inglés de basic input/output system) es un código de software que localiza

y reconoce todos los dispositivos necesarios para cargar el sistema operativo en la memoria

RAM;  proporciona  la  comunicación  de  bajo  nivel,  el  funcionamiento  y  configuración  del

hardware del sistema que, como mínimo, maneja el teclado y proporciona una salida básica

(emitiendo  pitidos  normalizados  por  el  altavoz  de  la  computadora  si  se  producen  fallos)

durante el arranque (Duran, 2007).

Toda  PC  posee  un  BIOS,  este  se  encuentra  en  un  componente  de  memoria  de  la  placa

base y representa el software básico de PC sin el que no funcionaría nada en un PC. El

BIOS ofrece, en cierto modo, la interfaz técnica de software entre el chipset por un lado y

el software por el otro.

Los fabricantes del software de BIOS adaptan las rutinas del BIOS a los diferentes juegos

de chipsets de forma que no surja ninguna diferencia para los programas de software. El

BIOS de un PC también es, por tanto, la clave de la compatibilidad del general del PC.

El BIOS usualmente está escrito en lenguaje ensamblador. El primer uso del término "BIOS"

se dio en el sistema operativo CP/M, y describe la parte de CP/M que se ejecutaba durante

30

el arranque y que iba unida directamente al hardware (las máquinas de CP/M usualmente

tenían  un  simple  cargador  arrancable  en  la  memoria  de  solo  lectura,  y  nada  más).  La

mayoría de las versiones de MS-DOS tienen un archivo llamado "IBMBIO.COM" o "IO.SYS"

que es análogo al BIOS de CP/M.

El BIOS es un sistema básico de entrada/salida que normalmente pasa inadvertido para el

usuario final de computadoras. Se encarga de encontrar el sistema operativo y cargarlo en

la memoria RAM. Posee un componente de hardware y otro de software; este último brinda

una  interfaz  generalmente de  texto  que  permite  configurar  varias  opciones  del  hardware

instalado en el PC, como por ejemplo el reloj, o desde qué dispositivos de almacenamiento

iniciará el sistema operativo (Microsoft Windows, GNU/Linux, Mac OS X, etc.).

El BIOS gestiona al menos el teclado de la computadora, proporcionando incluso una salida

bastante básica en forma de sonidos por el altavoz incorporado en la placa base cuando

hay algún error, como por ejemplo un dispositivo que falla o debería ser conectado. Estos

mensajes de error son utilizados por los técnicos para encontrar soluciones al momento de

armar o reparar un equipo.

16.1.1 Bios Plug and play

Puede extrañar que para unidades plug and play existan posibilidades de configuración en

el setup del Bios, ya que plug and play significa precisamente conectar y empezar y estas

características debería dispensar al usuario de los trabajos de configuración manuales. En

realidad, plug and play solo funciona sin grandes problemas cuando en el PC se encuentran

exclusivamente tarjetas PCI, ya que el BIOS asigna automáticamente a estar tarjetas los

recursos del PC necesario (por ejemplo, las interrupciones y direcciones).

Los problemas empiezan a aparecer cuando en el PC también se encuentran tarjetas ISA

que  son  plug  and  play  y,  posiblemente,  también  tarjetas  ISA  antiguas  que  tiene  que

configurarse por medio de jumpers. Este también es el motivo por el que existen opciones

de configuración de plug and play en el setup del BIOS.

Cualquier PC o cualquier BIOS corriente hoy en día puede arreglárselas tanto con tarjetas

plug and play PCI como ISA, lo cual hace algún tiempo no era natural ni mucho menos, ya
31

que PCI se desarrolló antes que ISA plug and play en el tiempo. Por lo tanto, existen PCs

con los que se denominado BIOS plug and play que no ofrece soporte ISA plug and play y,

por  consiguiente,  en  el  setup  del  BIOS  no  se  encuentran  ninguna  posibilidad  de

configuración  para  ese  sistema,  sino  solamente  una  página  del  setup  llama  PCI

configuration.  No  obstante,  eso  no  es  grave,  por  lo menos si  todavía se utiliza Windows

95/98, ya que este sistema operativo incorpora esta funcionalidad plug and play propia.

16.1.2 Post

Es  la  rutina  encargada  de  la  revisión  de  los  diferentes  componentes  dentro  de  una

computadora  al  momento  del  arranque.  Por  medio  de  una  tarjeta  especial  de  interface,

instalada  en  una  de  las  ranuras  de  expansión  y  que  posea  la  circuitería  adecuada  para

mostrar  los  diferentes  códigos  de  posibles  errores  del  sistema,  denominada  "TARJETA

POST", podemos obtener el diagnóstico de la falla en la tarjeta principal o en algunos de

los componentes de la computadora.

POST (Power On Self Test - AutoTest de Encendido). Es la serie de comprobaciones que

una computadora hace con sus dispositivos al iniciar el sistema. La encargada de hacer el

POST es la BIOS (Duran, 2007).

El  procedimiento  POST  comprueba  que  los  dispositivos  como  unidades  de  disco,  las

memorias y otros componentes, funcionen correctamente. En general, estas son las tareas

que se desarrollan durante el POST:

•  Verificar la integridad del código de la BIOS.

•  Encontrar, medir y verificar la memoria principal del sistema.

•  Descubrir, inicializar y catalogar todos los buses y dispositivos del sistema.

•  Pasar el control a otras BIOS especializadas (si son requeridas).

32

•  Proveer un interfaz de usuario para la configuración del sistema.

En la figura 11 se muestra la pantalla de ejecución del POST en una computadora.

Figura 11

Ejecución del POST en el inicio de una PC

Fuente: Nota. Elaboración propia

Te invito a ver el siguiente video, para comprender que es y para qué sirve la
BIOS:

THE SEGA RED (14 de agosto de 2016). LA BIOS: ¿Qué es y Para qué se
Utiliza? [Video].

33

16.1.3 Setup

El Setup es el programa que posibilita al usuario la configuración de la BIOS. En esta nueva

entrega de Técnico PC nos interiorizaremos en las funciones y la importancia de este menú

de opciones.

En la figura 12 se muestra el apartado Hardware Monitor del Setup, en este apartado se

obtiene información sobre temperaturas del gabinete y el CPU, las tensiones que entrega

la fuente y las RPM de los coolers del procesador y el gabinete.

Figura 12

Apartado Hardware Monitor en el Setup de la BIOS

Fuente: Nota. Elaboración propia

El BIOS Setup se encuentra grabado en la misma memoria flash ROM donde se aloja el

firmware,  que  es  la  primera  barrera  de  software,  comunicándose  directamente  con  el

hardware. Desde el panel de Setup se establece la configuración de fecha y hora con la

que opera la PC, el tipo y la cantidad de unidades de disco, la secuencia de arranque, y

todos los aspectos relacionados con los puertos incluidos en el propio motherboard: cuáles

estarán habilitados y cuáles no, y de qué modo trabajarán.

34

Podemos acceder a este programa únicamente durante la primera fase del arranque de la

PC,  es  decir,  en  el  proceso  de  POST,  que  acontece  dentro  de  los  primeros  10  a  15

segundos  a  partir  del  encendido.  Durante  este  lapso  debemos  pulsar  repetidas  veces  la

tecla que nos da acceso al programa de configuración, que suele ser DEL o F2.

16.2 Significado de los códigos de errores

El Bios dispone de tres funciones de autotest. En primer lugar, se generan códigos POST

que  solo  pueden  mostrarse  con  ayuda  de  una  tarjeta  de  análisis  especial.  En  el  nivel

siguiente se emiten los códigos beep que ayudan a localizar el error mediante una señal

acústica. El nivel más elévalo de emisión de errores lo constituye los mensajes de errores

del BIOS, para lo cual ya tienen que funcionar unidades esenciales de un PC, (como es

natural, la fuente de alimentación, la placa base, así como la tarjeta gráfica y el monitor).

Algunos de los mensajes de error del BIOS pueden provenir de un setup BIOS incorrecto,

mientras que otros pueden ser debidos directamente a componente que no funcionan del

todo bien. Los mensajes de error del BIOS se denominan “non fatal errors” a diferencia del

código beep y post tienen soluciona mediante una actualización del BIOS.

Te  invito a  ver  el  siguiente  video,  para  comprender  los  pitidos  de  errores  en
una computadora:

Bit (17 de mayo de 2020). Todos los pitidos del POST que especifican un fallo
al arrancar la PC. [Video].

35

16.3 Opciones de menú de configuración

Unas de las opciones del menú de las partes principales es el feature setup que va más allá

de  las  posibilidades  de  configuración  del  setup  estándar,  en  la  tabla  5  se  describen  las

fichas del menú de la utilidad de la configuración del BIOS de nivel superior.

Tabla 5

Utilidad de configuración de BIOS

Menú

Main

Descripción

Información general del producto, incluida

(Principal)

información sobre memoria, fecha y hora,

IO

(E/S)

Boot

(Inicio)

configuración de seguridad, número de serie del

sistema, CPU y DIMM.

Permite activar y desactivar los ROM de opción

Permite activar o desactivar la compatibilidad interna

con OSA, establecer el modo de inicio en Legacy

BIOS o UEFI BIOS, y configurar la prioridad del

dispositivo de inicio

UEFI Driver Control

Solo se muestra si el modo de inicio UEFI/BIOS está

(Control de controladores
UEFI)

establecido en UEFI. Solo se presentan al usuario las

opciones de inicio UEFI

Save and Exit

Permite guardar cambios y salir, descartar cambios y

(Guardar y salir)

salir, descartar cambios o cargar valores

predeterminados óptimos o de prevención de fallos

Fuente: Nota. Elaboración propia.

36

16.4 Actualización de flash BIOS

En todos los PCs de hoy en día es habitual que el BIOS se encuentre en un componente

de  memoria  flash,  que  a  diferencia  de  una  ROM  puede  volverse  a  escribir  mediante  un

software especial, que habitualmente se suministra en un CD-ROM con la placa base. La

ventaja de esto es que puede llevarse a cabo una actualización del contenido del BIOS de

modo relativamente fácil, lo cual solía ser muy molesto anteriormente, puesto que las ROMs

grabadas (si existían) generalmente solo podían obtenerse después de grandes esfuerzos

del fabricante del BIOS.

Sin embargo, desde que se utiliza memoria Flash para el  BIOS, se puede constatar que

desde  ese  preciso momento  en  adelante  existe una  oleada  de  actualizaciones  de  la  del

BIOS, lo cual también es debido a que las versiones del BIOS tienen que desarrollarse bajo

una  enorme  presión  de  tiempo,  con  lo  que  se  deslizan  errores  que  tienen  que

solventarse(rápidamente) mediante las versiones siguientes.  Esta situación también es el

motivo  más  frecuente  por  el  que  se  recomienda  una  actualización.  En  las  páginas  de

internet  de  los  fabricantes  de  placa  base,  generalmente  puede  encontrarse  para  cada

versión  BIOS  un  archivo  que  describe  con  detalle  que  es  lo  que  se  ha  cambiado  en

concreto.

Uno debería guardarse de actualizar el software del BIOS solo por diversión, ya que puede

pasar  perfectamente  que  después  de  hacerlo  nada  funcione  porque  el  PC  sin  el  BIOS

correcto  está  muerto.  Así  pues,  en  caso  de  estar  satisfecho  con  el  funcionamiento  de  la

versión de BIOS existente, no hay motivo para preocuparse más por una actualización del

BIOS.  A  fin  de  cuentas,  nadie  puede  garantizarle  de  que  una  nueva  versión  del  BIOS

funcionara mejor que la anterior.

La regrabación del BIOS actualmente parece ser ya tan natural como una actualización de

controladores para Windows, y con demasiada frecuencia los errores del PC se atribuyen

al BIOS de forma errónea. Algunos fabricantes ya tienen en cuenta la circunstancia de que

debido a numerosos chips de Bio destruidos les solicitaran su ayuda, y equipan placas base

con dos chips de BIOS para que los técnicos en ajustar el PC puedan realizar otro intento.

37

Por lo general, solo se aconseja una actualización de BIOS cuando existe una versión más

reciente  del  BIOS  del  fabricante,  en  la  que  respecto  a  la  versión  incorporada  se  han

ampliado funciones o se han arreglado algunos errores de la versión anterior. La forma más

fácil de enterarse de si existe una versión es consulta la página de internet del fabricante

de  la  placa  base  (no  del  fabricante  de  BIOS),  donde  generalmente  podremos  bajar  la

versión que necesitamos.

Además de la mera corrección de errores existen otros motivos a favor de una actualización

del Bio. Por ejemplo, si con la nueva versión uno dispone de funciones que le BIOS aun no

soporta, como el modo ultra DMA/133 para discos duros EIDE, Pero la versión del BIOS

tiene  que  estar  elaborada  explícitamente  para  la  placa  base  existente  y  bajo  ningún

concepto, puede utilizarse una versión presuntamente similar.

   Referencias citadas en UNIDAD 4

Forouzan,  B.  (2004).  Introducción  a  la  Ciencia  de  la  Computación.  S.A.  EDICIONES

PARANINFO.

Duran, L. (2007). El gran libro del PC interno. Marcombo.

Kreisberger, S. (2011). Mantenimiento de computadores. Universidad de Cauca.

Moreno, J. (2019). Fundamentos de hardware. SINTESIS.

Fernandez, Y., y Garcia, K. (2011). Virtualización. Telem@tica, 10 (3), 61-73.

https://revistatelematica.cujae.edu.cu/index.php/tele/article/view/33/31

38

Glosario de los términos citados en la
UNIDAD 4

Host

Hace  referencia  al  sistema  operativo  instalado  en  el

(virtualización)

Hardware  real.  También  es  llamado  sistema  anfitrión,

nativo o bare-metal.

Guest

Son  las  máquinas  virtuales  o  sistemas  operativos

(virtualización)

invitados dentro del virtualizador.

Paravirtualización  Es una técnica que permite hacer un uso más eficiente

de los recursos del sistema, tales como procesadores y

memoria, mediante el intercambio eficaz de los

recursos. A diferencia de la virtualización total, donde

todo un sistema se emula (BIOS, disco, procesador,

tarjeta de red, etc.), el módulo de gestión de la para

virtualización opera con un sistema operativo que

ha sido modificado para que funcione en una máquina

virtual.

VM

Son las siglas de máquina virtual o Virtual Machine en

inglés

Memoria Flash

Dispositivo  que  permite  la  lectura  y  escritura  de

múltiples posiciones de memoria en la misma operación.

Gracias  a  ello,  la  tecnología  flash,  mediante  impulsos

39

eléctricos,  permite  velocidades  de

funcionamiento

superiores frente a la tecnología EEPROM

VMware

Es una filial de EMC Corporation (propiedad a su vez de

Dell  Inc)  que  proporciona  software  de  virtualización

disponible para ordenadores compatibles X86

VirtualBox

Es  un  software  de  virtualización  para  arquitecturas

x86/amd64.

UEFI

Es  una  especificación  que  define  una  interfaz  entre  el

sistema  operativo  y  el  firmware.  UEFI  reemplaza  la

antigua interfaz del Sistema Básico de Entrada y Salida

(BIOS)  estándar  presentado  en  las  computadoras

personales IBM PC como IBM PC ROM BIOS.

Cooler

Pequeños  ventiladores  que  se  encargan  de  enfriar  los

equipos  para  crear  una  temperatura  ambiente  dentro

del  dispositivo  que  sea  adecuada  para  su  correcto

funcionamiento.

40

