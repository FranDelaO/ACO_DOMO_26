ARQUITECTURA DE
COMPUTADORAS

UNIDAD
  1

ORGANIZACIÓN DE
COMPUTADORAS

1

Se  prohíbe  la  reproducción  total  o  parcial  de  esta  obra,  por  cualquier
medio,  electrónico  o  mecánico  sin  la  autorización  de  la  Dirección  de
Educación a Distancia (UDB Virtual).

Dirección de Educación a Distancia

Apartado Postal, 1874, San Salvador, El Salvador

Tel: 2251-8200 ext: 1743

2

Sumario

Introducción ....................................................................................................................................... 4

Clase 1| Modelo Von Neumann ......................................................................................... 6

Clase 2| organización y arquitectura de computadoras .................................................... 18

Clase 3| Estructura funcional: CPU, Memoria, Interfaces de entrada salida ..................... 34

Clase 4| Necesidad de un bus de interconexión ....................................................................... 51

Referencias citadas ........................................................................................................................ 66

Glosario ............................................................................................................................................ 67

3

Introducción de
la asignatura

En la actualidad, las computadoras han avanzado mucho y se han convertido en

herramientas  para  beneficios  de  nuestra  vida  cotidiana,  por  esta  razón  son

ampliamente utilizadas en la realización de exposiciones, tareas, investigaciones y

en el aprendizaje académico; por ello, que se le reconoce la importancia de esta

herramienta tecnológica.

En esta asignatura se pretende desarrollar la competencia de implementación de

estructuras  de  redes  para  el  intercambio  de  información  y/o  comunicación

considerando la administración de hardware y software de seguridad a partir de las

normas

internacionales,  para  esto  se  empleará  diversas  herramientas  de

aprendizaje  como  prácticas  de  laboratorio,  implementación  de  gestión  de  la

arquitectura  de  computadoras  a  través  de  diversas  actividades  como  desafíos  y

proyectos.  Las  actividades  ayudarán  al  estudiante  a  mostrar  la  capacidad  de

desarrollar  sistemas,  arquitecturas  informáticas  centralizadas  o  distribuidas,

integrando  hardware  y  software  de  acuerdo  a  los  conocimientos  adquiridos.

Además,  el  estudiante  deberá  movilizar  conocimientos  de  sistemas  digitales

combinacionales y digitales, sistemas basados en microprocesadores, interfaces y

controladores y la organización de computadores.

El  propósito  principal  de  esta  asignatura  es  que  los  estudiantes  desarrollen

competencias  necesarias  sobre  las  estructuras  de  las  computadoras,  para

satisfacer  las  necesidades  de  hardware  y  software,  basándonos  en  las  señales

digitales y el uso de sistemas para la comunicación interna de los componentes que

conforman  la  arquitectura  de  una  pc  estudiando  los  sistemas  numéricos,

compuertas  lógicas  y  los  últimos  desarrollos  tecnológicos  y así poder administrar

sistemas computacionales de acuerdo a la interrelación de sus componentes y de

la operación que ejecuta cada uno.

4

El  estudiante  implementara  la  integración  de  la  programación  y  el  intérprete  de

comandos a través de los lenguajes de python y bash que son lenguajes que nos

permiten una comunicación interna de la máquina a través de cada instrucción de

nuestro código creado.

Finalmente, exploramos los conceptos y el funcionamiento del internet de las cosas

(en inglés, Internet of things, abreviado IoT), en donde nuestra red de objetos físicos

o  elementos  electrónicos,  software,  sensores  y  conectividad  a  red,  nos  permiten

intercambiar y almacenar datos, lo cual nos brinda mayor eficiencia en el proceso

de ciertas actividades y precisión en la toma de datos de estas, lo cual nos traerá

muchos  beneficios  a  largo  plazo  en  diversos  campos  en  donde  ya  se  encuentra

implementando esta tecnología.

5

Clase 1| Modelo Von Neumann
1.  Fundamentos de arquitectura
computacional

El  ordenador,  tal  y  como  la  conocemos  en  la  actualidad,  poco  difiere  de  la  propuesta

presentada hace tres décadas por IBM, cuando presentó en sociedad su producto estrella:

el IBM PC XT. A pesar de haber pasado mucho tiempo desde entonces, todo no ha sido

más que un devenir de avances tecnológicos que se han soportado sobre la misma base

esencial. Esa base responde a la arquitectura marcada por Von Neumann donde planteaba

de forma clara y concreta cuál debía ser el modelo conceptual de los ordenadores. Lejos

de intentar hacer un análisis exhaustivo de la arquitectura buscando el objetivo práctico de

la misma, sí que resulta imprescindible conocer algunos puntos básicos. Sólo así se puede

entender realmente cómo funciona el PC. Por tanto, es importante conocer, las nociones

básicas de cómo son los ordenadores, según Von Neumann y en contraste directo con la

arquitectura práctica actual.

1.1 Definición de computadoras

Un computador, es un dispositivo electrónico capaz de procesar información. Esto
se realiza mediante instrucciones especificas dadas por un operador humano, estas
instrucciones están contenidas en un programa también llamado software. Debe
quedar claro entonces que un computador no es más que una máquina que realiza
una a una las instrucciones que se le imparten o entreguen, sin considerar si son
erróneas, o moralmente censurables (Guevara, 2006).

6

El nombre de PC es original de IBM que quiso así distinguir este tipo de máquina de otras

contemporáneas  que  eran  multiusuario,  es  decir,  capaces  de  trabajar  con  más  de  una

persona a la vez. El PC, por tanto, era una  máquina monousuaria, tal como lo podemos

apreciar en la figura 1.

Figura 1

Primer PC XT de IBM

Fuente: Nota. Por Wikipedia (2017).

La importancia de este primer diseño de IBM fue crucial ya que marcó los estándares de

compatibilidad  de  las  máquinas  que  se  fueron  sucediendo.  Muchos  eran  los  modelos

similares al PC en su día e, incluso, algunos con más prestaciones específicas (como los

Atari para el manejo de sonido, por ejemplo). Sin embargo, la estrategia de los ingenieros

de  IBM  de  hacer  pública  la  arquitectura  del  PC  consiguió  que  en  un  breve  intervalo  de

tiempo fueran muchas las empresas que fabricaban los dispositivos periféricos. Desde ese

momento, a todos los microordenadores que siguieron la compatibilidad marcada por el PC

pero  que  no  fueron  fabricados  por  IBM  se  les  denominó  “clónicos”.  Este  término,

actualmente, hace referencia a cualquier PC que no tiene una marca reconocida, sino que

está  ensamblado  a  partir  de  diferentes  componentes.  Esto  no  tiene  por  qué  ser  una
7

valoración  despectiva,  es  más:  los  clónicos  aportan  una  mayor  flexibilidad  (admiten

componentes de todos los fabricantes) y, por supuesto, son equipos “a la medida” ya que

se puede diseñar en detalle cada uno de los componentes que se desea integrar.

1.2  Arquitectura del modelo de Von Neuman

Los distintos bloques funcionales que conforman una computadora deben estar siempre
conectados entre sí; es decir que no hay que modificar el hardware o su configuración a la hora
de ejecutar un programa (Von Neumann, 1945).

No obstante, antes de entrar a conocer cada uno de los elementos de un PC, paso previo

y  obligado  al  ensamblaje  de  la  máquina,  resultará  útil  conocer  algunos  aspectos

fundamentales de la Informática en su plano más genérico. El principal para seguir un orden

lógico es el análisis de la arquitectura de la máquina, es decir, qué bloques en el ámbito

conceptual la integran y, lo que es más importante, por qué. Sólo a partir de ese momento

se podrán abordar con propiedad los aspectos más técnicos y tangibles de estas máquinas.

Es  importante  conocer  el  contexto  contemporáneo  de  Von  Neumann  donde  existieron

numerosas iniciativas para potenciar una ciencia (que se denomina Automática).  Es cierto

que ya existen máquinas capaces de realizar trabajos específicos, pero es preciso definir

un estándar que determine cómo deben ser los computadores a partir de ese momento Von

Neumann propone el modelo simplificado. En la figura 2, se muestra el modelo simplificado

propuesto por Von Neumann.

8

Figura 2

Arquitectura Von Neumann

Fuente: Nota. Elaboración propia, a partir de Pozuelo (2010).

Para entender en detalle el funcionamiento de Von Neumann, se va a analizar cada uno de

los elementos integrados según Pozuelo (2010):

-Memoria  Principal:  Von  Neumann  percibe  la  necesidad  de  almacenamiento

temporal de datos para ejecuciones puntuales. Esto es, además de la posibilidad de

poder  almacenar  unos  datos  de  forma  temporal,  habilitar  un  espacio  donde  sea

posible ubicarlos mientras dura el proceso, momento en el que se decidirá qué hacer

con ellos. Este espacio deberá ser igualmente válido para instrucciones como para

datos y habrá de dividirse en celdas de igual tamaño y referenciales mediante una

dirección.

-Unidad Aritmética: La unidad aritmética es como una zona encargada de realizar

operaciones básicas, tanto numéricas como lógicas. Todos los datos los recibirá de

la memoria principal y en ella almacenará los resultados. Dispone de una serie de

registros internos a modo de memoria y también permitirán el almacenamiento de

datos. Éste es el planteamiento inicial de la unidad aritmeticológica, parte integrada

del  microprocesador,  si  bien  Von  Neumann

lo  consideraba  un  elemento

diferenciador.

9

-Unidad de Control: La unidad de control es como la encargada de controlar todas

las  señales  para  que  el  proceso  funcione.  Lee  las  instrucciones  de  la  memoria

principal y se encarga de su ejecución. Una parte importante de este módulo es el

puntero  que  guardará  la  dirección  de  la  próxima  instrucción  a  leer.  Junto  con  la

unidad  aritmética,

la  unidad  de  control  conformará

lo  que  serán

los

microprocesadores actuales.

-Unidad  de  entrada  y  salida:  Esta  es  la  interfaz  que  conectará  no  sólo  los

requerimientos  propios  de  los  usuarios  sino,  además,  los  diferentes  elementos  a

través de los cuales se habilite el proceso de comunicación de información. Así, la

unidad de entrada-salida será la encargada de enviar y recibir datos con el mundo

exterior.  Para  globalizar  los  distintos  dispositivos  externos  que  pueden  existir,  se

adopta el nombre de periféricos, con los que se comunicará a través de los buses.

Este  apartado  se  distingue  en  sus  dos  componentes  tratados  de

forma

independiente: por un lado, la entrada y por otro la salida. (p. 31)

1.3 Composición de un sistema microinformático

Inicialmente, puede parecer que el planteamiento de arquitectura realizado dista mucho del

concepto de un PC actual, pero nada más lejos de la realidad. Realmente representa un

calco  pormenorizado  del  diseño  que  Von  Neumann  realizó  en  su  día.  El  planteamiento

genérico, por tanto, de una máquina actual, responde a la siguiente figura 3:

10

Figura 3

Estructura de un PC

Fuente: Nota. Elaboración propia.

Al  igual  que  en  el  caso  anterior,  resulta  preciso  definir  brevemente  cada  uno  de  los

elementos que conforman el ordenador y se presentan en la siguiente tabla:

11

Tabla 1

Elementos de un ordenador

Componente

Descripción

Placa Base

Se  trata  de  un  elemento  polivalente  cuya

misión  es  la  de  ofrecer  soporte  físico  al  PC

además  de  otra  serie  de  funciones  como  el

control  de  buses,  la  gestión  del  sistema  de

encendido,  la  tendencia  actual  tiende  a  una

integración  casi  total,  donde  las  tarjetas  de

sonido,  red  e,  incluso,  vídeo  conforman  la

apuesta de los fabricantes de placas base.

Microprocesador

Unidad aritmética y unidad de control. En gran

medida,  la  potencia  del  PC  reside  en  este

elemento que define muchos parámetros de la

potencia del PC. De él dependerá la capacidad

y velocidad de proceso además de la gestión

casi de forma exclusiva de la máquina.

Memoria

La  memoria  establecerá  ese  espacio  lógico

reservado  al  almacenamiento  temporal  de

datos  e  instrucciones.  El  tamaño  de  la

memoria  determinará  en  gran  medida  la

“agilidad”  del  PC  evitando  trasiego  de  datos

innecesarios  con  el  disco  duro  (emulación de

memoria denominada “memoria virtual”).

Puertos

Son  el  medio  a  través  del  cual  el  ordenador

podrá  conectarse  con  su  entorno.  Según  su

tipo, serán diferentes las funciones a realizar.

Desde  puertos  analógicos  para  dispositivos

12

multimedia

hasta

los

versátiles  USB

completamente estandarizados.

Unidades de disco duro

Se  trata  de  otro  elemento  periférico  que,  en

dependencia  de  la  unidad  de  entrada/salida

(controladora), permite el almacenamiento de

datos de forma similar a como podría hacerlo

una  unidad  de  disco  flexible,  ahora  bien,  de

mayor  capacidad  y  una  muy  optimizada

velocidad de acceso

Tarjeta gráfica

Este componente viene integrado en la placa

base del PC o se instala a parte para ampliar

sus capacidades. Concretamente, esta tarjeta

está  dedicada  al  procesamiento  de  datos

relacionados con el vídeo y las imágenes que

se están reproduciendo en el ordenador.

Se trata de un cajón de sastre. La caja actúa

Cajas, Ratones y teclado

como  mero  elemento  de  ayuntamiento,  esto

es,  la  necesidad  física  de  concentrar  los

diferentes  elementos  del  PC  en  un  mismo

espacio  físico.  En  cuanto  a  los  ratones  y

teclados,  la  consideración  sigue  siendo  la

misma que la del sistema de vídeo: periféricos.

Si  sorprendente

resultaba  que  algunos

ordenadores no dispusieran de un sistema de

vídeo,  no  menos  llamativo  debe  resultar  que

carecieran  de  teclado  ya  que  los  datos  y

programas  se  introducían  mediante  tarjetas

perforadas  o,  simplemente,  volviendo  a  re

cablear.

13

Multimedia

Sin duda la idea de la multimedia fue algo que

ni  siquiera  VonNeumann

fue  capaz  de

imaginar. No obstante, si hubiese que incluirlo

en algún grupo, ése sería el de periféricos. La

Multimedia,  tal  y  como  se  detalla  en  la  clase

específico dedicado a ese tema, no es más que

una  extensión  en  cuanto  a  la  posibilidad  de

comunicación con un PC.

Monitores

Se trata de un elemento imprescindible que se

catalogaría  también  dentro  de  los  periféricos

relacionados  con  la  tarjeta  de  vídeo.  Los

Monitores  serán  los  encargados  de  “traducir”

esos  impulsos  eléctricos  que  pululan  dentro

del PC en imágenes.

Fuente: Nota. Elaboración propia, a partir de Pozuelo (2010).

Para  conocer  más  sobres  el  hadware  y  sus  componentes  te  invito  a  ver  el
siguiente video:

Joshe.  (12  de  julio  de  2020).  Hardware  y  sus  componentes  internos  y
externos. [Video].

14

1.4 Generación de computadoras

Establecida la arquitectura de Von Neumann, muchos son los diseños de ordenadores que

empiezan a inundar el mercado. Llega un momento en el que existe una cantidad importante

de  máquinas,  todas  similares  en  prestaciones,  aunque con  características  propias  y  una

tónica general entre sí: la incompatibilidad. Ya no se trata sólo de una diferencia en cuanto

a lógica de los datos sino también en todo lo que en el aspecto físico se refiere. Así, hay

equipos que utilizan como soporte cintas magnéticas, otros discos e incluso, entre aquellos

que  coinciden  en  el  formato,  no  lo  hacen  en  el  tamaño.  En  definitiva,  se  trata  de  una

situación caótica donde el usuario, antes de adquirir un equipo, debe plantearse con quién

desea  compartir  información  para,  al  menos,  mantener  la  compatibilidad  con  un  entorno

inmediato.

Esta situación, indeseable por donde se quiera mirar, conduce a que se realicen avances

independientes por algunas compañías que difícilmente pueden ser compartidas por otros.

Se ve necesario unificar los estándares para así trabajar en una misma dirección. Esto es

precisamente lo que sucede con el IBM PC.

Con  esta  máquina  se  marca  la  compatibilidad  (o  se  es  compatible  o  se  está  fuera  del

estándar). Como ya se adelantaba en la introducción, IBM tomó una decisión estratégica

que  le  hizo  conseguir  el  liderato  absoluto  de  los  microordenadores  a  pesar  de  que,

probablemente, su máquina no fuese la mejor. Esta medida consistió en hacer público su

diseño de modo que, en un breve intervalo de tiempo, muchos fabricantes comenzaron a

diseñar dispositivos y periféricos para esta máquina (“Compatible con IBM” rezaba en sus

etiquetas).

Lógicamente, el resto de las compañías no podía permanecer al margen de esta línea de

negocio  que  se  vaticinaba  apetecible  para  todos.  De  este  modo  comenzaron  a  salir  al

mercado,  primero  tímidamente  y  más  tarde  de  forma  masiva,  equipos  que  siguiendo  las

especificaciones de IBM se ensamblan bajo otra firma. Éste fue el origen de los clónicos:

ordenadores perfectamente compatibles con el estándar de IBM, pero producidos por otros

fabricantes. A medida que el mercado creció y se estabilizó, la consideración de clónicos

perfiló  más  sus  límites,  aplicándose  el  término  a  aquellos  ordenadores  (siempre

compatibles,  eso  sí),  que  no  tienen  una  marca  reconocida,  es  decir,  son  fabricado  por

ensambladores independientes que aúnan en una misma caja diferentes componentes. Al

15

resto de ordenadores se les llamó “de marca” para distinguirlos de los clónicos. Así, aunque

por  ejemplo  un  equipo  de  la  compañía  Dell  o  Hewlett  Packard  sea  un  clónico  bajo  la

consideración  de  ser  compatible  con  IBM,  pero  no  fabricados  por  esta  compañía,  en  la

actualidad forman parte de ese conjunto denominado “de marca”.

Una tercera opción, además de los equipos “de marca” y los clónicos, fructificó en paralelo,

pero sin ningún punto de tangencia. Esta opción vino de la mano de la compañía Apple con

sus  ordenadores  Apple  primero  y  Macintosh  después.  Realmente  consolidaron  otro

estándar, pero incompatible totalmente con el propuesto por IBM. Actualmente el mundo se

encuentra  en  una  condición  proclive  a  favorecer  las  iniciativas  relacionadas  con  el

tratamiento automático de la información. Un breve resumen de las generaciones existentes

lo encontraras en la tabla 2:

Tabla 2

Generación de computadoras

Generación  Periodo

Características

Tecnología

I

1938-1952

Las  máquinas  eran

Usaban

tarjetas

gigantes,

utilizan

perforadas  y  tubos  al

mucha energía y eran

vacío. Junto con cilindros

lentas

magnéticos

II

1953-1962

Se  mejoraron

los

Usan  anillos  magnéticos

programas

y

se

y transistores

usaban  aplicaciones.

Eran más pequeñas

III

1963-1971

Emerge  la  industria

Utilizaban

circuitos

de  software  y

la

integrados  y  consumen

multiprogramación.

menos energía

Se  desarrollaron  los

chips

IV

1972-1987

Se  utilizan  más  los

Se

desarrolló

el

chips  que  contenían

microprocesador  y  se

16

la  unidad  de  control.

reemplazaron  los  anillos

Se  desarrollan

las

magnéticos

supercomputadoras

V

1988-

Se crea el hardware y

Crece  la  robótica  y  las

presente

Japón

lanza

el

redes de comunicaciones

programa de la quinta

y la inteligencia artificial

generación

de

computadoras

Fuente: Nota. Elaboración propia.

Te invito a ver el siguiente video para profundizar en el contenido:

EduprofeScience.
computadoras. [Video].

(23  de  noviembre  de  2018).  Generaciones  de

17

2| organización y arquitectura de
computadoras
2.  Arquitectura de computadoras

El  ordenador  recibe  y  envía  la  información  a  través  de  los  periféricos  por  medio  de  los

canales. La CPU es la encargada de procesar la información que le llega al ordenador. El

intercambio de información se tiene que hacer con los periféricos y la CPU.

Para Orduña et al. (1996) arquitectura de computadoras se define como la
organización que tienen los diversos elementos que lo componen, así como la
forma que tienen de interaccionar entre ellos al realizar sus operaciones
normales. La arquitectura con la que está diseñado un ordenador define su
comportamiento y sus posibilidades. (p.3)

2.1  Placa base

Para Pérez et al. (2006) “La placa base es el primer elemento relevante en el interior
de un ordenador, es decir, que su importancia se debe a que la placa base o madre se
conectan todos los dispositivos incluyendo el microprocesador” (p.81).

18

La placa base, como elemento “soporte” del resto, es uno de los pilares sobre los que se

fundamenta  el  rendimiento  del  PC.  Pese  a  lo  que  pudiera  parecer,  la  placa  base  ha

evolucionado  de  forma  considerable,  si  bien  es  cierto  que  también,  en  este  caso,  las

metonimias no han funcionado: se ha hecho alusión al avance de los buses, los zócalos de

memoria y micro, los chipsets, etc., olvidando que todos estos elementos forman parte de

un conjunto que, en inglés, se denomina motherboard (placa madre) que, como su nombre

indica, sirve de soporte al resto de elementos “hijos” con los que conforma el conjunto que

es el PC.

El  rendimiento  del  PC  depende  exclusivamente  del  protagonismo  de  las  tarjetas  más

conocidas como pueden ser las de vídeo, sonido y otras. Si bien es cierto, al final, todas

dependen  de  las  prestaciones  ofertadas  por  la propia placa  base  y  de ella  dependerá  el

rendimiento final del equipo. Una placa base de mala calidad irá, por tanto, de la actuación

global de todas las tarjetas.

Parece que de unos años atrás se tiene la tendencia a dar la importancia merecida a la

placa  base.  Esto  se  observa  claramente  cuando  en  la  publicidad  se  hace  referencia  al

chipset,  componente  que,  fruto  de  la  integración  de  otros  muchos,  determina  en  gran

medida la calidad de una placa base. Si bien esto es un avance (un chipset decidirá cuánta

memoria es direccionable o cuántos micros serán soportados, entre otras cosas), hay más

parámetros que tener en cuenta.

Para  entender  de  forma  clara  cuál  es  la  constitución  básica  de  una  placa  base,  lo  más

interesante será enumerar cada uno de los componentes que la conforman. Para realizar

este ejercicio, se ha optado por el análisis de una placa común, no atendiendo tanto a su

innovación tecnológica como al aspecto didáctico. En la figura 4, se aprecian los elementos

más comunes.

19

Figura 4

Placa base Gigabyte

Fuente: Nota. Por Empowerlaptop (2020).

Esta placa soporta microprocesadores de la familia Core i7/i5/i3/Pentium/Celeron de Intel

encapsulados  en  formato  LGA1151.  Con  chipset  B150  Express,  es  capaz  de  gestionar

hasta 32 GB de memoria DDR4 en frecuencias de 2133 MHz. Incluye, como es habitual de

unos  años  a  esta  parte,  una  tarjeta  de  sonido  de  altas  prestaciones  como  es  la  Realtek

ALC889A y también integra dos tarjetas de red Realtek 8111D, con tecnología de 1 GB. En

cuanto a los slots de expansión, destinados a albergar tarjetería externa, esta placa base

provee  de  dos  PCI  Express:  de  x16  y  x1.  En  cuanto  a  las  posibilidades  de  conexión  de

unidades de disco y ópticas, proporciona cuatro conectores SATA III con una transferencia

de 3 GB/s, admitiendo RAID 0, RAID 1 y RAID 10. Además, la tarjeta está diseñada para

soportar  hasta  10  dispositivos  USB  donde  6  son  externos  y  2  internos,  de  los  puertos

externos, 4 son USB3.0 y 2 USB2.0.

20

Para comprender mejor que es una tarjeta madre, te invito a ver el siguiente
video:

Gallardo. (16 de enero de 2018). Que es una tarjeta madre. [Video].

2.1.1 Componentes

Cualquier  placa  base,  con  independencia  del  fabricante  y  grado  de  prestaciones,  debe

ofrecer  una  serie  de  mínimos  para  su  ensamblaje.  Todos  están  estandarizados  para  no

presentar  problemas  con  el  resto  de  los  elementos  que  integran  el  PC.  Así,  la  placa

analizada corresponde a un modelo en el que se han encontrado muchas características,

algo que la hacía idónea para su descripción. No obstante, hay otra serie de elementos que,

quizás por básicos, escapan de la configuración de una motherboard como la comentada,

destinada  a  actuar  en  ordenadores  servidores.  Otros,  sin  embargo,  a  pesar  de  estar

presentes, requieren un mayor grado de detalle. La definición básica de cada uno de los

posibles componentes adicionales es la siguiente, según Pozuelo (2010):

-BIOS:  se trata del Basic Input Output System o, lo que es lo mismo, el sistema

básico  de  entrada-salida.  En  este  componente  se  almacena  la  configuración  del

ordenador  que  previamente  es  introducida  a  través  del  Setup  o  programa  de

configuración. Aquí podemos encontrar información del procesador, tipo y cantidad

de  memoria  RAM  instalada.  El  método  de  acceso  al  Setup  suele  consistir  en  la

pulsación de una tecla durante el arranque de la máquina. Es importante destacar

que este elemento precisa de una alimentación constante aun con el PC apagado,

motivo por el cual las placas base incorporan una pila o una batería. Los fabricantes

más comunes son AMI, Award (como es el caso de esta placa) y Phoenyx.

-Chipset:  sin duda es el integrado de mayor protagonismo en la placa base. Se

trata de un circuito que puede estar compuesto por varios integrados (entre 2 y 9) y

que surge como fruto de la integración de toda la electrónica analógica discreta que

se  encuentra  en  la  placa  base.  La  idea  es  clara:  en  lugar  de  tener  muchos

componentes  diseminados  por  el  circuito  impreso,  se  integran  consiguiendo  un

21

elemento  único  que  aglutina  multitud  de  funciones.  Tanto  es  así  que,  en  gran

medida, las prestaciones ofrecidas por una placa base dependen del chipset. Esta

placa lo implementa en dos módulos (North y South) con los integrados X58 Express

e ICH10R. (p. 51)

-Slots:   la misión de cualquier slot, con independencia de su tipo, es la deservir de

interfaz a las distintas tarjetas que se conectarán a la placa base. Ahora bien, fruto

del cuello de botella que supone el aumento de frecuencia de los micros cuando se

trabaja  con  un  bus  de  bajas  tasas  de  transferencia, surge  la  necesidad de  buses

especializados, con mayores anchos de banda a fin de suplir requerimientos críticos

de transferencia. En el caso de la placa analizada, se incorporan cinco PCI Express:

dos de x16 y el resto de x8, x4 y x1, además de otros dos slots PCI. (p.52)

-Batería: como ya se adelantaba, los ordenadores disponen de una pila cuya misión

es la de alimentar de forma constante a la BIOS. La tensión suministrada debe ser

de 3,6 voltios, si bien se permite un amplio margen de variación. Así, no era difícil

encontrar hace tiempo ordenadores con dos pilas de 1,5 v en el formato AA. En la

actualidad se suelen poner pilas de las denominadas “de botón” en lugar de baterías

ya  que,  dado  el  bajo  consumo  de  la  BIOS,  la  longevidad  de  las  pilas  supera

ampliamente la propia vida de un ordenador medio.

-Zócalo:    el  socket  o  zócalo  del  microprocesador  es  la  interfaz  física  donde  se

ensambla  y  consigue  una  total  integración  con  la  placa  base.  Obviamente,  este

zócalo irá en función  del  tipo  de microprocesador  utilizado.  Es  importante  que  se

asegure de que la placa base elegida será la apropiada para el micro y no sólo en

cuanto a la marca sino también en lo referente al tipo (o modelo). (p.53)

-Bancos de memoria: los bancos de memoria son los “conectores” (y ciertamente

así  podría  denominárseles)  destinados  a  albergar  los  diferentes  módulos  de

memoria. Éstos, obviamente, deben ser conformes al tipo de memoria deseada y,

según el tipo, se procederá a un modo de ensamblaje u otro. De cualquier forma y

sea cual sea el tipo de memoria elegido, siempre se trata de una operación delicada

dada la proximidad de los contactos (consulte el apartado dedicado a la memoria

para más información).

-Conexiones SATA/IDE/ /FDD: son los conectores encargados de comunicar los

diferentes dispositivos de lectura y almacenamiento de datos con la placa base. De

forma  habitual  se  componen  de  un  conector  denominado  correspondiente  a  la

22

disquetera y dos canales IDE (IDE0 e IDE1) cuya misión es la de conectar los discos

duros, unidades de CD, etc. En la actualidad la tecnología IDE (en su concepto de

transferencia en paralelo) está obsoleta y se usa la SATA, con mayores tasas de

transferencia. (p.54)

-Puertos  USB:  la  funcionalidad  de  este  tipo  de  puertos  es  la  de  permitir  las

comunicaciones  con  el  exterior.  Las  conexiones  USB  se  han  impuesto  para  la

conexión  de  cualquier  tipo  de  dispositivo  (cámaras  fotográficas,  impresoras,

escáneres, PDA.).

-Puertos PS/2: los puertos PS/2 (o mini DIN) son los usados para la conexión del

ratón y el teclado. Son exactamente iguales y habitualmente el teclado es el más

próximo a la placa base, por lo general el puerto del ratón es de color verde y violeta

el puerto del teclado. (p.55)

-Puerto Ethernet: un puerto Ethernet es similar a las entradas de teléfono normal,

pero esta no funciona con los teléfonos ya que la ranura es más ancha y sirve para

conectar un equipo a la red o al internet por medio de cable utilizando un conector

RJ-45. El puerto Ethernet también es conocido como puerto de red, porque permite

las conexiones de red/Internet. (p.55)

2.1.2 Conectores

De forma opcional, y en ocasiones casi por modas, aparecen en las placas base otra serie

de  conectores  que  casi  podrían  clasificarse  de  propietarios.  Se  trata  de  conectores

específicos para un componente o varios pero muy concretos no pudiendo ser usados de

forma genérica.

La característica que los distingue es que están diseñados para albergar elementos que no

cumplen todas sus funciones por hardware, es decir, se abarata el dispositivo en cuestión

eliminando  parte  de  la  electrónica  y  el  peso  de  esta  carencia  recae  sobre  el  propio

ordenador.  Se  trata  de  un  caso  parecido  al  sistema  que  usan  algunas  impresoras  para

abaratar  el  producto  aprovechando  los  recursos  del  sistema  (si  bien  algunos  tienen  una

función específica que va más allá del aprovechamiento del PC, como puede ser el WOL,

tratado a continuación).  Los más populares se muestran en la tabla 3:

23

Tabla 3

Conectores

Nombre del

Descripción

conector

WOL

El  WOL  o  Wake  on  Lan  es  un  conector  que  posibilita  el

arranque del PC (que debe ser ATX) mediante una tarjeta

de red. En otras palabras, permite un control de encendido

(al  menos)  remoto.  Esta  tecnología  implica  que,  por

supuesto, tanto la tarjeta de red como la propia placa base

debe soportar este modo y, además, que exista un cable

formado por tres hilos que las comunique.

AMR

Es  el  Audio  Modem  Riser  que  en  esencia  es  un  conector

diseñado  de

forma  específica  para  módems  que

aprovechan  los  recursos  del  sistema.  De  este  modo  su

precio  es  considerablemente  inferior  al  de  un  módem

convencional

CNR

Es  el  Communication  Network  Riser  y  se  trata  de  una

versión evolucionada del AMR que, básicamente, incorpora

funciones para el manejo de tarjetas de red.

ACR

El  Advanced  Communication  es  un  avance  más  de  los

anteriores  donde  se  contemplan,  además,  soportes

específicos  para  comunicaciones  DSL  y  wireless.  Es

importante destacar que es perfectamente compatible con

el  AMR,  pero  no  con los  CNR,  motivo  por  el  cual  algunos

fabricantes incorporan de forma conjunta conectores ACR

y CNR.

Fuente: Nota. Elaboración propia.

24

2.1.3 Conexiones

El conexionado de la placa base es tan diverso como las prestaciones que ofrece. Dadas

sus  características  específicas  de  soporte  para  el  resto  de  las  tarjetas,  las  placas  base

ofrecen conexión para datos, tensión e, incluso, indicativos de proceso. A grandes rasgos,

se podrían establecer tres grupos de conexionado dejando aparte, claro está, los propios

relativos  a  las  tarjetas.  Estos  tres  grupos  serían  los  correspondientes  a  la  alimentación,

datos e indicativos y control. Dentro del primer grupo aplicado a la alimentación eléctrica,

hay que tener en cuenta, por un lado, la propia alimentación de la placa base que se puede

realizar  con  dos  o más conectores y,  por  otro,  la  tensión  suministrada  a  los  ventiladores

disipadores que no se alimentan desde la propia placa base. Los conectores destinados a

suministrar  el  fluido  eléctrico  a  la  placa  base  tienen  un  diseño  que  impide  su  inserción

errónea.  El  conector  de  suministro  eléctrico  para  los  ventiladores  disipadores  suele  ser

gestionado por la placa, donde la tensión es proporcional a la temperatura y detectada a

través de una NTC. De este modo, a mayor temperatura, mayor tensión y, por tanto, mayor

número de revoluciones en el ventilador.

El segundo grupo que se establecía era el destinado a los datos. Aquí se hace referencia

fundamentalmente  al  trasiego  de  información  que  debe  producirse  con  las  disqueteras,

discos duros…  Estas conexiones se realizan  mediante cables SATA  o los  popularmente

denominados  “buses”  que  son  unas  fajas  de  hilos  para  dispositivos.  El  destinado  a  la

disquetera (opcional en el caso de la placa tratada) es fácilmente reconocible ya que tiene

un “doblez” entre dos de sus conectores. De cualquier manera, sí hay algo con lo que debe

comenzar a familiarizarse: observe que en todos los cables IDE, uno de sus hilos, justo en

un lateral, está tintado de color rojo. Éste será el lado del conector que deberá insertarse

en el pin número 1 del dispositivo en cuestión o de la propia placa base. Obviamente, esta

indicación deberá venir serigrafiada o advertida de algún modo en la placa o el dispositivo

donde  se  desee  conectar.  En  el  caso  de  los  SATA,  la  propia  disposición  del  conector

identifica claramente su posición.

El tercero y último de los grupos establecidos es el denominado indicativos y control. Su

nombre deriva de que aglutina a varios conectores con la función de ofrecer información al

usuario  del  estado  de  la  máquina  mediante  diodos  LED  (uso  del  disco duro,  disquetera,

indicador de encendido...) y permitir a éste la intervención mediante el uso de pulsadores

(RESET  y  encendido  fundamentalmente).  En  este  punto  deberá  ponerse  atención  a  la

25

polaridad de los LED ya que, comúnmente, se usa el color blanco para determinar la masa

en lugar del color negro como es habitual.

2.2 Microprocesador

El microprocesador consiste en un circuito integrado que contiene la Unidad
Aritmético/Lógica y la Unidad de Control (Pozuelo, 2010).

Ya avanzados en la composición del PC, los microprocesadores son, sin lugar a dudas, el

elemento estrella dentro del mundo del PC. Y no es para menos: cualquier publicidad que

sobre hardware microinformático trate comienza siempre denominando al microprocesador

y su frecuencia de trabajo. Lo cierto es que se han asociado casi de manera inseparable a

los ordenadores, pero no es realmente así: en la actualidad, se utilizan microprocesadores

en  multitud  de  dispositivos  pasando  desapercibidos  en  calculadoras,  increíbles  teléfonos

móviles o juguetes. En la figura 5 se muestra el microprocesador en su zócalo.

Figura 5

Microprocesador montado en su zócalo.

Fuente: Nota. Por pixabay (2020).

26

2.2.1 Cerebro del ordenador

 El microprocesador es, por excelencia, el elemento vital del cual dependen el resto de los

subsistemas.  Por  supuesto  que  todos  son  necesarios  y,  en  la  medida  de  la  evolución

específica del componente, cada vez más inteligentes, pero el micro (como comúnmente

se le denomina) es el impulsor de todos.

Así  será  el  encargado  no  sólo  de  realizar  operaciones  lógicas  y  aritméticas,  sino  que,

además y dentro de sus cometidos, se encuentran tareas tan importantes como el acceso

y direccionamiento de la memoria, el control de atención a interrupciones y muchas más.

Históricamente dos competidores han rivalizado por el mercado de los microprocesadores:

Intel y AMD. No han sido los únicos y otros como Harris, Zilog, IIT, TI, Cyris, se han quedado

en el camino o, simplemente, han guardado un discreto tercer lugar.

Intentando  dar  un  enfoque  práctico,  esta  clase  se  centrará  en  el  estudio  sobre  los  dos

fabricantes principales, sin menospreciar, por supuesto, al resto. Lo cierto es que más de

un 95% de las máquinas actuales dentro del parque microinformático se abastecen de estos

micros. Por otro lado, se ha considerado interesante incidir no sólo en los productos de más

candente  actualidad  sino  también,  en  esos  otros  que,  desfasados  por  meses,  siguen

constituyendo un número importante de máquinas. Obviamente, el estudio de los micros

sólo puede realizarse de “patas hacia fuera”, entendiendo que los secretos de fabricación y

diseño quedan  relegados  a los  fabricantes  y,  el resto,  asumimos la información  que nos

proporcionan  como  veraz.  Por  supuesto  que  los  aspectos  prácticos,  así  como  las

experiencias más comunes, se reunirán en estas líneas.

2.2.2 Midiendo los microprocesadores

Para Vázquez (2012) “Un ciclo de reloj es el tiempo que le lleva un transistor en
apagarse y encenderse” (p.66).

27

Aunque  el  parámetro  más  llevado  y  traído  de  los  microprocesadores  es  una  velocidad

expresada  en  megahercios,  lo  cierto  es  que  no  resulta  un  parámetro  del  todo  fiable.  El

microprocesador funciona con dos frecuencias de trabajo: por un lado, su propia cadencia,

es decir, a la que realizará todas las operaciones internas y, por otro lado, la externa, es

decir,  a  aquélla  a  la  que  funcionarán  el  resto  de  los  componentes  a  él  conectados.

Lógicamente,  la  división  entre  la  frecuencia  interna  y  la  externa  dará  un  valor  que  se

conocerá como factor multiplicador.

Esto  justifica  que  los  aumentos  de  frecuencia  sean  proporcionales,  pero  no  lineales,  es

decir:  un  supuesto  microprocesador  que  funcionase  a  1  GHz  (1.000  MHz,  a  modo  de

ejemplo y por trabajar con números “redondos”) y una frecuencia externa (también llamada

“de  bits”)  a 133  MHz,  dispondrá de  un factor multiplicador  de  7,5,  dado  que 133  x  7,5 =

997,5 MHz ≅ 1 GHz. Por otro lado, otro microprocesador a 1,5 GHz sólo variará su factor

multiplicador hasta 11 (133 x 11 = 1.463 MHz ≅ 1,5 GHz). Como se observa, el rendimiento

real  de  la  placa  base  y  todos  los  componentes  en  ella  conectados  no  ven  alterada  su

frecuencia  de  trabajo.  Serán  sólo  las  operaciones  realizadas  en  el  interior  del  propio

microprocesador las que experimenten un aumento de velocidad de un 50%. Parece claro

que la frecuencia, si bien es un valor orientativo, no es, ni mucho menos, el valor definitivo

de rendimiento. Si a esto añadimos la capacidad multiprocesos de los microprocesadores

multinúcleo,  la  referencia  de  la  frecuencia  como  valor  determinante  se  aleja  aún  más

componentes  conectados  a  él.  Lógicamente,  la  división  entre  la  frecuencia  interna  y  la

externa  dará  un  valor  que  se  conocerá  como  factor  multiplicador.  Esto  justifica  que  los

aumentos  de  frecuencia  sean  proporcionales,  pero  no  lineales,  es  decir:  un  supuesto

microprocesador que funcionase a 1 GHz (1.000 MHz, a modo de ejemplo y por trabajar

con números “redondos”) y una frecuencia externa (también llamada “de bits”) a 133 MHz,

dispondrá de un factor multiplicador de 7,5, dado que 133 x 7,5 = 997,5 MHz ≅ 1 GHz. Por

otro lado, otro microprocesador a 1,5 GHz sólo variará su factor multiplicador hasta 11 (133

x 11 = 1.463 MHz ≅ 1,5 GHz). Como se observa, el rendimiento real de la placa base y

todos los componentes en ella conectados no ven alterada su frecuencia de trabajo. Serán

sólo  las  operaciones  realizadas  en  el  interior  del  propio  microprocesador  los  que

experimenten un aumento de velocidad de un 50%. Parece claro que la frecuencia, si bien

es un valor orientativo, no es, ni mucho menos, el valor definitivo de rendimiento. Si a esto

añadimos la capacidad multiprocesos de los microprocesadores multinúcleo, la referencia

de la frecuencia como valor determinante se aleja aún más.

28

2.2.3 Microprocesador orientados al uso

Los  microprocesadores  han  pasado  por  cambios  significativos  durante  las  últimas  tres

décadas,  pero;  sin  embargo,  el  modelo  computacional  básico  no  ha  evolucionado

demasiado. Así, al igual que un programa consiste en un conjunto de instrucciones y datos,

en los microprocesadores las instrucciones están codificadas en una ISA (Instructions Set

Architecture) específica, algo así como que todas las instrucciones del set4 obedecen a una

arquitectura específica. El modelo computacional es todavía un solo flujo de instrucciones

de  ejecución  secuencial  (se  ejecutan  una tras  otra),  y  operan  sobre  una  arquitectura  de

estados, esto es, memoria y registros. Es el trabajo de la microarquitectura (la forma como

está organizado el microprocesador internamente), la lógica y los circuitos el llevar a cabo

este flujo de instrucciones de forma óptima. Esta optimización va en función del uso final

dado  que  no  son  los  mismos  requerimientos  los  demandados  por  servidores,  PC  de

sobremesa o implementaciones móviles. Por ejemplo, los servidores están diseñados para

alcanzar  el  más  alto  rendimiento  posible,  mientras  que  los  sistemas  móviles  están

optimizados para el menor consumo de potencia dado. Cada segmento del mercado tiene

diferentes características y restricciones.

2.2.4 Parámetros fundamentales

Las  métricas  clave  para  la  caracterización  de  un  microprocesador  incluyen  una  serie  de

parámetros  a  ser  tenidos  en  cuenta,  a  saber:  rendimiento,  consumo  de  potencia,  costo

(relacionado con el tamaño del chip) y complejidad. Rendimiento. Este concepto es medido

en  términos  del  tiempo que  le  toma  al  microprocesador  el  completar  una  tarea  dada.  El

rendimiento  depende  de  muchos  parámetros:  desde  el  microprocesador  en  sí  mismo,  la

carga  de  trabajo  específica,  la  configuración  del  sistema,  las  optimizaciones  del

compilador…  hasta  el  propio  sistema  operativo.  No  obstante,  es  posible  medir  de  forma

objetiva el rendimiento a partir de una fórmula implantada en la década de 1980, vigente a

día de hoy y considerada como una iron law (ley de hierro) del rendimiento:

𝑅 = 1|𝐸𝑇 =

𝐼𝑃𝐶 ∗ 𝐹𝑟𝑒𝑐𝑢𝑒𝑛𝑐𝑖𝑎
𝐼𝐶

En  la  expresión,  ET  es  el  tiempo  de  ejecución  de  una  instrucción,  IPC  es  el  número

promedio de instrucciones completadas por ciclo, Frecuencia es el número de ciclos de reloj

por  segundo  e  ICes  la  cuenta  de  instrucciones,  que  mide  el  número  total  de  comandos

29

ejecutados. A partir de estos datos es posible iniciar un análisis objetivo del rendimiento del

microprocesador. Como resulta obvio, este valor puede ser mejorado por el incremento de

los factores IPC y Frecuencia, o por el decremento del denominador IC. En la práctica, IPC

varía dependiendo del ambiente de trabajo, la aplicación y la configuración del sistema. IC

varía en función de la ISA y el compilador usado. Para un programa ejecutable dado, donde

el  flujo  de  instrucción  no  varía,  el  rendimiento  relativo  depende  sólo  del  producto  IPC  ·

Frecuencia.  El  rendimiento,  en  este  caso,  es  medido  en  millones  de  instrucciones  por

segundo (MIPS).

2.3 Intel

Sin  lugar  a  duda  es  el  principal  fabricante  del  sector.  Esto  hace  que  se  le  dedique  una

atención especial, sin que esto vaya en menoscabo de otros fabricantes como puede ser el

caso de AMD.

Dado  el  dinamismo  del  sector,  escribir  sobre  “lo  último”  de  cualquier  fabricante  de

microprocesadores  es,  cuando  menos,  arriesgado.  La  continua  evolución  de  este

componente consigue, día a día, eliminar límites y plantear nuevos retos de procesamiento.

Aun  así,  es  necesario  correr  ese  riesgo.  Este  microprocesador  de  cuatro  núcleos  se

entendía como la integración en un único componente de dos Core 2 Duo, algo así como

dos microprocesadores doble núcleo.

En el momento de escribir estas líneas, la compañía apuesta por cuatro productos estrella,

a  saber:  Intel  Core  i3,  i5,  i7  e  i7  Extreme  Edition,  todos  de  2010.  Todos  los  productos

descritos a continuación están avalados por Intel a través de su web.

2.3.1 Intel core i3 2010

El Intel Core i3 de 2010 viene precedido del slogan comercial “El estilo inteligente empieza

aquí”  y  no  es  para  menos.  Se  trata  de  un  micro  capaz  de  optimizar  el  rendimiento

dosificando  oportunamente  el  consumo  energético,  algo  fundamental  para  los  equipos

móviles, además de gestionar una multitarea inteligente con la tecnología Hyper Threading.

Hasta  un  total  de  cinco  modelos  de  este  micro  se  han  presentado  por  Intel,  donde  las

características en cuanto a núcleos, subprocesos… se mantienen, variando exclusivamente

la frecuencia de trabajo y el consumo.

30

2.3.2 Intel core i5 2010

El Intel Core i5 del 2010 es el modelo inmediatamente superior en gama al popular i3. En

esencia mantiene todas las características de la gama, ofertando micros tanto para equipos

portátiles  como  de  sobremesa  en  consumo  normal  y  reducido.  La  frecuencia  aumenta

gracias  a  la  tecnología  Intel  Turbo  Boost,  que  acelera  automáticamente  el  procesador

cuando se requiere un rendimiento extra, pero, como ya se ha comentado, es preciso que

el resto del sistema lo soporten.

2.3.3 Intel core i7 2010

El  i7  viene  a  completar  la  gama  potenciando  los  aspectos  multimedia.  Por  supuesto,

aumenta la frecuencia de trabajo (nuevamente condicionado a la disponibilidad del Turbo

Boost por parte del equipo) y una mayor capacidad de memoria caché complementa este

diseño.

2.3.4 La gama ofimática

Además de los micros destacados de la compañía, Intel proporciona otros orientados a un

uso menos exigente. En esta línea se encuentran los Pentium y los Celeron. En el caso de

los Pentium, se cuenta con la fiabilidad de un microprocesador más que testeado en los

entornos básicos (ofimática principalmente).

Las posibilidades del Pentium de 2010 abarcan desde los 1,30 GHz hasta los 2,93 GHz, en

modelos específicos para portátiles y sobremesa. Se trata de una gama alta adecuada para

equipos de oficina.

2.4 AMD

AMD, fundada en 1969 y con sede en Sunnyvale (California) representa una opción más a

tener en cuenta antes de decidir qué microprocesador adquirir. Desde aquellos legendarios

80386 a 40 MHz que ganaron la partida tecnológica y legal a Intel con su 80386 a 33 MHz,

AMD se ha consolidado como un serio rival.

La  política  de  AMD  ha  sido  siempre  la  de  sacar  al  mercado  microprocesadores  muy

potentes,  a  fin  de  poder  rivalizar  “de  tú  a  tú”  con  Intel,  líder  indiscutible,  al  menos

históricamente, ya que en ventas andan muy a la par.  No es de extrañar que en esta línea

31

de producto en cuanto a microprocesadores se refiere (también fabrica procesadores  de

vídeo, memorias, chipsets…), muchas sean las marcas que hayan apostado por AMD. Si

bien  hace  años  existían  alianzas  –escritas  o  no–  entre  fabricantes  de  PC  y  de

microprocesadores (tal podía ser el caso de IBM e Intel), en la actualidad los fabricantes de

las grandes marcas escudriñan el mercado buscando el mejor producto. Un equilibrio entre

prestaciones y precio es lo que el sector demanda y los fabricantes lo saben. De este modo

compañías como Packard Bell, ATI Technologies, Ulead Systems y otras forman binomio

perfecto entre sus productos y los microprocesadores de la flecha.

AMD  ofrece  soluciones  no  sólo  en  el  ámbito  de  los  microprocesadores de  consumo  (de

usuario) sino también para servidores, estaciones de trabajo… En el momento de escribir

estas líneas, la compañía apuesta por los siguientes productos en su gama de equipos de

sobremesa de consumo: AMD Phenom II, AMD Phenom X4 Quad Core y X3 Triple Core,

AMD Athlon X2 Dual Core, AMD Athlon, AMD Sempron y AMD Athlon II.

2.5 Multinúcleo

Aunque conceptualmente ya se apuntaba la idea en la introducción del apartado relativo al

rendimiento de los microprocesadores, de un tiempo a esta parte, han aparecido nuevas

denominaciones que, en ocasiones, inducen a error. Se trata de un concepto nuevo con el

aspecto  de  perpetuarse como  una mejora  en  los  micros,  motivo por  el  que  requiere  una

aclaración. Se trata de los microprocesadores Dual Core, Core Duo y, en definitiva, la gama

multinúcleo.

La tecnología Dual Core es aquélla que usan los microprocesadores que incorporan en la

misma CPU dos núcleos de procesamiento, compartiendo la interfaz con el bus y parte de

la memoria caché. Esto lleva asociado la potencialidad (siempre que el sistema operativo

lo  permita)  de  trabajar  en  multiproceso,  concretamente  con  dos  procesos  en  paralelo  e

independientes.  Esta  idea  no  debe  confundirse  con  la  tecnología  HyperThreading  que

permite la ejecución de dos hilos de proceso. Así, los microprocesadores con dos núcleos

de proceso son los Dual Core. Si a éstos se les añade el HyperThreading, se les denomina

Extreme Edition, con capacidad de ejecutar hasta dos procesos con dos hilos de ejecución

en cada uno de ellos.

De  forma  paralela,  los  Core  Duo  son  los  microprocesadores  Dual  Core  diseñados  para

equipos portátiles, con características específicas donde sobresale el bajo consumo.

32

La independencia de los núcleos de estos procesadores posibilita tanto el funcionamiento

por  separado  o  de  manera  conjunta  en  una  tarea  con  mayores  requerimientos.  Los

programadores que quieren aprovechar esta tecnología dividen su código en subprocesos

capaces de ser atendidos por el núcleo que esté disponible (doble núcleo o cuatro núcleos)

consiguiendo realizar más operaciones al mismo tiempo y transmitiendo un resultado más

eficiente al usuario.

2.6 OVERCLOCKING

El overclocking, en una traducción un tanto libre, significa “más allá del reloj” y sin duda se

ajusta a la realidad del hecho. Esta técnica consiste en hacer trabajar a un microprocesador

a una velocidad superior para la que ha sido diseñado. Sin entrar en precisiones técnicas,

los  semiconductores,  elementos  sobre  los  que  se  basa  toda  la  electrónica  del  PC,

microprocesador

incluido,

funcionan  perfectamente  en

rangos  de

temperatura

comprendidos entre los 5 ºC y los 25 ºC. Por otro lado, es conocido que, ante un aumento

de frecuencia (de velocidad del microprocesador, por ejemplo) la potencia de la electrónica

aumenta generando más calor que debe ser evacuado a fin de mantener la temperatura

idónea de la máquina. Probablemente la primera pregunta que surja es qué interés tiene

esto si bien resulta obvio: cabe la posibilidad real de conseguir que un micro funcione como

otro de gama superior, pero, lógicamente, manteniendo el precio del microprocesador “real”

de que se dispone.

Si  bien  esto  puede  ser  una  práctica  lícita  y  hasta  beneficiosa,  desaparecen  todos  estos

calificativos  (o  al  menos  el  de  “lícito”)  cuando  algunos  proveedores  o  ensambladores

realizan el overclocking a espaldas del usuario, cobrando por un microprocesador de una

velocidad concreta el precio de su inmediato superior.

    Para comprender mejor que es un procesador, te invito a ver el siguiente video:

Tecno TV. (24 de julio de 2017). Todo lo que necesitas saber de los procesadores.
[Video]

33

Clase 3| Estructura funcional:
CPU, Memoria, Interfaces de
entrada salida
3.  Estructura Funcional

Una  computadora  personal  típica,  en  su  hardware,  está  conformada  por  una  placa  de

circuito impresa denominada placa madre o en otras bibliografías nombrada tarjeta madre

(en inglés motherboard). La placa base es el hardware que alberga al chip del procesador,

la memoria principal y algunas interfaces de E/S. Asimismo tiene conectores adicionales en

los que se pueden enchufar interfaces adicionales.

El  bus  del  procesador  es  definido  por  las  señales  propias  del  chip  del  procesador.  Los

dispositivos que requieran alta velocidad de conexión con el procesador, como la memoria

principal,  pueden  conectarse  directamente  a  este  bus.  La  tarjeta  madre  proporciona

generalmente  otro bus  al  que se pueden  interconectar  otros dispositivos.  Los  dos  buses

son interconectados por un circuito, que se denominará puente, que traslada desde un bus

a otro las señales y protocolos. Los dispositivos conectados al bus de expansión muestran

al procesador como si estuvieran conectados directamente al propio bus del procesador.

3.1 Unidad central de procesamiento (CPU)

La CPU contiene un pequeño chip llamado microprocesador. Cada CPU está formada por

al menos de dos partes básicas: la unidad de control y la unidad lógica-aritmética.

34

“La CPU (Unidad Central de Procesamiento) es el lugar en donde se manipulan los
datos, se conoce como el cerebro de la computadora” (Vázquez, 2012, p.56).

3.1.1 Unidad de control

La  unidad  de  control  es  el  centro  lógico  de  la  computadora  ya  que  los  recursos  de  una

computadora son administrados en la unidad de control, es esta unidad la que se encarga

de dirigir el flujo de datos.

Las  instrucciones  de  la  CPU  se  encuentran  incorporadas  en  la  unidad  de  control,  estas

instrucciones o conjunto de instrucciones enumeran todas las operaciones que una CPU

puede realizar. Cada instrucción es expresada en microcódigo.

Antes  de  que  un  programa  sea  ejecutado,  cada  comando  debe  desglosarse  en

instrucciones que correspondan a las que están en las instrucciones de la CPU. Al momento

de ejecutar el programa, la CPU lleva a cabo las instrucciones en orden convirtiéndolas en

microcódigo.  A  pesar  de  la  complejidad  que  resulta  del  proceso,  la  computadora  puede

realizar este proceso a una velocidad increíble.

Cuando una CPU es desarrollada, el conjunto de instrucciones tiene los mismos comandos

que su predecesora, aparte de incluirle algunos nuevos. Esto permite que el software escrito

para una CPU trabaje con computadoras con procesadores más recientes, esta estrategia

es  llamada  Compatibilidad  ascendente.  Esta  característica  permite  ahorrar  a  los

consumidores  comprar  un  sistema  nuevo  cada  vez  que  una  parte  del  sistema  es

actualizada. Se le conoce compatibilidad decreciente o inversa, cuando un dispositivo del

hardware o pieza del software puede interactuar con el mismo equipo y software que su

predecesor.

3.1.2. Unidad Aritmética-Lógica

Los datos almacenados en una computadora son de tipo numérico, es por ello que gran

parte  del  procesamiento  involucra  la  comparación  de  números  o  la  realización  de

operaciones  matemáticas.  Dentro  de  la  unidad  lógica  aritmética  de  la  computadora  se

realizan sólo dos tipos de operaciones: operaciones aritméticas y operaciones lógicas.

35

En la tabla 4, se muestra las operaciones realizadas por la unidad lógica aritmética:

Tabla 4

Operaciones de la unidad lógica aritmética

Operaciones aritméticas

Operaciones lógicas

+ Suma

=, ≠ Igual a, no igual a

-  Resta

>, >Mayor que, no mayor que

x Multiplicación

<, <Menor que, no menor que

÷ División

≥,  ≥  Mayor  que  o  igual  a,  no  mayor

que ni igual a

˄ Elevar Potencia

≤, ≤Menor que o igual a no menor que

ni igual a

Fuente: Nota. Elaboración propia.

3.2  Memoria

La memoria, actualmente, es uno de los componentes que más se están potenciando de

cara  a  obtener  mayores  capacidades  y  frecuencias  más  elevadas.  Estos  cambios  se

experimentan no sólo a través del formato físico ya que se trata de uno de los componentes

que más ha cambiado su aspecto (módulos SIP, SIMM, DIMM, RIMM…), sino a través de

los diferentes tipos de tecnología usados para el proceso de datos. Aceptada la importancia

de  la  memoria,  muchos  han  sido  los  altibajos  de  precio  que  ésta  ha  experimentado.

Marketing  o  realidad,  lo  cierto  es  que  la  capacidad  mínima  de  memoria  de  los  equipos

básicos actuales supera en mucho la ofertada por los discos duros de hace pocos años. En

esta  clase  se  detallan  los  aspectos  más  prácticos  de  montaje  y  funcionamiento  de  los

módulos más comunes.

La memoria es una unidad que almacena instrucciones y datos, así como los resultados
parciales y finales de los programas (Asenjo, 2001).

36

3.2.0. Almacenamiento Temporal

Bien entendido el diseño de arquitectura de Von Neumann en referencia a los ordenadores,

todos los elementos que allí aparecen están perfectamente justificados. Intentando discernir

qué elementos son activos y cuáles pasivos dentro de este concepto, aparece la necesidad

del  almacenamiento  temporal  como  uno  de  los  principales  requerimientos  de  forma

conjunta al microprocesador. Probablemente estos dos componentes (microprocesador y

memoria) sean los elementos activos frente al resto que, en definitiva, están al servicio del

trasiego de información o almacenamiento de los datos.

Si algún símil biológico es apropiado aplicar a la memoria principal del sistema, es, sin duda,

la memoria humana. Es necesario que el cerebro (microprocesador) cuente con una zona

donde  manejar  datos  temporales  (memoria  RAM).  Si  además  se  requiere  de  una

permanencia mayor, habría que escribirlos en un libro (discos duros y similares).

La  memoria  actúa  precisamente  como  eso:  un  almacenamiento  temporal  de  los  datos

relacionados con la aplicación en ejecución actual. Así, de poco servirá disponer de un gran

disco  duro  capaz  de  almacenar  cantidad  de  aplicaciones  y  datos  si  no  dispone  de  una

memoria dimensionada para la ejecución de dichas aplicaciones ya que se requerirá mucho

tiempo para procesar la información antes de ser grabada. Tampoco será útil una memoria

generosa con un disco duro pequeño ya que no se dispondrá de espacio para almacenar

la información procesada en caso de que así se desee.

Así se justifica que, si bien todas las mejoras en un PC son significativas, el incremento de

memoria se manifieste como un elevado porcentaje de aumento de prestaciones. Esto, en

los entornos gráficos multitarea, es especialmente significativo ya que, dado que se utiliza

la denominada memoria virtual (espacio en disco duro que suple la carencia de memoria y

se utiliza para el swapping o intercambio de datos), con el decremento de velocidad que

implica con respecto a la memoria del sistema, a mayor memoria real, menos requerimiento

de la virtual.

No obstante, no es sólo la capacidad lo que define las prestaciones que puede ofrecer la

memoria.  También  la  velocidad  a  la  que  es  capaz  de  trabajar  y  el  tipo  de  tecnología

empleada influyen en el rendimiento. La memoria se encuentra presente en prácticamente

todos  los  dispositivos  del  sistema.  Basándose  en  su  función  y  capacidad  podrá

denominarse registro (en  referencia  al microprocesador),  caché  (con respecto a  la placa

37

base) o buffer (en dispositivos externos como la impresora, por ejemplo). Sea cual sea la

función específica, la genérica será siempre la misma: almacenamiento temporal de datos.

Una buena elección de la memoria repercutirá de forma importante en el rendimiento del

equipo, llegando incluso a ser más significativo el contar con la capacidad adecuada más

que con un microprocesador potente con una escasa capacidad de memoria RAM. Tome

buena  nota  si  está  pensando  en  diseñar  su  propio  PC:  además  de  un  micro  adecuado

(obsérvese que no se usa el calificativo de “rápido”, consulte la clase anterior), dote de una

cantidad apropiada de memoria al sistema.

3.2.1. Funcionamiento de la memoria

Son muchos los diferentes tipos de memoria que se han usado durante la historia del PC

e, incluso, en la actualidad, conviven varios tipos de tecnologías. Cada una se caracteriza

por  una  serie  de  prestaciones  concretas,  pero  todas  tienen  un  denominador  común:  el

almacenamiento temporal de datos.

La memoria debe imaginarse como una cuadrícula formada por filas y columnas de igual

longitud. Cada celda corresponderá a la posibilidad de almacenar un dato y, normalmente,

coincidirá con el “ancho” del bus de datos del microprocesador, aunque esto no siempre es

así.  En  aquellos  casos  donde  el  número  de  bits  que  maneja  el  bus  de  datos  del

microprocesador  sea  superior  a  la  capacidad  de  la  celda,  es  preciso  instalar  de  forma

conjunta el número de módulos de memoria que logren una coincidencia.

Las referencias a cada una de las celdas se realizan a través del bus de direcciones del

micro y es éste el que precisamente limita la capacidad de memoria direccionable mediante

2n donde n corresponde al número de bits del bus de datos. No obstante, no se preocupe:

es habitual que esta capacidad sea muy elevada y que las limitaciones provengan de otros

componentes de la placa base como, por ejemplo, el chipset.

La  memoria  puede  ser  clasificada  bajo  diferentes  criterios  como  tecnología  empleada,

formato y otros, pero la consideración que más interesa en un carácter pedagógico es la de

estática  y  dinámica.  Estos  calificativos  indican  si  la memoria  es  capaz  de  almacenar  los

datos  “por  sí  sola”  o  si  precisa  de  un  “recuerdo”,  respectivamente.  Esto  se  debe  a  la

tecnología  de  construcción  empleada  basada  por  un  lado  en  transistores  o  en

condensadores  por  otro.  Ese  “recuerdo”  se  denomina  refresco  y  es  un  proceso  que  se

38

realiza un número concreto de veces por unidad de tiempo para evitar la pérdida de datos.

De forma habitual la memoria caché es memoria estática (SRAM), mientras que la memoria

principal del sistema es memoria dinámica (DRAM).

3.2.2. Instalación y reconocimiento

La  instalación  de  los  módulos  de  memoria  no  requiere  mayor  dificultad  que  una mínima

destreza manual, tal y como se detallará a continuación. La memoria que se encuentra en

el  mercado  actual  responde  casi  de  forma  única  al  formato  DIMM,  pero  aún  coexisten

ordenadores más antiguos con otros tipos de memoria. Exclusivamente con fines didácticos

se abordan estos formatos, ya en desuso dentro de la tabla 5:

Tabla 5

Formatos de memoria

Formato

descripción

SIMM 72c

Este  formato,  ya  obsoleto,  dispone  en  uno  de  sus

laterales  de  un  rebaje  practicado  sobre  la  fibra  de

vidrio  del  circuito  impreso. Igualmente,  una  muesca

en la parte de los contactos divide al módulo en dos.

En  primer  lugar,  será  preciso  verificar  la  correcta

posición  del  módulo  observando,  en  el  banco  de

memoria  que  lo  alojará,  dónde  se  encuentra  el  ya

citado rebaje lateral. Una vez comprobado, el módulo

deberá insertarse con una inclinación de unos 45º en

el  banco,  de  modo  que  los  contactos  del  mismo

descansen sobre la base del módulo. El siguiente paso

será bascular el módulo sobre este punto de apoyo de

modo  que  quede  en  vertical.  Será  en  ese  preciso

instante  cuando  se  escuche  un  “clic”  característico

correspondiente al impacto de los anclajes laterales al

sujetar el módulo.

39

DIMM

El módulo DIMM dispone de dos pequeñas ranuras en

su zona de contactos situadas de forma asimétrica, lo

que  garantiza  su  correcta  posición en  el  bando,  que

dispone de dos salientes coincidentes. Su inserción es

tan  sencilla  como  practicar  una  presión  de  forma

perpendicular  a  la  placa,  quedando  los  módulos

insertados formando 90º con la superficie de la placa

base.  Para  asegurar  esta  sujeción  física,  se  debe

actuar  sobre  dos  pestañas  laterales  que  se  alojarán

en dos rebajes que el módulo tiene en sus extremos.

La  extracción  es  similar,  pero,  habrá  que  comenzar

desbloqueando  el  módulo  mediante  las  pestañas

laterales y, a continuación, extraerlo libremente. Esta

memoria  se  puede  encontrar  en  168  contactos  (en

desuso) y hasta 240 contactos.

RIMM

El módulo, físicamente, está constituido por 184 pines

(contactos) e incorpora su propio bus de direcciones,

datos  y  control  de  gran  velocidad  (500·106

transferencias/segundo).  Probablemente  lo  primero

que  llame  la  atención  en  este  formato  sea  la  placa

metálica que cubre los chips. El motivo de la misma

estriba en actuar como disipador de calor por lo que

es  absolutamente  precisa:  su  eliminación  podría

dañar  el  módulo  de  memoria.  Samsung  Electronics

fue  el  primero  en  implantar  el  RIMM  o  “Rambus  In-

line Memory Module” en formato básico de 64 MB (que

en  su  día

fue  una  revolución)  y  totalmente

compatible. Estos módulos funcionan por encima del

GHz.

Fuente: Nota. Elaboración propia.

40

En la figura 6, se muestra un módulo de memoria RAM, marca Kingston con código

KH16C10B1K2/16X. El código se refiere a un módulo de memoria DDR3, 2Rx8, de 8GB

de capacidad, 1600 MHz de velocidad y 240-pin DIMM.

Figura 6

Memoria RAM DDR3.

Fuente: Nota. Por pixabay (2020).

Te invito a ver el siguiente video para comprender mejor lo que es la memoria de
computadoras:

PC Master MX. (17 de enero de 2018). Memoria de la Computadora. [Video].

3.3  Interfaces de entrada salida

Las interfaces de entrada y salida son también conocidas como periféricos estas no son

unas partes esenciales del sistema sino más bien elementos periféricos que se conectan al

sistema mediante sus ranuras de entrada (inputs) o ranuras de salida (outputs).

Los periféricos de entrada y salida dentro de los sistemas de procesamiento de información

se  conectan  a  través  de  ranuras  de  expansión  o  conectores  de  entrada  y  salida  que  se

41

encuentran integrados en su mother board como, por ejemplo, las ranuras o puertos USB,

conector LAN, conector VGA o conector de audio.

3.3.1 Almacenamiento externo

Tras un proceso de elaboración de datos y tratamiento de los mismos, surge la necesidad

de contrastar, comparar o, simplemente, compartirlos con otras personas y, por tanto, con

otros PC. Esta portabilidad puede producirse a partir de documentos impresos, pero esto

provoca  que  los  datos  sean  inalterables,  es  decir,  el  receptor  no  podrá  modificar  ni

interactuar con la persona que los generó. Como consecuencia de esta limitación, aparece

la  necesidad  de  compartir  estos  datos  en  formato  digital,  es  decir,  con  las  mismas

posibilidades  de  manejo  que  la  persona  que  generó  el  sistema  original.  Muchas  son  las

posibilidades  que  en  este  sentido  aporta  la  tecnología  actual.  Desde  la  propia  Internet,

pasando por redes de ámbito más reducido o los CD… No obstante, de cara a pequeños

volúmenes de información (esto de “pequeños” no puede por menos que ser una referencia

relativa)  están  las  memorias  externas  o  pendrives  en  el  lugar  que  antes  ocupaban  los

disquetes.  Estos  dispositivos  de  memoria  ofrecen  una  solución  a  la  portabilidad  de

información pudiendo almacenar de modo fiable varios GB de datos.

3.3.2 Unidades de disco fijo

Los  discos  duros,  como  ya  se  adelantaba,  son  la  respuesta  a  la  necesidad  de

almacenamiento  de  gran  volumen.  Así,  resulta  impensable  hoy  en  día  disponer  de  un

sistema  operativo  en  disquete,  algo  común  hace  algunos  años.  No  obstante,  los  discos

duros no sólo deben aportar capacidad, objetivo que logran sobradamente gracias a una

mayor precisión mecánica, sino también, velocidad.

Sin duda, la rapidez es la primera de las exigencias a una máquina ya que no hay nada

más  desesperante  que  mirar  a  una  pantalla  sin  posibilidad  de  interactuar  porque  el

ordenador está “a lo suyo”. Los tiempos de acceso son cada vez más cortos, pero todavía

se  encuentran  en menos  de  una decena  de  milisegundos, factor  que  hay  que optimizar.

Uno de los parámetros clave para la reducción de tiempos se basa en el aumento de la

velocidad  de  rotación  ya  que  resulta  más  sencillo  que  depurar  aún  más  el  sistema  de

posicionamiento de cabezas. No obstante, la microinformática nos tiene acostumbrados a

los cambios y, quizás, sólo sea cuestión de tiempo.

42

Superadas las barreras de velocidad y capacidad, el tercer aspecto a tener en cuenta (no

por ello menos importante) es la fiabilidad. Lo cierto es que existen pocos estudios serios

al respecto y el único valor ofrecido por algunos fabricantes (que no todos) es el MTFB que

mide el tiempo medio entre fallos expresado, generalmente, en miles de horas. En el campo

de la seguridad, una iniciativa software ha intentado dar respuesta a esta  carencia, pero

parece  que,  por  lo  menos  hasta  el  momento,  no  acaba  de  implantarse.  Se  trata  de  la

tecnología  SMART  (Self  Monitoring  Analysis  and  Reporting  Technology,  algo  así  como

Tecnología  de  Autocomprobación,  análisis  e  informes)  que,  jugando  con  el  significado

inglés de  su  acrónimo (inteligente), trata  de  dar un  reporte y monitorización  del  disco  en

tiempo real. El sistema en el que se basa es relativamente sencillo: se miden algunos de

los parámetros vitales del disco (temperatura, distancia entre el disco y las cabezas…) y se

informa al usuario cuando éstos varían peligrosamente.

La única realidad a día de hoy es que el mejor sistema de seguridad es el backup, es decir,

las copias de seguridad sistemática que aseguren la integridad de los datos, ya sea a través

de sistemas redundantes o mediante copias en otros medios físicos. No obstante, y como

se  indicaba  en  esta  exposición,  el  hardware  microinformático  evoluciona  de  forma

vertiginosa, y seguro que en breve aparecerán soluciones efectivas a un problema que, si

somos realistas, tampoco es tan preocupante

3.3.3 Sistema de video

Dentro  de  los  sistemas  comprometidos,  el  de  vídeo  probablemente  sea  uno  de  los  más

destacados. Y no, no se trata sólo de una consideración a nivel técnico, hay mucho más...

El sistema de vídeo completo (tarjeta gráfica y monitor) es el dispositivo estándar de salida,

esto es, el medio por el que el usuario y la máquina establecerán una comunicación desde

el primero hacia el segundo (salvo el caso de los monitores táctiles). Esto implica que se

trate de una interfaz importante en la medida que es el último paso en la cadena de proceso

antes de llegar al usuario.

El sistema de vídeo se compone, fundamentalmente, de dos componentes: tarjeta gráfica

y monitor. Ambos deben estar conectados con cierta coherencia, es decir, de poco servirá

una tarjeta de altas prestaciones si el monitor al que está conectado no reúne las mismas

características.  El  ejemplo inverso  es  igualmente  válido.  Ambos  dispositivos deben  estar

conformes a lo que se desea obtener.

43

La tarjeta gráfica es la encargada de procesar toda la información que se visualizará en el

monitor. Esto conlleva varias operaciones donde, en esencia, cabe reseñar dos esenciales:

proceso  de  datos  y  conversión  digital  analógica.  El  proceso  de  datos  hace  referencia  a

todas las operaciones que la tarjeta debe realizar para conseguir los efectos deseados de

vídeo. Si bien en el pasado ésta era una función exclusiva del microprocesador del sistema,

en la actualidad los potentes micros de las tarjetas se encargan de realizar gran parte de

las operaciones. Así, por ejemplo, la rotación de una pieza en 3D ya no debe ser calculada

(al menos en su totalidad) por el microprocesador del sistema, sino que, en gran medida, a

partir  de  unas coordenadas  básicas,  la  propia  tarjeta de  vídeo será capaz de  generar  la

información precisa para su representación.

Tal es la importancia de este sistema que hasta, en determinadas ocasiones, se consumen

recursos generales del sistema a fin de agilizar el sistema gráfico. Tal es el caso de la Turbo

Caché.  Este  sistema  aprovecha  la  memoria  principal  del  sistema  cuando  le  es  preciso

pudiendo  ampliar,  por  tanto,  la  memoria  base  instalada  de  forma  “virtual”.  El  problema

estriba  en  que,  obviamente,  la  memoria  destinada  al  vídeo  se  resta  de  la  principal  del

sistema. Un sistema similar se daba hace más de una década (con notables diferencias con

respecto a la tecnología Turbo Caché) pero no tuvo gran éxito. Este tipo de tarjetas está

dirigido al sector medio de los usuarios.

Por otro lado, surge otra necesidad ya adelantada: la conversión digital-analógica. Si bien

todo el proceso en el interior del PC se realiza de forma binaria (dos estados posibles), la

salida de vídeo tiene parámetros analógicos (infinitos estados posibles). Esto es provocado

por la riqueza que la información analógica ofrece frente a la digital, si bien es cierto que

esta última es mucho más sencilla de procesar. Claro está que este proceso de conversión

debe ser lo más rápido posible para no provocar retrasos en el sistema de vídeo, motivo

por  el  que  se  cuenta  con  el  RAMDAC  (Random  Access  Memory  Digital  to  Analogic

Converter).

Este  sistema  tiene  como  misión  la  de  transformar  la  información  de  un  sistema  a  otro

soportándose  sobre  una  memoria  de  características  conformes  a  las  necesidades.  Su

parámetro fundamental es el ancho de banda que estará en dependencia de la resolución

a la que se desea trabajar y la frecuencia con la que se desean renovar las imágenes. De

cara  a  eliminar  los  retardos  de  conversión  del  RAMDAC  y  aumentar  en  prestaciones  el

sistema de vídeo, una nueva tecnología digital irrumpió en lo que ya parecía una balsa de
44

estandarización: el vídeo digital DVI. Este sistema viene a cuestionar el eterno dilema de la

calidad digital versus la analógica en asuntos de vídeo.

3.3.4 Caja, ratón y teclado

La  caja  del  PC,  además  de  los  elementos  físicos  de  soporte  fácilmente constatables  en

cuanto  a  calidad  se  refiere,  lleva  consigo  la  fuente  de  alimentación  que  es  un  elemento

clave en el PC. Así, la elección de una buena caja apropiada a las necesidades del usuario

puede ser una buena inversión por la que “deambulen” varios microprocesadores.

En cuanto a ratones se refiere, hay que ser honesto y aceptar que quizás no sea el elemento

fundamental pero sí que resultan imprescindibles en los nuevos entornos gráficos. Se trata

de un elemento muy personal ya que, como comprobará al poco de su uso, hay ratones

que se adaptan mejor a las exigencias de cada usuario.

En las cajas existen una serie de parámetros inalterables que se deben mantener, como

puede  ser  el  caso  de  las  bahías  (en  mayor  o  menor  cantidad)  o  habitáculos  específicos

para el alojamiento de dispositivos. No obstante, hay otra serie de aspectos que dependen,

exclusivamente, del aspecto estético. Así, cualquier caja debe ofrecer en su parte frontal

una  serie  de  superficies  troqueladas  destinadas  a  albergar  las  diferentes  unidades  que

deben ser accesibles por el usuario, esto es, unidades de CD-ROM (en cualquiera de sus

variantes),  unidades  de disco,  etc.  De  forma  normalizada,  las  bahías responderán a  dos

formatos  adecuados  al  dispositivo  a  instalar:  5¼”  y  3½”.  Será  cuestión  del  fabricante  el

determinar cómo se liberan para introducir el elemento en cuestión. Lo normal es que se

trate de unas “tapas” de plástico afianzadas por una pestaña y que, desde el interior, se

puedan liberar con facilidad permitiendo la introducción de la unidad. Algunos fabricantes

también requieren que se desprenda una chapa metálica en el interior de la caja además

de la cubierta de plástico citada. Sea cual sea el formato, habrá que comprobar el modelo

en cuestión para ver el modo en que el fabricante diseñó su producto. Cabe incluso el caso

en el que sea preciso desmontar el frontal de la caja para poder acceder a la bahía. De

cualquiera de las maneras, esta operación no debe representar mayor dificultad.

Por  otro  lado,  tenemos  un  ratón  o  apuntador  es  un  puntero  que,  mediante  el  driver

apropiado,  consigue  que  en  pantalla  se  desplace  un  puntero.  Son  muchos  los  tipos  de

ratones  que  se  pueden  encontrar  en  el  mercado  y,  en  gran  medida,  su  elección  es  una

cuestión personal de gustos. Sin duda los más extendidos fueron los de “bola”, si bien hoy

predominan los ópticos. En el caso de los primeros, reciben su nombre de la bola sobre la

45

que  reposa  todo  el  dispositivo  y  que,  mediante  el  movimiento,  acciona  los  detectores

oportunos para enviar al ordenador la señal digital que se interpretará como un movimiento.

En cuanto a los ópticos, de cara a evitar la suciedad que se acumula como consecuencia

del desplazamiento de la bola sobre una superficie, activan un dispositivo capaz de percibir

el  movimiento  sin  necesidad  de  un  rozamiento  físico.  Los  modelos  antiguos  de  estos

ratones requerían para su uso una alfombrilla especial milimetrada que actuaba como guía

para el ratón. Por último, los track ball son otra alternativa interesante. Se trata de un ratón

“invertido”, esto es, un dispositivo estático donde la bola es accionada directamente por el

usuario sin que en el conjunto se produzca un movimiento. Sea cual sea el modelo elegido,

todos  disponen  de  una  serie  de  botones  para  indicar  acciones  sobre  el  apuntador  de

pantalla. Desde los equipos Macintosh con un único botón hasta los diseñados con multitud

de ruletas, hay un sinfín de posibilidades. Lo más habitual es que dispongan de dos o tres

botones y, en ocasiones, una rueda central que sirve para el desplazamiento interno de las

ventanas.

En cuanto a su conexión, poco hay que indicar. En la actualidad todos los ratones tienen

una conexión estándar USB, si bien en su día predominó el tipo PS/2, estandarizada por

IBM (conector igual al del teclado13 que, con respecto a la placa base, se encuentra encima

de los dos). Hubo un tiempo donde lo habitual era que los ratones se conectaran al puerto

serie de 9 pines e, incluso, al desaparecido puerto serie de 25 pines. En la actualidad resulta

casi imposible encontrar un ratón de estas características.

Finalmente, el teclado, en cualquiera de sus variantes, es un elemento imprescindible para

el trabajo con el PC, exceptuando casos muy aislados de máquinas donde no se requiere

la  intervención  por  parte  del  usuario  (por  ejemplo,  un  ordenador  de  fichaje)  o  casos

específicos donde se usan pantallas táctiles. El teclado convencional, de 102 o 103 teclas

según modelos, ha experimentado poca variación. En los inicios de la microinformática se

usaban  teclados  normales  (de  82  teclas)  que  en  breve  evolucionaron  a  los  “teclados

ampliados”, tal y como se conocen en la actualidad. A partir de ahí, pocas modificaciones

se han dado exceptuando el modelo “natural” que, en esencia, es el teclado convencional

dividido en dos partes y con un ángulo entre ellas que le hace más apropiado para la postura

de las manos.

La conexión de este dispositivo se realiza normalmente por puerto USB, aunque todavía

hay modelos que lo hacen a través del puerto PS/2 con un conector DIN, igual al del ratón.
46

Los  teclados  originales disponían  de  un  conector  de  las  mismas  características,  pero  de

mayores  dimensiones  (de  hecho,  al  conector  original  se  le  conocía  como  DIN  y,  a  los

posteriores,  como  mini  DIN).  Si  algo  es  importante  en  los  teclados,  obviamente,  son  las

teclas. El método de pulsación es muy personal en cada usuario y un teclado cómodo hará

que  el  rendimiento  aumente.  En  esencia  hay  dos  tipos  de  teclados  atendiendo  a  la

constitución interna de la implementación de sus teclas: membrana y mecánicos. Aunque

en  cualquiera  de  los  casos  la  finalidad  es  la  misma  (activar  una  matriz  que  generará  el

código oportuno para que se interprete como un carácter), el método de pulsación cambia

de  forma  significativa  de  un  modelo  a  otro.  La  pulsación  por  membrana  se  consigue

presionando una membrana plástica que, por su propia constitución, actúa como un muelle,

devolviendo la tecla a su posición original una vez que desaparece la presión ejercida sobre

ella.  Este  tipo  de  teclado  es  absolutamente  silencioso  ya  que  la  membrana  cambia  de

posición  de  forma  elástica,  sin  ningún  tipo  de  roce  o  golpe  mecánico.  Por  otro  lado,  los

teclados mecánicos se ayudan de muelles y resortes que establecen la presión de pulsación

y generan un pequeño “clic” al pulsarlos. Precisamente son fácilmente detectables por su

sonido.    A  pesar  de  que  estos  últimos  pueden  parecer  más  incómodos por  el  ruido  y  la

mayor  presión  necesaria  para  vencer  la  fuerza  de  la  propia  tecla,  suelen  ser  más

recomendables (y también más caros). Este tipo de teclado fue popularmente usado por

IBM y, aunque aquí entran los gustos, particularmente creo que se trata de la mejor opción,

la mayor fuerza de la pulsación junto al sonido característico, ayudan al usuario a detectar

cuándo una pulsación ha sido correcta.

3.3.5 Multimedia

En los años 90 del siglo XX, los ordenadores eran capaces de poco más que emitir sonidos

estridentes  y  pitidos.  La  polifonía  sólo  se  contemplaba  en  máquinas  como  Macintosh  y,

curiosamente,  en  equipos  Atari,  los realmente  precursores  de  la multimedia y  el  sistema

MIDI,  también  tratado  en  esta  clase,  y  que  consiste  en  establecer  un  lenguaje  de

entendimiento entre las máquinas y los instrumentos musicales. De este modo, los músicos

profesionales se veían abocados a utilizar equipos Mac (como cariñosamente se conoce a

los Macintosh) que, si bien les proveía de potencia en aplicaciones, también eran cobradas

en  su  justa  medida...    Así,  la  multimedia  encontró  un  campo  de  cultivo  idóneo  en  los

estándares del PC cuando éstos incluyeron las posibilidades multimedia (¡potenciadas con

la aparición en su día de la tecnología MMX primero y el 3DNow! después) y, poco a poco,

47

se  fueron  asentando  hasta  resultar  un  elemento  imprescindible  en  la  microinformática

actual. Así, lo común es que la gran mayoría de los equipos incluyan una tarjeta de sonido

que suele venir integrada en la propia placa base. Por otro lado, las unidades lectoras y

grabadoras tanto de unidades de CD como de DVD son algo habitual.

Bajo  esta  premisa,  cualquier  sistema  de  interfaz  que  incluya  un  nuevo  modo  de

comunicación puede entenderse como un sistema multimedia. No obstante, ha proliferado

una configuración básica que caracteriza a estos equipos: se trata de la incorporación de

una tarjeta de sonido, micrófono, cámara de vídeo y altavoces. Poco a poco se vislumbra

un incremento de prestaciones que pasarán a engrosar el concepto. Tal puede ser el caso

de  las  webcams  y,  por  qué  no,  de  los  sistemas  virtuales.  De  cualquier  modo  y  lejos  de

filosofar con la idea, esta clase dará un repaso a los elementos más comunes. Por supuesto

que hay más, pero en algún momento hay que acotar.

3.3.6 Monitores

Los monitores son uno de esos elementos que han variado poco en la evolución informática.

Sí es cierto que han aumentado en prestaciones como la resolución, radiación, tamaño y

número de colores, pero, en esencia, el monitor como tal sigue siendo el mismo que hace

unos años. Su funcionamiento basado en el uso de un tubo de rayos catódicos condiciona

la  tecnología  usada  limitando  la  mejora  de  aspectos  tan  importantes  como  la  radiación

producida.    No  obstante,  de  un  tiempo  a  esta  parte,  hemos  presenciado  una  evolución

realmente espectacular hacia las pantallas LCD. Las LCD tienen una tecnología totalmente

novedosa  que  ha  revolucionado  el  panorama  microinformático.  Lo  más  espectacular,  a

primera vista, ha sido la impresionante disminución de tamaño, consiguiendo que en pocos

centímetros se disponga de la misma imagen que antes requería de un “fondo” de monitor

importante. Pero los cambios no han terminado ahí. El uso de moléculas de cristal en un

estado híbrido sólido/líquido (las siglas LCD provienen de Liquid Crystal Display, o lo que

es lo mismo, Pantalla de Cristal Líquido) consiguen eliminar de forma total las indeseables

radiaciones asociadas inevitablemente a los monitores CRT convencionales.

Actualmente, resulta impensable no disponer de un monitor en un sistema microinformático.

Lo cierto es que resulta imprescindible para operaciones ofimáticas, pero hay casos en los

que  no  se  precisa.  Tanto  es  así  que  los  primeros  ordenadores  no  disponían  de  este

elemento fundamental. Son muchos los modelos existentes en el mercado y múltiples las

48

características a evaluar en un monitor. Conviene, por tanto, tal y como se pretende en esta

clase,  conocer  en  detalle  qué  puntos  deben  tenerse  en  cuenta  a  la  hora  de  adquirir  un

monitor  apropiado.  Aun  así,  esto  no  siempre  es  suficiente  ya  que  hay  parámetros

difícilmente  cuantificables.  Si  desea  comprar  un  monitor  y  le  aseguran  que  es  de  baja

radiación  (que  probablemente  lo será),  a menos  que  disponga de  un medidor  de campo

electromagnético deberá hacer un acto de fe y creer lo que le dice el distribuidor. Igualmente

ocurre  con  muchos  parámetros  como  entre  otra  distancia  entre  puntos.  Una  primera

aproximación  la  puede  obtener  comprobando  qué  monitor  detecta  Windows  mediante  el

Plug & Play pulsando con el botón derecho de su ratón sobre el Escritorio y, una vez allí,

accediendo a Propiedades. Dentro de Propiedades de la pantalla encontrará información al

respecto.

3.3.7 impresora

La impresora. Este dispositivo, como todo el mundo sabe sin necesidad de ser un iniciado

en microinformática, tiene como finalidad la de obtener sobre papel un reflejo impreso de

los datos procesados en el PC. A pesar del aspecto clásico de estas máquinas (son casi

contemporáneas al PC), lo cierto es que han sufrido una evolución vertiginosa. Son muchas

las técnicas empleadas en la impresión según las necesidades que han precisado cubrir en

cada  momento.  De  este  modo  es  posible  encontrar  impresoras  que  utilicen  diferentes

métodos de impresión (impacto, tinta líquida, tóner), que lo hagan sobre diferentes soportes,

papel, vinilos, aluminio (sí, aluminio), monocromáticas, policromáticas, de recepción serie o

paralelo... Sin duda, un gran abanico que satisface las necesidades de las exigencias más

variopintas.

la  necesidad  de  impresión  es  una  de  las  primeras  que  el  usuario  experimentará  cuando

disponga de un equipo microinformático. Rápidamente se descubre que los escritos más

brillantes precisan llevarse a papel para ser compartidos y, de igual manera, los gráficos

más  claros  serán  útiles  en  la  medida  que  puedan  adjuntarse  a  un  informe  impreso.

Justificada  la  necesidad  de  impresión,  es  necesario  diseñar  un  dispositivo  capaz  de  dar

soluciones concretas. Así, muchos han sido los inventos (y artilugios) utilizados según la

época.  El  primer  tipo  de  impresoras  utilizó técnicas de  impacto,  es  decir,  golpeaban  una

cinta entintada contra el papel para así reproducir la base del “martillo”. Esta técnica sigue

estando vigente en la medida que este tipo de impresoras es el único que, aún a día de

hoy,  tiene  capacidad  para  utilizar  papel  autocopiativo,  algo  bastante  demandado  en  la

49

emisión de facturas y todos aquellos documentos que precisen de duplicado. Sobre este

modelo  de  impresión  hubo  tres  diseños:  las  impresoras  de  bola,  las  de  margarita  y,  por

último, las de agujas. Las impresoras de bola consistían precisamente en eso: en una bola

sobre la que se habían troquelado los caracteres. Así, en función de la posición de la esfera,

el impacto producía uno u otro carácter impreso. Las de margarita eran similares, pero, en

este caso, se recurría a una margarita metálica en cuyos pétalos se encontraban en relieve

los  caracteres.  Mediante  un  movimiento  del  eje,  se  centraba  el  pétalo  deseado  con  el

martillo  de  impresión  golpeando  la  cinta.  Estas  dos  técnicas  han  sido  usadas  por  las

máquinas de escribir hasta hace no demasiado tiempo. Resulta obvio matizar que el tipo

de  letra  era  fijo  y,  en  caso  de  desear  otro,  había  que  sustituir  físicamente  la  bola  o  la

margarita según el caso. Más tarde llegaron las popularmente conocidas como impresoras

“de agujas”. En este caso los caracteres no eran fijos, sino que se realizaban mediante el

impacto múltiple de un número determinado de agujas. Cada una de ellas producía un punto

que dibujaba el carácter. Según el número de agujas, se obtenía mayor o menor calidad,

siendo  el  número  estándar  de  9  o  24  agujas  (aunque  el  mercado  proporcionó  otros

modelos). Todavía se puede encontrar este tipo de impresoras operativas y a la venta, dada

la necesidad de cubrir, como se adelantaba, un sector profesional que precisa de múltiples

copias.

La  historia  microinformática  continúa  y  es  preciso  encontrar  nuevas  soluciones.  De  este

modo y, aunque no por orden cronológico, aparecen las impresoras de tinta y el láser. Éstas

cuentan  con  sistemas  de  impresión  más  silenciosos  y  de  mayor  calidad,  ofreciendo

prestaciones  impensables  para  las  impresoras  de  impacto.  Por  otro  lado,  la  velocidad

también es un parámetro definitivo a la hora de tomar una decisión. Poco a poco el mercado

ha ido colocando cada producto en su lugar y, hoy, cuestan más los cartuchos de tinta que

la  propia  impresora  de  inyección.  Esto  ha  situado  los  diferentes  tipos  de  impresora  en

ámbitos  concretos.  Así,  las  de  impacto  son  indicadas  para  múltiples  copias,  el  láser  en

entornos  de  oficina  y  las  de  inyección,  para  todos  los  usuarios  que  necesitan  calidad  y

velocidad a un precio razonable.  Un enfoque actual requiere, necesariamente, un análisis

algo más pormenorizado de las impresoras más comunes: inyección de tinta y láser.

50

Para comprender mejor lo que son los dispositivos de una computadora, te
invito a ver el siguiente video:

Pase de lista. (19 de marzo de 2020). Dispositivos de entrada y salida de una
computadora. [Video].

Clase 4| Necesidad de un bus de
interconexión
4.  Comunicaciones

La  potencia  de  un  PC  a  nivel  funcional,  esto  es,  medida  en  la  utilidad  que  es  capaz  de

aportar  al trabajo, se  incrementa  de  forma  importante  si  puede  compartir  los  datos.  Esto

realmente no es ninguna novedad y si se considera interesante y útil extraer la información

de la máquina hacia una impresora, ¡cuánto más importante será poder compartirla!

Algo tan evidente como esto ha provocado que se implementen múltiples soluciones para

poder  compartir  ya  no  sólo  datos  sino,  además,  recursos:  ése  es  el  fundamento  de  las

redes. Ahora bien, lo que inicialmente se reducía a la interconexión de máquinas mediante

un  simple cable (denominado  “medio físico”)  ha evolucionado de  la mano de  las  nuevas

tecnologías  que  potencian  la  flexibilidad  de  las  instalaciones,  así  como  la  capacidad  de

envío de información.

El culmen de todo lo expuesto llega con la aparición de Internet que descubre a los usuarios

las  ventajas  de  encontrarse  en  un  entorno  abierto  y  comunicado.  Este  es  el  verdadero

despegue para que las comunicaciones se extiendan a entornos más modestos en PYME

51

e  incluso  dentro  del  ámbito  doméstico,  dejando  de  ser  algo  exclusivo  de  las  grandes

empresas.

Las  comunicaciones  por  módem,  sistemas  de  banda  ancha  e,  incluso,  otras  tecnologías

más “cercanas” como el Bluetooth o los puertos básicos del PC asumen un protagonismo

llevado  prácticamente  hasta  el  entorno  ofimático  de  trabajo.  Cada  vez  se  desean

comunicaciones más rápidas y sencillas donde desaparezcan las complejidades técnicas y

físicas.  Es  más,  las  comunicaciones inalámbricas  o Wireless (“sin cables”,  textualmente)

representan un porcentaje importante de instalaciones.

4.1 Clasificación de las comunicaciones

Las comunicaciones con lleva el análisis de múltiples parámetros y casi la totalidad de ellos

tienen entidad suficiente como para ser los elementos de referencia.

De este modo se podría plantear una organización en base al tipo de medio usado (algo

muy en boga actualmente). Esto conllevaría estudiar por separado las tecnologías Wireless

y las basadas en un medio físico como puede ser el cable, desde líneas telefónicas, par

trenzado, hasta la fibra óptica. También pondría en el mismo grupo a las comunicaciones

vía satélite que a las Bluetooth (eminentemente cercanas a la máquina). Otro planteamiento

podría  ser  en  base  a  la  capacidad  de  transferencia,  pero  también  presentaría  casos

dispares ya que en conexiones próximas las transferencias pueden ser más elevadas, pero

pierden potencia en cuanto al concepto de distancia.

Se ha considerado que el método para abordar un tema tan amplio como éste sea observar

qué  elementos  están  próximos  al  PC  y  qué  opciones  ofertan  y,  por  otro  lado,  qué

comunicaciones  precisan  de  elementos  adicionales,  tal  y  como  pueden  ser  las  que

requieren de módems, Routers u otros dispositivos.

Tras esta premisa, se aborda la enumeración de puertos, así como sus características más

importantes y los dispositivos necesarios para la interconexión.

52

4.2 Comunicaciones en la computadora personal (PC)

Los puertos son el interfaz natural del PC (si es que algo natural se puede encontrar en una

máquina) de datos desde y hacia el exterior. Surgen como la necesidad de conexión con

otros dispositivos que, cercanos al PC, reciben el nombre de periféricos.

Lo que en un principio no era más que un medio básico de conexión con pocas exigencias,

poco a poco fue adquiriendo protagonismo a la vez que exigía de unas prestaciones más

avanzadas. Ése fue el inicio básico de las comunicaciones que se ha plasmado, de forma

interna en el PC, a través de los diferentes puertos, en la tabla 6 se muestran los puertos

que contiene una PC:

Tabla 6

Puertos de una PC

Puerto

Descripción

Serie

Sin duda los menos eficientes en cuanto a capacidad

de datos se refiere. Su nombre proviene del tipo de

transmisión.  Así,  una  comunicación  serie  se

caracteriza porque los datos se envían uno tras otro

en el ámbito de bits, algo que, obviamente, limita en

gran medida la capacidad del puerto. Este puerto es

asíncrono,  es  decir,  no  está  gestionado  por  unos

pulsos  de  reloj  invariables.  Su  formato  es  el  de  un

conector  sub-D  de  9  pines  macho,  aunque  existió

también bajo el formato de 25 pines.

En la actualidad sigue existiendo este puerto ya que

no  todos  los  periféricos  muestran  necesidades

superiores.  Ha  sido  durante  mucho  tiempo  el

conector usado para la conexión del ratón si bien los

puertos  PS/2  primero  y  los  USB  después  han

asumido de forma exclusiva ese papel.

53

Paralelo

Se trata de un puerto que, como su nombre indica,

envía los bits en paralelo, es decir, a la vez. De este

modo  se  consiguen

transmisiones  de  bytes

completos. Su formato es el de un conector sub-D en

formato  hembra  de  25  pines  y,  de  forma  habitual,

está  asociado  a  la  impresora  del  sistema.    Todo

parece

indicar

que

este

puerto

acabará

desapareciendo  ya  que,  de  hecho,  cada  vez  son

menos  los  fabricantes  de  placas  base  que  lo

implementan. Su funcionalidad principal, que era la

comunicación con las impresoras, se ve desplazada

por  puertos  de  superiores  prestaciones  como  es  el

caso del USB.

Juegos

Este es un conector sub-D de 15 pines hembra que

de  forma  habitual  va  asociado  a  las  tarjetas  de

sonido (ya sea integradas en placa base o de forma

externa).  Su

funcionalidad  se  divide  en  dos

aplicaciones muy distintas: por un lado, se trata de

un  puerto  analógico  indicado  para  la  conexión  de

joystick o palancas de juegos. Por otro, se usa como

conector estándar para el sistema MIDI, medio por

el que es posible conectar instrumentos musicales al

PC aprovechando los recursos de la tarjeta de sonido.

USB

Es  el  acrónimo  de  Universal  Serial  Bus  o  Bus  Serie

Universal. Si bien es cierto que la información sigue

enviándose bit a bit, la velocidad de transferencia ha

aumentado de forma importante con respecto a los

puertos serie originales, llegando hasta los 480 MB/s

en la versión 2.0 y hasta los 4,8 GB/s en la 3.0. Otra

ventaja  importante  es  que  admite  la  conexión  de

54

hasta  127  dispositivos  distribuidos  en  una  red  que

puede  alcanzar  hasta  los  cinco  niveles.  De  este

modo,  existen  periféricos  “HUB”  que  permiten  la

interconexión  de  otros  aparatos  aprovechando  el

mismo puerto.

FireWire

Es  capaz  de  soportar  hasta  63  dispositivos  con

transferencias de hasta 400 MB/s. El FireWire puede

trabajar  tanto  en  modo  síncrono  como  asíncrono,

dependiendo  de  las  necesidades  y,  al  igual  que  el

USB, el FireWire dispone los dispositivos en cascada,

con  una  distancia  máxima  al  conector  de  4,5  m  y

soportando  hasta  16  periféricos  por

canal

(teóricamente es posible conectar hasta 72, pero el

consumo  de  corriente  hace  que  el  número

disminuya,  al  igual  que  ocurre  con  los  dispositivos

USB).

Bluetooth

Esta  nueva  tecnología  permite  la  comunicación  en

banda  estrecha  entre  diferentes  dispositivos.  Éstos

pueden  ser  portátiles,  PDA,  impresoras,  teléfonos

móviles... y un sinfín de posibilidades condicionadas

sólo  por  la  implementación  de  los  fabricantes.  La

tecnología  Bluetooth  está  indicada  para  ámbitos

geográficos  reducidos  donde  no  se  superen  en

ningún  caso  los  100  m  entre  los  dispositivos  a

conectar (un máximo de 8).  En esencia se trata de

una  comunicación  vía  radio  con  un  espectro  de

frecuencia  embebido  en  los  2,4  GHz.  Este  tipo  de

comunicación, si bien ofrece la ventaja de no precisar

la visualización física  de los dispositivos (es posible

55

imprimir  en  una

impresora  que  esté  a  dos

habitaciones  de  distancia),  plantea  problemas  de

confidencialidad  y  seguridad  en  los  datos,  ya  que

nada impide que un aparato que se encuentre dentro

del radio de acción del emisor reciba la señal.

Infrarrojos

Se  trata  de  un  puerto  capaz  de  comunicarse  con

otros  dispositivos  que  utilicen  la  misma  tecnología.

Su capacidad de transferencia no es excesiva pero sí

ha tomado un papel relevante a la hora de funcionar

como interfaz con otros equipos. Un ejemplo claro es

la comunicación con teléfonos móviles donde puede

interactuar  tanto  para  comunicaciones  con  el

terminal  como  para  habilitación  de  módem  para  su

conexión a Internet. Esto permite a un usuario con

un ordenador y un teléfono móvil disponer de banda

ancha en cualquier lugar.

Fuente: Nota. Elaboración propia.

4.2.1 Comunicaciones por puerto

A  la  vista  de  lo  expuesto,  se  puede  proponer  una  serie  de  modos  de  comunicación  que

escapen  de  los  habituales  sin  que  esto  implique  que  deban  tener  una  consideración

especial.  Así,  las  comunicaciones  entre  puertos  pueden  suponer  una  ayuda  importante

cuando se desean realizar pequeñas transferencias. Por supuesto que no se dispone de

las opciones que una red puede ofrecer, pero tampoco conllevan dificultad ninguna.

Para conexionar dos PC a través de puerto, hay que definir bajo cuál se desea trabajar. Así

hay  cables  preparados  capaces  de  interconectar  mediante  USB  ordenadores  ofreciendo

toda la potencia del puerto al servicio de la comunicación (hasta 12 Mbps). Estos cables no

son “transparentes”, sino que conllevan una electrónica asociada encargada de gestionar

la  transferencia  de  datos.  Sin  embargo,  es  posible  comunicar  dos  PC  a  través  de  sus

puertos  serie  o  paralelo  con  un  sencillo  cable  denominado  “MÓDEM  nulo”.  Tras  la

56

interconexión con el citado cable, existen multitud de aplicaciones software encaminadas a

facilitar la gestión y el trasiego de ficheros entre los equipos.

Obviamente  todo  lo  expuesto  tiene  sentido  en  un  entorno  local  donde,  por  ejemplo,  se

desea  conectar  un  PC  portátil  con  otro  de  sobremesa  sin  querer  recurrir  a  una  red  o  a

sistemas  más  complejos.  Por  encima  de  estos  requerimientos,  han  de  adoptarse  otras

tecnologías que no tienen por qué ser más complicadas, pero sí más efectivas. Tal puede

ser  el  caso  de  una  simple red  (entre  dos  equipos  es posible montar  una  estrella con  un

único cable) o mediante comunicaciones inalámbricas.

4.2.2 Comunicaciones por infrarrojo

Como ya se indicaba en la presentación de los puertos, los infrarrojos toman un especial

protagonismo cuando sólo se dispone de un ordenador y un terminal de teléfono móvil. Si

bien esta conexión pudiera haber sido englobada en el apartado anterior, se ha optado por

su tratamiento independiente dada su catalogación Wireless.

En definitiva, se trata de enfrentar los dos puertos infrarrojos (el del PC y el del otro equipo)

para establecer la comunicación; el proceso no requiere de mayor dificultad. En este sentido

es  más  importante  saber  contra  qué  equipo  se  está  trabajando  para  saber  de  qué

capacidades  se  dispone  que  prestar  excesiva  atención  a  los  aspectos  básicos  de  la

comunicación.  Sistemas  con  Windows,  a  partir  de  su  versión  XP  en  adelante,  así  como

diversas distribuciones de Linux (especialmente Ubuntu) han facilitado de forma importante

todo el proceso para que el usuario sólo deba atender a los aspectos operativos.

De este modo, si dispone de un ordenador con infrarrojos y lo enfrenta a otro con la misma

capacidad a no más de 60 cm (aunque el estándar es más flexible), oirá una señal acústica

con la que el equipo le avisará de la proximidad de un dispositivo por infrarrojos, además

de un mensaje de texto.

Tanto sea un terminal de telefonía móvil o un PC, a través de este icono podrá enviar y

recibir ficheros de un modo inalámbrico y cómodo; bastará con arrastrar los ficheros a través

de  una  ventana  ofrecida  por  la  propia  aplicación.  Lo  realmente  interesante  comienza

cuando se quiere establecer una comunicación más elaborada para, por ejemplo, acceder

a Internet a través del terminal de teléfono. Son dos las opciones disponibles: GSM o GPRS.

La primera de ellas permite utilizar el terminal como un módem al uso, estableciendo una

comunicación  tan  sencilla  como  se  haría  a  través  de  una  línea  telefónica.  El  principal

problema  estriba  en  la  velocidad,  que se acota de  forma importante no superando  en  la

mayor parte de los casos los 9.300 baudios. Para establecer esta comunicación basta con
57

disponer  de  una  cuenta con  ISP (la mayor  parte  de  ellos la ofrecen de  forma  gratuita) y

configurar una conexión telefónica a redes con los datos suministrados por el proveedor de

acceso a Internet usando como terminal el propio teléfono (cuyos drivers habrán debido ser

cargados de forma previa).

La otra opción es establecer una comunicación por infrarrojos con el terminal y éste, a su

vez,  una  comunicación  GPRS  a  Internet.  Este  proceso  requiere  dar  de  alta  el  número  a

través del cual se va a realizar la comunicación con la operadora que proporciona cobertura

al teléfono móvil y, en la mayor parte de los casos, descargar una aplicación que facilita la

conexión.

De forma habitual el proveedor suele incluir una máscara que se encarga de bajar de peso

las  imágenes  (penalizando  en  la  calidad  de  las  mismas)  a  fin  de  optimizar  el  tráfico  de

información. No obstante, también éste es un proceso para el cual se pide autorización al

usuario.

4.2.3 Conexión bluetooth

Para López (2007) “el Bluetooth es una tecnología similar al Wifi, pero se diferencia de este
porque su alcance es menor, aproximadamente 10 metros; y no consume tanta energía. Se
considera ideal para celulares, cámaras, mouse, etc.” (p.54).

La  tecnología  Bluetooth,  destinada  a  interconectar  elementos  tan  dispares  como

ordenadores,  impresoras,  ratones,  teclados,  teléfonos  móviles,  PDA…  de  una  forma

sencilla y rápida, realmente no es algo reciente sino todo lo contrario. Ya en 1994 Ericsson

realizaba estudios sobre un enlace de radio denominado MC link, precursor de la tecnología

que hoy conocemos15. No obstante, ha tenido que ser la telefonía móvil la que haya puesto

de  moda  otra  vez  este  modo  de  comunicación  inalámbrico.  Así,  comunicaciones  entre

pequeños  dispositivos  (incluidos  los  auto  radio  y  manos  libres  de  los  vehículos)  han

encontrado en el Bluetooth su caldo de cultivo ideal.

58

La tecnología Bluetooth es, en definitiva, un sistema de comunicación vía radio y esto le

obliga  a  ajustarse  a  unos  patrones  de  frecuencia  regulados  a  nivel  mundial  para  que  la

comunicación sea viable a nivel global. Esto se consigue en el canal ISM (Médico Científico

Internacional) situado en los 2.45 GHz, con rangos que van desde los 2,400 MHz hasta los

2483,5 MHz, y, sobre este abanico, se establecen diferentes sub-bandas. Situado pues el

canal, se hacía preciso establecer un sistema que evitase las múltiples interferencias que

entre dispositivos se pudieran producir. Para paliar este problema se optó por el salto de

frecuencia o FH, es decir, dividir la banda de frecuencia existente en diferentes canales que

puedan servir de “pasarela” aleatoria en una comunicación concreta. Esto reduce el ancho

de  banda  puntual  haciendo  trabajar  al  sistema  en  banda  estrecha  con  gran  cantidad  de

canales ya que se producen del orden de 1.600 saltos por segundo.

Para  establecer  una  comunicación  entre  dos  dispositivos  basta  con  que  se  encuentren

dentro del radio de acción y que sus características hardware se lo permitan disponiendo

de  un  mismo  perfil  de  un  total  de  20  potencialmente  disponibles  normalizados  (con

independencia  de  que  las  validaciones  software  procedan  a  autorizar  o  no  la  conexión).

Una comunicación de este tipo recibe el nombre de piconet y se caracteriza porque uno de

los dispositivos toma el papel de maestro (máster), mientras que el otro lo hace de esclavo

(Slave). Ambos dispositivos pueden alternar sus papeles, pero en todo momento sólo habrá

un maestro en la comunicación que podrá comprender hasta ocho elementos. Aun así, si

se precisa un número mayor, un mismo maestro puede serlo entre varias redes hasta un

total de 10, lo que daría la posibilidad de interconectar 8 x 10 = 80 elementos – 8 maestros

= 72 dispositivos.

4.3 Comunicaciones remotas: banda estrecha

Si bien los sistemas de comunicación “locales”, por aplicarles algún término, pueden ser

apropiados  para  situaciones  concretas,  no  alcanzan  las  prestaciones  requeridas  por

sistemas  más  exigentes.  Así,  el  acceso  a  Internet  o  cualquier  otra  red  remota  debe  ser

soportado por otra serie de sistemas.

La tendencia es aprovechar lo existente y, como los americanos dicen, superar la dificultad

de la última milla, es decir, llegar hasta el punto preciso donde se desea. Este problema

está solucionado si se recurre a infraestructuras que en el pasado (y el presente) cubrían
59

ciertas necesidades y que ahora pueden ser reconvertidas: las líneas telefónicas. El tendido

telefónico es prácticamente universal en todas las zonas habitadas del planeta y cubierto

en un 100% en aquellas sociedades capaces de disponer de una tecnología adecuada para

la transmisión de datos. El típico par de hilos destinado a las conversaciones telefónicas en

banda estrecha puede ser reaprovechado para las necesidades de comunicación actual.

En esta línea (y nunca mejor aplicada la expresión) se han dado dos soluciones opuestas

y válidas: la transmisión analógica y la transmisión digital.

Dentro  del  primer  grupo  dedicado  a  las  transmisiones  analógicas  aparece  un  elemento

imprescindible: el módem. Un módem, cuyo nombre viene de la conjunción de las palabras

modulador y demodulador, tiene como misión la de convertir la información digital utilizada

por  el  PC  en  una  información  analógica,  apropiada  para  ser  transmitida  por  una  línea

telefónica  como  si  de  una  conversación  se tratara.  Obviamente,  al  final  de  la  línea,  otro

módem  receptor  debe  realizar  la  función  inversa:  convertir  la  información  analógica  en

información digital para que sea apropiada para su tratamiento informático.

El módem es un elemento apropiado si no se tienen demasiadas exigencias de velocidad

ya que se limita, en el mejor de los casos, a 56 Kbps y sólo en sentido de bajada (desde el

servidor  hasta  el  PC).  Su  configuración  en  un  PC  en  poco  difiere  de  lo  que  podría  ser

cualquier otra tarjeta que, en los sistemas actuales, se enmarca dentro de la auto detección

del  Plug&Play.  Será  cuestión  de  que  el  proveedor  de  acceso  a  Internet  (ISP)  facilite  al

usuario los datos imprescindibles para realizar la conexión.

Obviamente, dado que se aprovecha la línea telefónica para esta comunicación, durante el

uso de esta para procesos de comunicaciones no será posible usarla para voz.

4.4 Comunicaciones remotas: banda ancha

La  otra  opción  apuntada  en  el  apartado  anterior  hace  referencia  a  las  comunicaciones

digitales. También aquí hay un producto estrella en estos momentos si bien ha sido fruto de

una evolución: la ADSL. La ADSL o Asymetric Digital Subscriber Line es una evolución de

algunas  tecnologías  y  compañera  de  otras  en  las  que  existe  un  denominador  común:  la

transmisión digital. Dado que ya no se precisa la conversión requerida por los módems, la

velocidad se incrementa de forma exponencial, siendo un producto habitual el de la ADSL

de 10 o 12 Mbps (aunque algunas compañías ya comercializan tasas de 20 Mbps). Esta

60

tecnología  proporciona  la  posibilidad  de  compartir  la  línea  permitiendo,  a  la  vez  que  se

establece una comunicación, mantener una conversación telefónica.

Sobre la base de la ADSL, existen algunas variaciones, presentadas en la tabla 7:

Tabla 7

Variaciones ADSL

Puerto

Descripción

VSDL

La Very High Speed Digital Suscriber Line o Línea de

abonado  digital  de  muy  alta  velocidad  es,  como  su

propio nombre indica, un paso adelante por encima

de la tecnología ADSL. Esto implica un aumento de

prestaciones  que,  cómo  no,  están  en  consonancia

con  un  aumento  deprecio.  No  obstante,  la  VDSL

ofrece una versatilidad que la ADSL no: la opción de

determinación si se desea un producto asimétrico. De

este modo, el usuario, en función de sus necesidades

específicas,  determinará  si  quiere  potenciar  la

recepción  o  se  desea  equiparar  (sincronizar,  en  el

sentido  de  volumen  de  datos)  la  recepción  y  la

transmisión.

HDSL

La  Línea  Digital  de  Abonados  de  alta  tasa  de  bits

(High  bit-rate  DigitalSubscriber  Line,  HDSL)  fue  la

tecnología sucesora de la DSL para dar cobertura de

banda  ancha  a  los  usuarios  que  así  lo  requerían.

Soportada en líneas de cobre (al igual que el resto de

las  variantes)  se  hizo  muy  popular  en  los  entornos

meramente  telefónicos  (principalmente  en  las  PBX)

–aunque  también  se  puede  usar  con  otro  tipo  de

medios–.  La  HDSL  proporciona  una  comunicación

simétrica  bidireccional,  es  decir,  se  dispone  del

61

mismo  flujo  de  datos  potencial  de  recepción  y  de

emisión.

SDSL

La  Symmetric  Digital  Subscriber  Line  o  Línea  de

Abonados Digital Simétrica se encuentra aún en fase

de desarrollo formal en cuanto a normas se refiere.

En muchos de sus parámetros, es similar a la HDSL.

Así, como su nombre indica, también es simétrica y

bidireccional con un límite de distancia establecido en

3.048 m frente a los 3.658,5 m de la HDSL, aunque

hay versiones que alcanzan hasta los 5.500 m. Por

otro lado, también se soporta sobre un par trenzado

de  cobre,  lo  que  le  hace  apta  para  comunicaciones

telefónicas de voz.

Fuente: Nota. Elaboración propia.

4.5 Comunicaciones remotas: otras opciones

Por supuesto, el concepto de normalidad no es algo objetivo, sino que, en un gran número

de  cuestiones,  va  asociado  al  hábito  cotidiano.  Este  planteamiento  es  extensible  a  las

comunicaciones  donde  algunos  encuentran  como  solución  los  que  a  otros  les  parece

disparatado.  No  obstante,  las  limitaciones  de  las  operadoras  en  el  ámbito  geográfico

conllevan  el  uso  de  soluciones  alternativas  a  las  convencionales  y  no  por  ello  menos

eficientes. Un ejemplo podría ser las citadas a continuación:

•  La utilización de los satélites para la comunicación de Internet es una solución para

aquellas  zonas  geográficas  donde  no  se  disponga  de  otro  tipo  de  cobertura  o,

simplemente, se desee disponer de una conexión rápida, fiable y moderna. Cada

vez más instaurados, los satélites forman parte de muchos aspectos cotidianos de

nuestra vida a pesar de pasar desapercibidos. Telefonía, televisión, radio… son sólo

algunos ejemplos de comunicaciones que pueden depender de un satélite a varias

decenas de miles de kilómetros por encima de nuestras cabezas.

62

•  El  LMDS  (Local  Multipoint  Distribution  Service  o  Sistema  de  Distribución  Local

Multipunto) es un sistema de acceso a Internet inalámbrico usado, especialmente,

en  aquellas  zonas  donde  el  cable  aún  no  llega.  La  modulación  usada  es  QAM  o

QPSK. Mediante un sistema similar a la telefonía móvil, se establecen una serie de

estaciones base que dan cobertura de ADSL a una serie de sectores concretos. En

todo momento debe existir visibilidad entre la estación base y la antena del usuario

ya que en caso contrario sería imposible la comunicación.

•  Cable MÓDEM Se trata de otra solución común para el acceso a Internet. En este

caso, el medio utilizado es el mismo que el usado por la televisión por cable. Este

sistema, al igual que las ADSL convencionales, comparte el ancho de banda entre

todos los usuarios y, por tanto, depende del número de conexiones simultáneas.

•  El PLC (Power Line Communication) es un sistema de comunicación que aprovecha

el cableado eléctrico para la transmisión de datos. En este caso, el proveedor de

Internet es la propia compañía eléctrica y supone una ampliación a la cobertura de

la red donde otros medios como el teléfono o la cobertura inalámbrica no llegan. El

sistema es relativamente sencillo ya que, en esencia, se basa en filtros capaces de

“separar” la señal de datos que oscila entre los 1,6 y 30 MHz de la señal senoidal

que, en España, es de 50 Hz. Esto se consigue mediante un módem PLC.

  Para ampliar sobre el tema de conexiones te invito a ver el siguiente tema:

Mastering it (14 de abril 2019). Medios inalámbricos, bluetooh, wimax, banda
ancha satelital. [video].

63

El acceso móvil a internet ofrece una conexión continua a internet mientras usted camina o viaja
en autobús, tren, automóvil o avión. Así mismo el prototipo integra la función de internet móvil,
conectándose desde cualquier punto remoto (Parsons, 2008).

4.6 WIFI

La Wi-Fi (Wireless High Fidelity), normalizada bajo el estándar 802.11, permite comunicar

equipos entre sí en radios razonables de algunos kilómetros (una decena en el mejor de los

casos  y  muy  en  dependencia  del  entorno)  a  tasas  de  transmisión  aceptables.  Así,  el

estándar 802.11a admite hasta 54 Mbps dentro de la frecuencia de los 5 GHz y el 802.11b

hace lo propio con 11 Mbps en 2,4 GHz (la misma banda que utiliza el Bluetooth) con el

inconveniente actual de que son incompatibles entre sí de forma directa (que no a través

de una interfaz apropiada). Como se observa, aún bajo la peor de las opciones, se trata de

una solución que incluso supera las prestaciones de las antiguas redes Ethernet (no así la

Fast Ethernet o Giga Ethernet).

No obstante, la gran ventaja del Wi-Fi no se basa exclusivamente en su tasa de transmisión

de  datos,  superable  con  cable  o  fibra.  Hay  otro  parámetro  que  la  hace  atractiva:  su

característica Wireless. Por Wireless se entiende todas aquellas tecnologías que, con una

traducción  literal,  hacen  referencia  a  una  comunicación  “sin  cables”  o,  simplemente,

inalámbrica. En otras palabras: nos encontramos ante una posibilidad de transmisión real

con una tasa totalmente operativa para la mayor parte de las aplicaciones y que, además,

no precisa de una infraestructura hardware de cableado. Este concepto recibe el nombre

de WLAN o Wireless Local Area Network.

En  esencia  se  trata  de  un  sistema  que  comparte  el  ancho  de  banda  de  una  conexión

convencional de manera inalámbrica. Esto es, la posibilidad de, por ejemplo, tras disponer

de  una  conexión  ADSL,  ofrecer  a  los  usuarios  comprendidos  dentro  de  un  entorno

geográfico determinado la posibilidad de acceso a Internet distribuyendo el ancho de banda

como si de una red Ethernet se tratase.

64

Por otro lado, el precio de estos dispositivos también potencia su uso, más si cabe si se

compara  con  lo  que  puede  costar  realizar  un  cableado  (que  no  el  cable  como  tal).  La

novedad  de  este  sistema  en  su  día  hizo  que  muchas  empresas  abriesen  una  línea  de

negocio nueva en su actividad, consiguiendo que el mercado impusiese sus precios bajo

las leyes de la libre competencia.

Actualmente  el  protocolo  802.11g  se  ha  afianzado  siendo  un  estándar  de  facto  para

comunicaciones  domésticas,  coexistiendo  con  otras  tecnologías.  Tanto  es  así  que  se  ha

establecido  un  tándem  de  protocolos  donde  el  802.11b  se  usa  para  comunicaciones

exteriores (entre edificios) y el 802.11g para interiores.

Para conocer más sobre las redes wifi, te invito a ver el siguiente video:

Platzi. (15 de abril 2018). Cómo funcionan las REDES WIFI. [Video].

65

   Referencias citadas en UNIDAD 1

Martin-Pozuelo,  José (2014).  Mi  PC:  Actualización,  configuración,  mantenimiento  y

reparación. RA-MA

Vázquez  Gómez,  Juan  Bernardo  (2012).  Arquitectura  de  Computadoras  I.  Red  Tercer

Milenio

Parhami, Behrooz (2007). Arquitectura de computadoras I. McGraw-Hill.

Argüello,Daniel  M.  ,    Pérez,  Santiago  C.  y  Facchini,  Higinio  A.  (2018).  Arquitectura  de

computadoras. Universidad Tecnológica Nacional.

Kreisberger,  Stiven  Armero  (2011).  Mantenimiento  de  computadoras.  Taller  Editorial

Universidad del Cauca.

Asenjo, Rafael, Gutiérrez, Eladio, Ramos, Julián (2001). Fundamento de los computadores.

Universidad de Málaga.

Lopez, J. (2007). Redes inalámbricas Gíreles Lan. Coorporacion universitaria tecnológica

de bolivar.

66

 Glosario de los términos citados en la
UNIDAD 1

periféricos

Dispositivo que permite el intercambio de datos de un ordenador

con el exterior; incluye tanto los dispositivos de entrada o salida

(teclado, pantalla, impresora, etc.) como las memorias auxiliares

(unidades de discos).

Motherboard

La  placa  base,  placa  madre,  tarjeta  madre  o  board  (en  inglés

motherboard, mainboard) es una tarjeta de Circuito impreso a la

que se conectan las demás partes de la Computadora.

Puerto

Es una interfaz a través de la cual se pueden enviar y recibir los

diferentes  tipos  de  datos.  La  interfaz  puede  ser  de  tipo  física

(hardware) o puede ser a nivel lógico o de software, en cuyo caso

se usa frecuentemente el término puerto lógico (por ejemplo, los

puertos  de  redes  que  permiten  la  transmisión  de  datos  entre

diferentes computadoras).

Asymetric Digital

Es una evolución de algunas tecnologías y compañera de otras

Subscriber Line

en las que existe un denominador común: la transmisión digital

(ADSL)

Megabit por

Es  una  unidad  que  se  usa  para  cuantificar  un  caudal  de  datos

segundo (Mbps)

equivalente a 1000 kb/s

Wireless Local

Es  una  sistematización  de  comunicación  inalámbrico  para

Area Network

minimizar las conexiones cableadas.

(WLAN)

67

