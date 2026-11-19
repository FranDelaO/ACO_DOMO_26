ARQUITECTURA DE
COMPUTADORAS

Dirección de Educación a Distancia

Apartado Postal, 1874, San Salvador, El Salvador

Tel: 2251-8200 ext.: 1743

2

Sumario

Introducción .............................................................................. 4

Clase 17| Programas y lenguajes de programación ........................... 5

Clase 18| BASH ......................................................................... 13

Clase 19| Python ....................................................................... 25

Clase 20| Internet de las cosas .................................................... 39

Referencias citadas en UNIDAD 5 ............................................. 61

Glosario de los términos citados en la UNIDAD 5 ...................... 62

3

  Introducción

En la unidad 4, el estudiante desarrollo las competencias para poder distinguir y trabajar

con  las  diversas  arquitecturas  de  computadoras,  así  como  poder  trabajar  con  la

virtualización de máquinas, y saber la clasificación de las computadoras y la función de la

BIOS. Al identificar las arquitecturas, podemos seleccionar la arquitectura del computador

necesario para el desarrollo de aplicaciones utilizando lenguajes de programación.

En esta unidad 5 el alumno desarrollará las competencias necesarias para trabajar con los

lenguajes de programación de nivel intermedio y alto nivel, que son los ideales para escribir

programas de microcontroladores, el cuales sirven para trabajar con sistemas embebidos,

los  cuales  son  capaces  de  ejecutar  las  órdenes  grabadas  en  su  memoria,  además

aprenderá a crear proyectos basados en internet de las cosas, aprendiendo que dispositivos

utilizar y como implementarlos para determinadas tareas.

Al finalizar esta unidad el estudiante podrá realizar programas con Python, bash, y estos

los podrá utilizar para crear proyectos IoT.

4

Clase 17| Programas y lenguajes de
programación

17.  Programas y lenguajes de
programación

17.1 Códigos de máquina

Una  instrucción  describe  una  acción  muy  simple, del  estilo  de  “suma  esto  con

aquello”, “multiplica  las  cantidades  que  hay  en  tal  y  cual  posición  de  memoria”, “deja  el

resultado en tal dirección de memoria”, “haz una copia del dato de esta dirección en esta

otra  dirección”, “averigua  si  la  cantidad  almacenada  en  determinada  dirección  es

negativa”, etc. Las  instrucciones  se  representan  mediante  combinaciones  particulares  de

unos y ceros y, por tanto, se pueden almacenar en la memoria.

17.2 Lenguaje ensamblador

El  lenguaje  ensamblador,  es  el  lenguaje  de  programación  utilizado  para  escribir

programas  informáticos  de  bajo  nivel,  este  constituye  la  representación  más  directa  del

código  maquina  específico  para  cada  arquitectura  de  computadoras  legibles  por  un

programador (Murdocca et al, 2000).

En  los  primeros  tiempos  de  la  informática  los  programas  se  introducían  en  el  ordenador

directamente en código de máquina, indicando uno por uno el valor de los bits de cada una

de las posiciones de memoria. Para ello se insertaban, manualmente, cables en un panel

de conectores: cada cable insertado en un conector representaba un uno y cada conector

sin  cable  representaba  un  cero.  Como  puedes  imaginar,  programar  así  un  computador

5

resultaba una tarea ardua, extremadamente tediosa y propensa a la comisión de errores.

El más mínimo fallo conducía a un programa incorrecto. Pronto se diseñaron notaciones

que simplificaban la programación: cada instrucción de código de máquina se representaba

mediante un código mnemotécnico, es decir, una abreviatura fácilmente identificable con el

propósito de la instrucción. Por ejemplo, el programa podría representar como se muestra

en  la  figura  1.  El  programa  calcula  el  promedio  de  tres  números,  localizados  en  las

localidades de memoria #10, #11, y #12. El resultado parcial y final se guarda en la localidad

de memoria #13

Figura 1

Ejemplo de programa lenguaje ensamblador

Fuente: Nota. Elaboración propia.

En este lenguaje la palabra SUM representa la instrucción de sumar, DIV la de dividir y FIN

representa  la  instrucción  que  indica  que  debe  finalizar  la  ejecución  del  programa.  La

almohadilla  (#)  delante  de  un  número  indica  que  deseamos  acceder  al  contenido  de  la

posición de memoria cuya dirección es dicho número. El número 3 no lleva el símbolo #,

porque representa un número y no una localidad de memoria, es decir, se divide entre 3 la

suma para calcular el promedio. Los caracteres que representan el programa se introducen

en la memoria del ordenador con la ayuda de un teclado y cada letra se almacena en una

posición de memoria como una combinación particular de unos y ceros (su código ASCII,

por ejemplo).

El  ensamblador  es  un  programa  traductor  que  lee  el  contenido  de  las  direcciones  de

memoria  en  las  que  hemos  almacenado  códigos  mnemotécnicos  y  escribe  en  otras

posiciones de memoria sus instrucciones asociadas en código de máquina. El repertorio de

códigos  mnemotécnicos  traducible  a  código  de  máquina  y  las  reglas  que  permiten

6

combinarlos, expresar direcciones, codificar valores numéricos, etc., recibe el nombre de

lenguaje ensamblador, y es otro lenguaje de programación.

Te invito a ver el siguiente video, para comprender que es el lenguaje ensamblador y
como se utiliza:

Martino (29 de abril de 2020). Introducción a ensamblador – Formato de instrucciones.
[Video].

17.3 ¿Un programa diferente para cada ordenador?

Cada  CPU  tiene  su  propio  juego  de  instrucciones  y, en  consecuencia, un  código  de

máquina y uno o más lenguajes ensambladores propios. Durante mucho tiempo se intentó

definir algún tipo de “lenguaje ensamblador universal”, es decir, un lenguaje cuyos códigos

nemotécnicos, sin  corresponderse  con  los  del  código  de  máquina  de  ningún  ordenador

concreto, fuesen

fácilmente

traducibles  al  código  de  máquina  de  cualquier

ordenador. Disponer  de  dicho  lenguaje  permitiría  escribir  los  programas  una  sola  vez  y

ejecutarlos  en  diferentes  ordenadores  tras  efectuar  las  correspondientes  traducciones  a

cada código de máquina con diferentes programas ensambladores.  Si bien la idea es en

principio interesante, presenta serios inconvenientes:

•  Un lenguaje ensamblador universal no puede tener en cuenta cómo se diseñarán

ordenadores  en  un  futuro  y  qué  tipo  de  instrucciones  soportarán,  así  que

posiblemente quede obsoleto en poco tiempo.

•  Programar  en

lenguaje  ensamblador  (incluso  en  ese  supuesto

lenguaje

ensamblador universal) es complicadísimo por los numerosos detalles que deben

tenerse en cuenta.

Además, puestos a diseñar un lenguaje de programación general, ¿por qué no utilizar un

lenguaje  natural, es  decir  un  lenguaje  como  el  castellano  o  el  inglés?  Programar  un

7

computador  consistiría, simplemente, en  escribir  un  texto  en  el  que  indicásemos  qué

deseamos que  haga el ordenador usando el mismo lenguaje con que nos comunicamos

con otras personas.

17.4 Lenguajes de programación de alto nivel

Hay una solución intermedia: podemos diseñar lenguajes de programación que, sin ser tan

potentes y expresivos como los lenguajes naturales, eliminen buena parte de la complejidad

propia de los lenguajes ensambladores y estén bien adaptados al tipo de problemas que

podemos resolver con los computadores: los denominados lenguajes de programación de

alto nivel. El calificativo “de alto nivel” señala su independencia de un ordenador concreto.

Por contraposición, los códigos de máquina y los lenguajes ensambladores se denominan

lenguajes de programación de bajo nivel. En la figura 2 se muestra un programa que calcula

la media de tres números en un lenguaje de alto nivel típico (Python):

Figura 2

Ejemplo de programa en lenguaje de alto nivel

Fuente: Nota. Elaboración propia.

Las tres primeras líneas definen los tres valores y la cuarta calcula la media. Como puedes

ver, resulta mucho más legible que un programa en código de máquina o en un lenguaje

ensamblador.

Para cada lenguaje de alto nivel y para cada CPU se puede escribir un programa que se

encargue de traducir las instrucciones del lenguaje de alto nivel a instrucciones de código

de  máquina,  con  lo  que  se  consigue  la  deseada  independencia  de  los  programas  con

respecto a los diferentes sistemas computadores. Solo habrá que escribir una versión del

programa en un lenguaje de programación de alto nivel y la traducción de ese programa al

código de máquina de cada CPU se realizará automáticamente.

8

17.5 Compiladores e intérpretes

Hemos  dicho  que  los  lenguajes  de  alto  nivel  se  traducen  automáticamente  a  código  de

máquina, sí, pero has de saber que hay dos tipos diferentes de traductores dependiendo

de su modo de funcionamiento: compiladores e intérpretes.

Un compilador lee completamente un programa en un lenguaje de alto nivel y lo traduce en

su integridad a un programa de código de máquina equivalente. El programa de código de

máquina resultante se puede ejecutar cuantas veces se desee, sin necesidad de volver a

traducir el programa original.

En la figura 3 se muestra el esquema de interacción del compilador e interprete.

Figura 3

Esquema de representación de compilador e interprete

Programa
fuente

Compilador

Código
objeto

Fuente: Nota. Elaboración propia.

Un intérprete actúa de un  modo  distinto:  lee un programa escrito en un  lenguaje de  alto

nivel  instrucción  a  instrucción  y,  para  cada  una  de  ellas,  efectúa  una  traducción  a  las

instrucciones de código de máquina equivalentes y las ejecuta inmediatamente. No hay un

proceso  de  traducción  separado  por  completo  del  de  ejecución.  Además,  un  compilador

puede examinar el programa de alto nivel abarcando más de una instrucción cada vez, por

lo  que  es  capaz  de  producir  mejores  traducciones.  Un  programa  interpretado  suele  ser

mucho más lento que otro equivalente que haya sido compilado.

Aunque nada impide que compilemos o interpretemos cualquier lenguaje de programación,

ciertos lenguajes se consideran apropiados para que la traducción se lleve a cabo con un

compilador  y  otros  no.  Es  más  apropiado  hablar,  pues,  de  lenguajes  de  programación

típicamente interpretados y lenguajes de programación típicamente compilados.

9

Te  invito  a  ver  el  siguiente  video,  para  comprender  que  son  los  compiladores  y  los
intérpretes.

Jair Cárcamo Cárdenas (27 de abril de 2016). Compilación e Interpretación. [Video].

17.6 Python, Java y Bash

Python es un lenguaje de programación creado por Guido van Rossum en el año 1991, la

extensión de los creados es .py. En la actualidad Python se desarrolla como un proyecto

de Código abierto, administrado por la Python Software Foundation (Knowlton, 2009).

Existen  muchos  otros  lenguajes  de  programación,  ¿por  qué  aprender  Python?  Python

presenta una serie de ventajas que lo hacen muy atractivo, tanto para su uso profesional

como para el aprendizaje de la programación. Entre las más interesantes desde el punto

de vista didáctico tenemos:

Python es un lenguaje muy expresivo, es decir, los programas Python son muy compactos:

•  Un  programa  en  Python  suele  ser  bastante  más  corto  que  su  equivalente  en

lenguajes  como  C.  (Python  llega  a  ser  considerado  por  muchos  un  lenguaje  de

programación de muy alto nivel).

•  Python es muy legible. La sintaxis de Python es muy elegante y permite la escritura

de programas cuya lectura resulta más fácil que si utilizáramos otros lenguajes de

programación.

10

•  Python ofrece un entorno interactivo que facilita la realización de pruebas y ayuda a

despejar dudas acerca de ciertas características del lenguaje.

•  El entorno de ejecución de Python detecta muchos de los errores de programación

que escapan al control de los compiladores y proporciona información muy rica para

detectarlos y corregirlos.

•  Python  puede  usarse  como  lenguaje  imperativo  procedimental  o  como  lenguaje

orientado a objetos.

•  Posee  un  rico  juego  de  estructuras  de  datos  que  se  pueden  manipular  de  modo

sencillo.

Java  es  un  lenguaje  de  programación  orientado  a  objetos  desarrollado  por  Sun
Microsystems a principios de los años 90 (Gosling et al, 2005).

El lenguaje de programación Java es uno de los más utilizados en el mundo profesional. Se

diseñó por técnicos de Sun Microsystems a mediados de los años 90 como un lenguaje y

entorno de programación cuyos programas serían ejecutables en todo tipo de dispositivos:

teléfonos  móviles,  televisores,  microondas,  etc.  Al  presentarse  en  público,  Java  permitía

crear pequeños programas ejecutables en navegadores web: los denominados applets. En

ese momento, la posibilidad de extender la experiencia de la navegación con aplicaciones

interactivas era revolucionaria y dio un gran impulso al lenguaje. Pero finalmente Java se

impuso en el mundo de las aplicaciones web del lado del servidor. Las aplicaciones web

ofrecen  servicios  accesibles  con  el  mismo  protocolo  de  comunicación  que  usan  los

navegadores.

Finalmente,  no  (solo)  es  el  lenguaje  en  sí  lo  que  hace  productivo  el  trabajo  de  los

desarrolladores: la colección de utilidades y bibliotecas que lo acompañan es fundamental.

Java cuenta con un entorno de desarrollo muy rico y un gran conjunto de librerías de código,

es decir, colecciones de funciones ya escritas que el programador usa para no tener que

reinventar la rueda constantemente.

11

No obstante, programar con Java requiere un mayor esfuerzo que hacerlo con Python. Los

programas Java son más extensos y requieren de una gran atención a muchos detalles por

parte del programador.

Bash es un programa informático cuya función consiste en interpretar órdenes. Está basado

en  la  Shell de  Unix y  es compatible con  POSIX. Su nombre es un  acrónimo de  Bourne-

Again Shell — haciendo un juego de palabras sobre el Bourne  Shell, que fue uno de los

primeros intérpretes importantes de Unix (Johnson, 2004).

Bash es el intérprete del lenguaje de comandos o shell para el sistema operativo GNU. El

nombre  es  un  acrónimo  de  “Bourne-Again  SHell”,  un  juego  de  palabras  con  Stephen

Bourne, el autor del ancestro directo del actual shell de Unix sh, que apareció en la Séptima

Edición Versión de Bell Labs Research de Unix.

Si  bien  el  sistema  operativo  GNU  proporciona  otros  Shells,  incluida  una  versión  de  csh,

Bash es el Shell predeterminado. Al igual que otros programas de GNU, Bash es bastante

portátil.  Actualmente  se  ejecuta  en  casi  todas  las  versiones  de  Unix  y  algunos  otros

sistemas operativos, con soporte independiente Existen puertos para plataformas MS-DOS,

OS / 2 y Windows.

12

Clase 18| BASH

18. BASH

18.1 Variables con tipo

En  programación,  las  variables  son  estructuras  de  datos  que,  como  su  nombre  indica,

pueden  cambiar  de  contenido  a  lo  largo  de  la  ejecución  de  un  programa.  Una  variable

corresponde a un área reservada en la memoria principal del ordenador pudiendo ser de

longitud (Berzal, 2009).

Hasta  ahora  todas  las  variables  que  hemos  usado  son  de  tipo  cadena  de  caracteres.

Aunque en los primeros shells las variables sólo podían contener cadenas de caracteres,

después se introdujo la posibilidad de asignar atributos a las variables que indiquen, por

ejemplo, que son enteras o de sólo lectura. Para fijar los atributos de las variables, tenemos

el comando interno declare, el cual tiene la siguiente sintaxis:

declare [±opciones] [nombre[=valor]]

La Tabla 1 describe las opciones que puede recibir este comando. Una peculiaridad de este

comando es que para activar un atributo se precede la opción por un  guion  , con lo que

para desactivar un atributo decidieron preceder la opción por un +.

Tabla 1

Opciones del comando interno declare

Opción

Descripción

-a

-f

La variable es de tipo array

Mostrar  el  nombre  e  implementación  de  las
funciones

13

-F

-i

-r

-x

Mostrar solo el nombre de las funciones

La variable es de tipo entero

La variable es de solo lectura

Exportar la variable (equivalente a export)

Fuente: Nota. Elaboración propia.

Si  escribimos  declare  sin  argumentos,  nos  muestra  todas  las  variables  existentes  en  el

sistema. Si usamos la opción  f, nos muestra sólo los nombres de funciones (las veremos

en la práctica siguiente) y su implementación, y si usamos la opción  F, nos muestra sólo

los nombres de las funciones existentes.

La opción  i declara (Bash no exige que se declaren las variables) la variable de tipo entero,

lo  cual  permite  que  podamos  realizar  operaciones  aritméticas  con  ella.  Por  ejemplo,  si

usamos variables normales para realizar operaciones aritméticas. En la figura 4 se muestra

un programa en Bash para multiplicar dos valores.

Figura 4

Ejemplo de código Bash

Fuente: Nota. Elaboración propia.

Para que la operación aritmética tenga éxito, no es necesario que declaremos como enteras

a var1 y var2, basta con que recojamos el valor en una variable “resultado” declarada como

entera.

14

Te invito a ver el siguiente video, para comprender como se desarrollan y ejecutan los
scripts en Bash

Duhnnae (15 de julio de 2017). Tutorial para aprender bash - Linux Terminal - Scripts.
[Video].

18.2 Expresiones aritméticas

Los valores de todas las variables de la shell de Bash se almacenan en forma de cadenas

de caracteres. Aunque esta característica hace que el procesamiento de datos simbólicos

sea  fácil  y  agradable,  también  hace  que  el  procesamiento  de  datos  numéricos  presente

algunas dificultades. La razón es que los datos enteros se almacenan, en realidad, en forma

de cadenas de caracteres. Para poder realizar operaciones aritméticas y lógicas con ellos,

es preciso traducirlos a enteros y volver a traducir el resultado a una cadena de caracteres

para almacenarla correctamente en una variable de la Shell.

Afortunadamente,  en  la  Shell  de  Bash  existen  varias  maneras  de  realizar  operaciones

aritméticas con datos numéricos:

•  Utilizando la expansión del Shell $((expresión))

•  Utilizando la orden let

La  evaluación  de  expresiones  se  efectúa  empleando  enteros  largos  y  no  se  hacen

comprobaciones  de  desbordamiento.  Cuando  se  utilizan  variables  de  la  Shell  en  una

expresión,  las  variables  se  expanden  (se  sustituyen  las  variables  por  sus  valores  en  la

expresión) y se traducen al tipo entero largo antes de efectuar la evaluación de la expresión.

15

18.2.1 Expansión del shell $((expresión))

Shell Unix  y  Linux  vienen  con  un  Shell  Bourne  denominado  Bash, escrito  por  la

organización  «Free  Software  Foundation». El  nombre  Bash  proviene  de  Bourne  Again

Shell, uno  de  los  tantos  juegos  de  palabras  en  Unix. Bash  es  el  Shell  predeterminado

cuando uno usa Linux (Johnson, 2009).

Para que el Shell evalúe una operación aritmética y no la tome como argumentos de un

comando, las expresiones aritméticas deberán ir encerradas entre $(( y )).

$((expresión))

Las  expresiones  aritméticas,  al  igual  que  las  variables  y  la  sustitución  de  comandos,  se

evalúan dentro de las comillas doble (“ ”).

En la figura 5 se muestra un ejemplo de código Bash con el uso de $(())

Figura 5

Ejemplo de código Bash con el uso de $((expresión))

Fuente: Nota. Elaboración propia.

En la Tabla 2 se muestran algunos de los operadores aritméticos soportados por Bash.

Tabla 2

Operadores aritméticos admitidos por Bash

Operador

Descripción

+

*

Suma

Multiplicación

16

-

/

%

()

**

Resta

División entera

Resto de la división entera

Agrupar operaciones

Potencia

Fuente: Nota. Elaboración propia.

Te invito a ver el siguiente video, para comprender el uso de operaciones aritméticas en
bash.

Javier Pedrero (5 de mayo de 2020). Operaciones aritméticas. [Video].

18.2.2 Similitud con las expresiones aritméticas C

Las  expresiones  aritméticas  de  Bash  se  han  diseñado  de  forma  equivalente  a  las

expresiones de C.

Por ejemplo $((x+=2)) añade 2 a x.

Aunque algunos operadores (por ejemplo “*” o los paréntesis) son caracteres especiales

para Bash, no hace falta precederlos por el carácter de escape siempre que estén dentro

de $((...)). Igualmente, a las variables que están dentro de la expresión aritmética no hace

falta precederlas por $ para obtener su valor.

Bash, además, nos permite usar los operadores relacionales (<, >, <= ,>= ,== ,!=) y lógicos

de C (!, &&, ||) interpretando, al igual que C, el 1 como cierto y el 0 como falso.

17

18.2.3 El comando interno let

El comando interno let nos permite asignar el resultado de una expresión aritmética a una

variable. Tiene la siguiente sintaxis:

let var=expresión

La expresión, es cualquier expresión aritmética y no necesita estar encerrada entre $((...)).

El comando let, a diferencia del comando declare  i, no crea una variable de tipo entero,

sino  una  variable  de  tipo  cadena  de  caracteres  normal.  Por  ejemplo,  en  la  figura  6  se

muestra la forma de utilizar los comandos let y declare:

Figura 6

Ejemplo de código Bash en el uso de los comandos let y declare

Fuente: Nota. Elaboración propia.

Vemos que “a” es de tipo cadena, mientras que si usamos “declare  i” nos la crea de tipo

entero. En la figura 7 muestra el uso del comando declare -i.

Figura 7

Ejemplo de código Bash con el uso del comando declare -i

Fuente: Nota. Elaboración propia.

Al  igual  que  pasa  con  las  variables  normales,  las  declaradas  con  let  no  pueden  tener

espacios entre la variable y el signo =, ni entre el signo = y el valor. No obstante, sí pueden

tener  espacios  si  encerramos  la  expresión  entre  comillas,  en  la  figura  8  se  muestra  el

ejemplo de lo antes mencionado.

18

 Figura 8

Ejemplo de código bash con el uso de comillas en el comando let

Fuente: Nota. Elaboración propia.

18.3 Las sentencias condicionales

Hasta  ahora  un  programa  no  era  más  que  una  secuencia  de  instrucciones  que  son

ejecutadas en el orden en que son formuladas. El orden de ejecución de las sentencias es

lo  que  se  conoce  por  el  flujo  del  programa,  y  se  puede  variar  a  voluntad  utilizando  las

sentencias de control de flujo, con las que es muy fácil alterarlo para adecuarlo a nuestras

necesidades.  Básicamente,  existen  tres  tipos  de  sentencias,  secuencial,  condicional  e

iterativa, y con ellas se puede escribir cualquier programa.

18.3.1 Las sentencias if, elif y else

El  lenguaje  nos  obliga a  que  las  sentencias  estén  organizadas  con  esto  saltos  de  línea,

aunque también se pueden poner los then en la misma línea que los if, para lo cual debemos

usar  el  separador  de  comandos,  que  en  Bash  es  el  punto  y  coma  (;),  en  la  figura  9  se

muestra la sintaxis.

Figura 9

Sintaxis if, elif y else

Fuente: Nota. Elaboración propia.

19

18.3.2 Los códigos de terminación

En UNIX los comandos terminan devolviendo un código numérico al que se llama código

de terminación (exit status) que indica si el comando tuvo éxito o no.

Aunque no es obligatorio que sea así, normalmente un código de terminación 0 significa

que el comando terminó correctamente, y un código entre 1 y 255 corresponde a posibles

códigos  de  error.  En  cualquier  caso,  siempre  conviene  consultar  la  documentación  del

comando para interpretar mejor sus códigos de terminación. Por ejemplo, el comando diff

devuelve 0 cuando no encuentra diferencias entre los ficheros comparados, 1 cuando hay

diferencias, y 2 cuando se produce algún error (por ejemplo, uno de los ficheros pasados

como argumento no se puede leer).

18.3.3 La sentencia exit

La  sentencia  exit  puede  ser  ejecutada  en  cualquier  sitio,  y  lo  que  hace  es  abandonar  el

script. Suele usarse para detectar situaciones erróneas que hacen que el programa deba

detenerse, aunque a veces se utiliza para "cerrar" un programa.

18.3.4 Operadores lógicos y códigos de terminación

Podemos combinar varios códigos de terminación de comandos mediante los operadores

lógicos and (representada con &&), or (representada con ||) y not (representada con !).

Estas operaciones, al igual que en otros lenguajes como C o Java, funcionan en shortcut,

es decir, el segundo operando sólo se evalúa si el primero no determina el resultado de la

condición. Según esto la operación se muestra en la figura 10:

Figura 10

Ejemplo de operadores lógicos

Fuente: Nota. Elaboración propia.

20

El código ejecuta el comando cd /tmp, y si éste tiene éxito (el código de terminación es 0),

ejecuta el segundo comando cp 001.tmp $HOME, pero si el primer comando falla, ya no se

ejecuta el segundo porque para que se cumpla la condición ambos comandos deberían de

tener éxito (si un operando falla ya no tiene sentido evaluar el otro).

18.3.5 Test condicionales

La sentencia if lo único que sabe es evaluar códigos de terminación. Pero esto no significa

que  sólo  podamos  comprobar  si  un  comando  se  ha  ejecutado  bien.  El  comando  interno

“test” nos permite comprobar otras muchas condiciones, que le pasamos como argumento,

para acabar devolviéndonos un código de terminación.

Test [condición]

18.3.6 If aritmético

Las expresiones aritméticas pueden usarse en las distintas sentencias de control de flujo,

en cuyo caso la expresión va entre dobles paréntesis, pero sin el $ delante, por ejemplo, el

if aritmético tendría la forma mostrada en la figura 11.

Figura 11

Sintaxis if expresión aritmética

Fuente: Nota. Elaboración propia.

18.4 El bucle for

El bucle for en Bash es un poco distinto a los bucles for tradicionales de lenguajes como C

o Java; en realidad, se parece más al bucle for each de otros lenguajes, ya que aquí no se

21

repite un número fijo de veces, sino que se procesan los elementos de una lista uno a

uno. Su sintaxis se muestra en la figura 12.

Figura 12

Sintaxis for

Fuente: Nota. Elaboración propia.

18.5 Bucles while y until

Los  bucles  while  y  until  son  útiles  cuando  los  combinamos  con  características  como  la

aritmética con enteros, la entrada y salida de variables, y el procesamiento de opciones de

la línea de comandos. Su sintaxis se muestra en la figura 13:

Figura 13

Sintaxis while y until

Fuente: Nota. Elaboración propia.

22

18.6 Entrada y salida de texto

En  este  apartado  comentaremos  detalladamente  los  comandos  echo,  printf  y  read,  los

cuales nos permiten realizar las operaciones de entrada/salida que requiere un script.

Un script es un archivo interpretado con extensión .sh, el cual contiene una colección de

órdenes Bash que serán ejecutadas por la Shell (Johnson, 2009).

18.6.1 El comando interno echo

Como ya sabemos, echo simplemente escribe en la salida estándar los argumentos que

recibe. En la tabla 3 se muestran las opciones disponibles para el comando echo.

Tabla 3

Opciones que podemos pasarle a echo

Opción

Descripción

-e

-E

Activa

la

interpretación  de

caracteres

precedidos por el carácter de escape

Desactiva  la  interpretación  de  caracteres

precedidos  por  carácter  de  escape.  Es  la

opción por defecto

-n

Omite  el  carácter  \n  al  final  de  la  línea  (es

equivalente a la secuencia de escape \c)

Fuente: Nota. Elaboración propia.

18.6.2 El comando interno printf

Aunque  el  comando  echo  es  suficiente  en  la  mayoría  de  los  casos,  en  ocasiones,

especialmente a la hora de formatear texto en pantalla, es necesario más flexibilidad. Para

estos casos se utiliza el comando printf. Este comando, en principio, puede escribir cadenas

igual que echo. En la figura 14 se muestra un ejemplo del uso del comando printf.

23

Figura 14

Ejemplo de escribir cadena con printf

Fuente: Nota. Elaboración propia.

18.6.3 El comando interno read

El comando read sirve para leer información del teclado y guardarla en variables. Su sintaxis

se muestra en la figura 15:

Figura 15

Sintaxis de uso read

Fuente: Nota. Elaboración propia.

Esta sentencia lee una línea de la entrada estándar y la parte en palabras separadas por el

símbolo  que  indique  la  variable  IFS  (por  defecto  espacio  o  tabulador).  Las  palabras  se

asignan  a  var1,  var2,  etc.  Si  hay  más  palabras  que  variables,  las  últimas  palabras  se

asignan a la última variable.

24

Clase 19| Python

19. Python

Existen  muchos  otros  lenguajes  de  programación,  ¿por  qué  aprender  Python?  Python

presenta una serie de ventajas que lo hacen muy atractivo, tanto para su uso profesional

como para el aprendizaje de la programación. Entre las más interesantes desde el punto

de vista didáctico tenemos:

•  Python  es  un  lenguaje  muy  expresivo,  es  decir,  los  programas  Python  son  muy

compactos: un programa Python suele ser bastante más corto que su equivalente

en lenguajes como C. (Python llega a ser considerado por muchos un lenguaje de

programación de muy alto nivel).

•  Python es muy legible. La sintaxis de Python es muy elegante y permite la escritura

de programas cuya lectura resulta más fácil que si utilizáramos otros lenguajes de

programación.

•  Python ofrece un entorno interactivo que facilita la realización de pruebas y ayuda a

despejar dudas acerca de ciertas características del lenguaje.

•  El entorno de ejecución de Python detecta muchos de los errores de programación

que escapan al control de los compiladores y proporciona información muy rica para

detectarlos y corregirlos.

•  Python  puede  usarse  como  lenguaje  imperativo  procedimental  o  como  lenguaje

orientado a objetos.

•  Posee  un  rico  juego  de  estructuras  de  datos  que  se  pueden  manipular  de  modo

sencillo.

19.1 Tipos de datos

En Python hay dos operadores de división. Uno es el convencional, que siempre produce

un número con decimales. En la figura 16 se muestra el uso del operador de división con

datos enteros y resultado con decimal.

25

Figura 16

Ejemplo división entera

Fuente: Nota. Elaboración propia.

Y otro es el operador  de  división  entera, que siempre produce un  número sin decimales

cuando sus operandos son enteros. En la figura 17 se muestra el uso del operador.

Figura 17

División que produce decimales

Fuente: Nota. Elaboración propia.

Fíjate en la diferencia entre el resultado de 4 / 2 y 4 // 2. ¿No es lo mismo 2.0 que 2? Pues

no exactamente. El número 2 es un número de tipo entero y el número 2.0 lo es de tipo

flotante (o, mejor dicho, tipo de coma flotante). Cada valor en Python es una instancia de

un tipo de dato y de momento hemos visto datos de dos tipos distintos.

19.1.1 enteros y flotantes

Hasta  el  momento  hemos  utilizado  fundamentalmente  datos  de  tipo  entero,  es  decir,  sin

decimales.  Solo  ocasionalmente  hemos  visto  datos  de  tipo  flotante,  normalmente  como

resultado  de  trabajar  con  el  operador  de  división  convencional.  Pero  no  solo  podemos

producir  datos  de  tipo  flotante  con  el  operador  de  división  convencional:  el  resto  de  los

operadores produce un resultado cuyo tipo depende del tipo de sus operandos. La suma,

por ejemplo, produce un resultado de tipo entero si sus dos operandos son de tipo entero,

26

pero produce un valor de tipo flotante si uno cualquiera de sus operandos es de tipo flotante.

En la figura 18 se muestra el uso de datos de diferente tipo en la suma aritmética.

Figura 18

Ejemplo de suma en python

Fuente: Nota. Elaboración propia.

Hay diferencias entre enteros y reales en Python más allá de que los primeros no tengan

decimales y los segundos sí. El número 3 y el número 3.0, por ejemplo, son indistinguibles

matemáticamente, pero diferentes en Python. ¿Qué diferencias hay?

•  Los enteros suelen ocupar menos memoria.

•  Las operaciones entre enteros son, generalmente, más rápidas.

Así  pues,  utilizaremos  enteros  a  menos  que  de  verdad  necesitemos  números  con

decimales.

Hemos  de  precisar  algo  respecto  a  la  denominación  de  los  números  con  decimales:  el

término «reales» no es adecuado, ya que induce a pensar en los números reales de las

matemáticas. En matemáticas, los números reales pueden presentar infinitos decimales, y

eso  es  imposible  en  un  computador.  Al  trabajar  con  computadores  tendremos  que

conformarnos con meras aproximaciones a los números reales.

19.1.2 booleanos

Hay  otro  tipo  de  datos  que  has  de  conocer,  pues  se  usa  muy  frecuentemente  en

programación: el tipo de datos lógico o booleano, llamado así por ser propio del álgebra de

27

Boolean. Un dato de tipo lógico solo puede presentar uno de dos valores: True o False, es

decir, verdadero o falso.

Hay  tres  operadores  lógicos  en  Python:  la  “y  lógica”  o  conjunción  (and),  la  “o  lógica”  o

disyunción (or) y el “no lógico” o negación (not). En la figura 19 se muestra la tabla de verdad

del operador “and”.

Figura 19

Tabla de verdad and

Fuente: Nota. Elaboración propia.

El  operador  or  proporciona  True  si  cualquiera  de  sus  operandos  es  True,  y  False  solo

cuando ambos operandos son False. Su tabla de verdad se muestra en la figura 20:

Figura 20

Tabla de verdad or

Fuente: Nota. Elaboración propia.

El operador not es unario, y proporciona el valor True si su operando es False y viceversa.

En la figura 21 se muestra la tabla de verdad del operador not.

28

Figura 21

Tabla de verdad not

Fuente: Nota. Elaboración propia.

19.2 Variables y asignaciones

En  ocasiones  deseamos  que  el  ordenador  recuerde  ciertos  valores  para  usarlos  más

adelante. Por ejemplo, supongamos que deseamos efectuar el cálculo del perímetro y el

área  de  un  círculo  de  radio  1.298373  m.  La  fórmula  del  perímetro  es  2πr,  donde  r  es  el

radio,  y  la  fórmula  del  área  es  πr2.  (Aproximaremos  el  valor  de  π  con  3.14159265359).

Podemos realizar ambos cálculos, como se muestra en la figura 22.

Figura 22

Ejemplo de cálculos de formulas

Fuente: Nota. Elaboración propia.

Así pues, para asignar valor a una variable basta ejecutar una sentencia como esta:

variable = expresión

Ten cuidado: el orden es importante. Hacer «expresión variable» no es equivalente. Una

asignación  no  es  una  ecuación  matemática,  sino  una  acción  consistente  en  (por  este

orden):

1.  evaluar la expresión a la derecha del símbolo igual ( = ), y

29

2.  guardar el valor resultante en la variable indicada a la izquierda del símbolo igual.

Se puede asignar valor a una misma variable cuantas veces se quiera. El efecto es que la

variable, en cada instante, solo «recuerda» el último valor asignado, hasta que se le asigne

otro.

19.3 Ejecución del programa desde la línea de ordenes

El programa que hemos escrito no solo puede ejecutarse desde el entorno de desarrollo.

Abre un intérprete de órdenes (en Unix, cualquier terminal te vale; en Windows escribe en

la  caja  de  búsqueda  del  icono  de  inicio,  situado  en  la  esquina  inferior  izquierda  de  la

pantalla, y pulsa retorno) y ve al directorio en el que se encuentra el fichero. En Unix escribe

y  pulsa  retorno  de  carro;  en  Windows  escribe  y  pulsa  retorno  de  carro.  A  continuación,

escribe.  El  sistema  responderá  imprimiendo  en  pantalla  el  resultado  de  ejecutar  el

programa, en la figura 23 se muestra la ejecución desde la línea de comandos.

Figura 23

Ejecución de un programa de Python en la consola

Fuente: Nota. Elaboración propia.

19.4 Entrada/Salida

Los programas que hemos visto en la sección anterior adolecen de un serio inconveniente:

cada  vez  que  quieras  obtener  resultados  para  unos  datos  diferentes  deberás  editar  el

fichero de texto que contiene el programa.

Por ejemplo, en la figura 24 se muestra un programa que calcula el volumen de una esfera

a partir de su radio de un metro.

30

Figura 24

Ejemplo de cálculos de formulas

Fuente: Nota. Elaboración propia.

Al ejecutar el programa obtenemos en pantalla este texto: 4.1887902047863905

19.4.1 Lectura de datos de teclado

Hay una función predefinida, input (en inglés significa «entrada»), que hace lo siguiente:

detiene la ejecución del programa y espera a que el usuario escriba un texto (el valor del

radio,  por  ejemplo)  y  pulse  la  tecla  de  retorno  de  carro;  en  ese  momento  prosigue  la

ejecución y la función devuelve una cadena con el texto que tecleó el usuario.

19.4.2 Función print

Las cadenas pueden usarse también para mostrar textos por pantalla en cualquier momento

a través de sentencias print. es una función, por lo que el contenido siempre debe estar

entre  paréntesis.  Cuando print()  incluye  una  expresión,  esta  es  evaluada  antes  de  ser

presentada  en  pantalla. Print()  puede  imprimir  en  pantalla  varias  expresiones  separadas

por comas o a través de las cadenas 'f'.

19.5 Estructuras de control

Estudiaremos una forma adicional de alterar el flujo de control que permite señalar, detectar

y tratar los errores que se producen al ejecutar un programa: las sentencias de emisión y

captura de excepciones.

19.5.1 Sentencias condicionales

En  esta  clase  se  trata  la  estructura  de  control if ... elif ... else ...:  Estas  construcciones

permiten condicionar la ejecución de uno o varios bloques de sentencias al cumplimiento

de una o varias condiciones.

31

19.5.1.1 if

La estructura de control if permite que un programa ejecute unas instrucciones cuando se

cumplan una condición. En inglés "if" significa "si" (condición). En la figura 25 se muestra la

sintaxis de la condición if.

Figura 25

Sintaxis de if en Python

Fuente: Nota. Elaboración propia.

Las acciones, que serán sentencias Python válidas, se escriben con un sangrado mayor

que el de la línea que contiene la condición. Estas acciones solo se ejecutan si la condición

proporciona como resultado el valor booleano True.

19.5.1.2 if-else

La  estructura de  control if ... else ... permite que un  programa ejecute unas  instrucciones

cuando se cumple una condición y otras instrucciones cuando no se cumple esa condición.

En inglés "if" significa "si" (condición) y "else" significa "si no". La orden en Python se escribe

como se muestra en la figura 26:

Figura 26

Sintaxis de if-else en Python

Fuente: Nota. Elaboración propia.

32

19.5.2 Sentencias iterativas

Iterar  significa  realizar  una  acción  varias  veces.  Cada  vez  que  se  repite  se  denomina
iteración.

19.5.2.1 While

Se basa en repetir un bloque a partir de evaluar una condición lógica, siempre que ésta sea

True. Queda en las manos del programador decidir el momento en que la condición cambie

a False para hacer que el While finalice. En la figura 27 se muestra la sintaxis del comando

While.

Figura 27

Sintaxis de while en Python

Fuente: Nota. Elaboración propia.

19.5.2.2 for-in

La sentencia iterativa for nos permite ejecutar un proceso un número determinado de veces

o  para  un  conjunto  determinado  de  valores. En  la  figura  28  se  muestra  la  sintaxis  del

comando for-in.

Figura 28

Sintaxis de for-in en Python

Fuente: Nota. Elaboración propia.

33

Te  invito  a  ver  el  siguiente  video,  para  comprender  como  se  programa  en  Python  de
forma básica.

Victor Robles WEB (15 de julio de 2020). Aprende Python en 15 Minutos. [Video].

19.6 Captura y tratamiento de excepciones

Ya has visto que en nuestros programas pueden aparecer errores en tiempo de ejecución,

es decir, pueden generar excepciones: divisiones por cero, intentos de calcular raíces de

valores negativos, problemas al operar con tipos incompatibles (como al sumar una cadena

y un entero), etc. Hemos presentado la estructura de control if como un medio para controlar

estos problemas y ofrecer un tratamiento especial cuando convenga (aunque luego hemos

considerado muchas otras aplicaciones de esta sentencia). En ocasiones, la detección de

posibles errores con if resulta un tanto pesada, pues modifica sensiblemente el aspecto del

programa al llenarlo de comprobaciones.

Hay una estructura de control especial para la detección y tratamiento de excepciones: try

except. Su forma básica de uso se muestra en la figura 29.

Figura 29

Sintaxis de try en Python

Fuente: Nota. Elaboración propia.

34

Te invito a ver el siguiente video, para comprender el uso de excepciones en Python

nicosiored (29 de enero de 2020). Excepciones- Python tutorial en español. [Video].

19.7 Funciones

Definiendo nuevas funciones en Python a hacer cálculos que inicialmente no sabe hacer y,

en cierto modo, adaptando el lenguaje de programación al tipo de problemas que deseamos

resolver, enriqueciéndolo para que el programador pueda ejecutar acciones complejas de

un modo sencillo: llamando a funciones desde su programa.

19.7.1 Definición y uso de funciones con un solo parámetro

Empezaremos definiendo una función muy sencilla, una que recibe un número y devuelve

el cuadrado de dicho número. El nombre que daremos a la función es cuadrado. Observa

este fragmento de programa en la figura 30:

Figura 30

Ejemplo de creación de función con un solo parámetro

Fuente: Nota. Elaboración propia.

35

19.7.2 Definición y uso de funciones con varios parámetros

No  todas  las  funciones  tienen  un  solo  parámetro.  Vamos  a  definir  ahora  una  con  dos

parámetros: una función que devuelve el valor del área de un rectángulo dadas su altura y

su anchura, en la figura 31 se muestra la función creada.

Figura 31

Ejemplo de creación de función con varios parámetros

Fuente: Nota. Elaboración propia.

19.7.3 Definición y uso de funciones sin parámetro

Vamos a considerar ahora cómo definir e invocar funciones sin parámetros. En  realidad,

hay  poco  que  decir:  lo  único  que  debes  tener  presente  es  que  es  obligatorio  poner

paréntesis a continuación del identificador, tanto al definir la función como al invocarla.

En la figura 32 se muestra un ejemplo donde se define y usa una función que lee de teclado

un número entero:

Figura 32

Ejemplo de creación de función sin parámetros

Fuente: Nota. Elaboración propia.

36

19.7.4 Procedimientos: funciones sin devolución de valor

No  todas  las  funciones  devuelven  un  valor.  Una  función  que  no  devuelve  un  valor  se

denomina procedimiento. ¿Y para  qué sirve una  función  que no  devuelve nada? Bueno,

puede, por ejemplo, mostrar mensajes o resultados por pantalla. No te equivoques: mostrar

algo  por  pantalla  no  es  devolver  nada.  Mostrar  un  mensaje  por  pantalla  es  un  efecto

secundario.

Veámoslo con un ejemplo. Vamos a implementar ahora un programa que solicita al usuario

un número y muestra por pantalla todos los números perfectos entre 1 y dicho número. El

programa se muestra en la figura 33.

Figura 33

Ejemplo de función sin devolución de valor

Fuente: Nota. Elaboración propia.

La  función  tabla_perfectos  no  devuelve  nada  (no  hay  sentencia  return):  es  un

procedimiento. También resulta interesante la línea 10: como es_perfecto devuelve True o

False, podemos utilizarla directamente como condición del if.

37

19.7.5 Funciones que devuelven varios valores mediante una

lista

En principio una función puede devolver un solo valor con la sentencia return. Pero sabemos

que una lista es un objeto que contiene una secuencia de valores. Si devolvemos una lista

podemos, pues, devolver varios valores. Podemos representar a la función con el diagrama

que se muestra en la figura 34:

Figura 34

Ejemplo de función que devuelve varios valores por una lista

Fuente: Nota. Elaboración propia.

38

Clase 20| Internet de las cosas
20. Internet de las cosas

Antes,  la  única  forma  de  interactuar  con  Internet  era  utilizar  un  navegador  web  en  el

ordenador. Un navegador permitía al ordenador enviar peticiones a un servidor web que le

devolvía información para que la mostrara. El navegador web mostraría esta información

mediante un monitor de ordenador, y el usuario escribiría texto en su teclado y seguiría los

hipervínculos  con  el  clic  de  un  ratón.  En  cuanto  a  las  entradas  y  salidas,  esas  eran  sus

opciones.

El Internet de las cosas (IoT) ha cambiado todo esto. Ahora se pueden conectar a Internet

todo tipo de sensores y aparatos. El IoT abarca una amplia gama de sistemas:

•  Sistemas de automatización del hogar que controlan la iluminación, la calefacción y

las puertas mediante el uso de un navegador web o de aplicaciones de smartphone

habilitadas para la red. Pueden utilizarse para controlar los sistemas a través de la

red de área local, o a través de Internet mediante WiFi o una red celular.

•  Sistemas de sensores, como el  sistema abierto de monitorización de la radiación

Safecast, desarrollado tras la catástrofe nuclear de Fukushima.

Los productos y proyectos de fabricantes que formarán parte del IoT están surgiendo por

todas partes. Entre ellos se encuentran proyectos de éxito como el termostato inteligente

Nest,  así  como  muchos  productos  del  IoT  que  utilizan  el  acelerómetro,  los  servicios  de

localización y las funciones de comunicación de los smartphones para captar información

sobre la salud y los niveles de actividad de las personas.

Dado que tanta gente está creando proyectos de IoT, tiene mucho sentido ofrecer un marco

modular  sencillo  tanto  para  el  hardware  como  para  el  software  que  proporcione  un  kit

tecnológico de IoT fácil de usar. Aquí es exactamente donde entra el equipo de Particle.

Proporcionan tecnología IoT en un dispositivo, un dispositivo muy pequeño y de bajo costo.

Además, la tecnología es fácil de usar, de código abierto y está basada en el popular marco

de software Arduino.

39

Te invito a ver el siguiente video, para comprender que es el internet de las cosas.

DW español (11 de octubre de 2019). Que es internet de las cosas. [Video].

20.1 Spark en la nube

El  componente  de  hardware  de  este  framework  de  IoT  es  el  Photon.  El  Photon  es  la

siguiente  generación  de  la  plataforma  IoT  de  Particle  que  comenzó  con  el  Spark  Core.

Aunque  existen  otras  tecnologías  que  ayudan  a  construir  dispositivos  IoT,  a  menudo  se

olvida el importante marco de software que permite que el dispositivo se comunique con

otros  dispositivos  y  navegadores  a  través  de  Internet.  El  enfoque  de  Particle,  por  el

contrario, integra el hardware y el software a la perfección.

La figura 35 muestra cómo un dispositivo IoT típico construido con un Photon o Core podría

interactuar con Internet. Un dispositivo IoT que utilice un Photon/Core podría proporcionar

el desbloqueo remoto de una puerta. En este caso, un usuario accedería a una página web

en un navegador que tiene un botón de desbloqueo. Esta página se habrá servido desde

un servidor web en algún lugar de Internet. Cuando el usuario pulsa el botón de desbloqueo

en el navegador, éste envía un mensaje al servicio en la nube que lo reenvía al Photon que

se  ejecuta  en  el  dispositivo  conectado.  El  Photon/Core  que  controla  el  cierre

electromecánico de la puerta sabe entonces que debe desbloquear la puerta.

40

Figura 35

Comunicación del Internet de las cosas

Fuente: Nota. Por Monk (2015).

Si, por el contrario, el dispositivo IoT actuara como sensor  -digamos, de temperatura-, el

Photon/Core  podría  enviar  las  lecturas  de  temperatura  a  un  servicio  en  la  nube.  Esas

lecturas podrían almacenarse temporalmente hasta que el navegador del usuario tuviera la

oportunidad de recogerlas y mostrar la última lectura en la ventana del navegador.

Para utilizar el servicio en la nube de Particle, primero se registra en línea con Particle y

luego identifica cada uno de sus Photons/Cores, que se habrán registrado en el servicio en

la nube como si fueran suyos. Lo único que necesita el Photon para registrarse es tener

acceso a tu red WiFi. Este proceso no  sólo le permite asegurarse de  que sabe  con qué

Fotón o Núcleo está interactuando, sino que también le permite programar sus Fotones y

Núcleos en el aire desde la comodidad de su navegador web.

41

20.2 Plataformas

Antes de sumergirse en las aguas deliciosamente cálidas y agradables de la piscina Photon,

merece la pena explorar algunos de los competidores del Photon. Esto también revelará

algo de las motivaciones que hay detrás del diseño del Photon.

Por supuesto, el Photon no es el único dispositivo IoT que existe. De hecho, la plataforma

más utilizada para el desarrollo del IoT es la placa de microcontroladores Arduino, aunque

el ordenador de placa única Raspberry Pi también se utiliza mucho en proyectos de IoT.

20.2.1 Arduino

Los  microcontroladores  son  esencialmente  ordenadores  de  baja  potencia  en  un  chip.

Tienen pines de entrada/salida (E/S) a los que se puede conectar la electrónica para que el

microcontrolador  pueda,  bueno,  controlar  cosas.  El  Arduino  es  una  placa  preparada,

sencilla y de bajo coste, que te permite utilizar un microcontrolador en tus proyectos.

El Arduino se ha convertido en la plataforma preferida por los makers y hackers que buscan

un microcontrolador para utilizar, y el modelo más común de Arduino es el Arduino Uno.

La popularidad de Arduino se debe a muchos factores:

•  Bajo coste (unos 25 dólares por un Arduino Uno)

•  Diseño  de  hardware  de  código  abierto:  no  hay  secretos  en  su  diseño  ni  en  el

software incorporado.

•  Entorno de desarrollo integrado fácil de usar con el que programar el Arduino.

•  Escudos  enchufables  que  se  conectan  a  la  parte  superior  del  Arduino  y  añaden

funciones. como pantallas y controladores de motor.

Hay, por supuesto, un factor que hace que un Arduino Uno por sí mismo sea inútil como

dispositivo IoT: no tiene conexión de red, ni por cable ni inalámbrica. Tienes que utilizar uno

de los modelos especializados de Arduino que incluyen un puerto de red Ethernet (como el

Arduino Ethernet o Yun) o añadir un escudo WiFi o Ethernet al Arduino que le dé la conexión

de

red  que  necesita  para  comunicarse  a

través  de

Internet.  Esto  aumenta

considerablemente el tamaño y el coste de tu proyecto.

42

La Figura 36 muestra un Arduino Uno con un escudo WiFi conectado. El coste total de esta

combinación es no más de 100 dólares.

Figura 36

Un Arduino Uno con un shield de WiFi

Fuente: Nota. Por Monk (2015).

Otra posibilidad es utilizar el Arduino Yun. Este dispositivo tiene el mismo tamaño que un

Arduino Uno, pero tiene un módulo WiFi incorporado. A primera vista, ofrece capacidades

de hardware similares a las del Photon, pero a un precio mucho más elevado, de unos 75

dólares.

Todas estas soluciones basadas en Arduino tienen una gran desventaja como plataforma

de IoT: el software. Proporcionan las capacidades básicas para comunicarse con Internet,

pero no ofrecen ningún marco de software que facilite la creación de proyectos de IoT sin

un montón de programación de red complicada.

Más adelante, verás cómo el Photon toma prestados muchos de los conceptos de Arduino,

incluido su lenguaje de programación, pero luego ofrece un marco de software con el que

43

construir tus proyectos de IoT, todo ello a un coste mucho menor del que puede competir

Arduino.

20.2.2 Raspberry pi y beaglebone

La Raspberry Pi y la BeagleBone Black son ordenadores de placa única, del tamaño de una

tarjeta de crédito, que ejecutan el sistema operativo Linux. Tienen puertos USB y salida de

vídeo  HDMI,  por  lo  que  puedes  configurarlos  con  un  teclado,  un  ratón  y  un  monitor  y

utilizarlos como un ordenador normal.

La  Raspberry  Pi  se  muestra  a  la  izquierda  en  la  Figura  37  y  la  BeagleBone  Black  a  la

derecha. Ambas placas pueden utilizar adaptadores WiFi USB de bajo coste y tienen pines

de E/S para controlar la electrónica e interactuar con los sensores, lo que las hace bastante

adecuadas para proyectos de IoT.

Figura 37

Raspberry Pi (izquierda) y BeagleBone Black (derecha)

Fuente: Nota. Por Monk (2015).

Aunque ambas placas son de bajo coste, la Raspberry Pi desde 35 dólares y la BeagleBone

desde  55  dólares,  son  bastante  grandes  (comparadas  con  una  Photon)  y  generalmente

contienen mucho más de lo que necesitas para un simple proyecto de IoT.

44

20.2.3 Intel Edison

Intel ha desarrollado una pequeña placa basada en Linux llamada Edison. La placa Edison

está  diseñada  para  ser  integrada  en  proyectos  de  IoT  y  es  quizás  la  competencia  más

directa de Photon.

La  Edison  es  pequeña,  pero  es  considerablemente  más  cara  que  la  Photon.  Tiene  un

delicado  conector  de  70  contactos  que  requiere  una  placa  de  conexión  separada  si  se

quiere empezar a conectarle componentes electrónicos externos. Existen varias placas de

prototipos de este tipo, la más popular de las cuales es una placa compatible con Arduino.

Aunque está recibiendo mucho interés en la comunidad Maker, esta es probablemente una

placa que se prestará mejor a un uso de gama alta o profesional, entre otras cosas porque

el dispositivo es mucho más difícil de utilizar.

En la figura 38 se muestra la placa Edison de Intel.

Figura 38

Placa Intel Edison

Fuente: Nota. Por Wikimedia commons.

45

20.3 Photon

La  Figura  39  se  muestra  un  Photon  con  algunas  de  sus  principales  características

etiquetadas.

Figura 39

El Photon de Particle

Fuente: Nota. Por Monk (2015).

Los dos botones del Photon, Setup y Reset, permiten establecer nuevas credenciales WiFi

y  reiniciar  el  dispositivo,  y  se  pueden  utilizar  juntos  para  activar  un  restablecimiento  de

fábrica completo.

En  la  parte  superior  de  la  placa,  encontrarás  el  puerto  micro-USB.  Aunque  su  función

principal es proporcionar energía al Photon, también se puede utilizar para la programación

USB de la placa y para la comunicación USB con un ordenador.

46

Moviéndose alrededor de la placa en el sentido de las agujas del reloj, encontrará los pines

de alimentación y reset (incluyendo 3v3, RST, VBAT y GND). El Photon convierte la energía

de  entrada  proporcionada  a  través  de  la  alimentación  micro-USB  o  el  pin  VIN  en  una

alimentación  de  3,3  voltios  utilizada  por  la  placa;  esto  está  disponible  a  través  del  pin

superior,  3v3.  La  lógica  funciona  a  3,3V  en  lugar  de  los  5V  a  los  que  podrías  estar

acostumbrado  como  usuario  de  Arduino.  El  pin  RST  se  puede  utilizar  como  el  botón  de

reinicio, cuando se tira de baja (conectado a tierra). Esto puede ser útil si su proyecto estará

en una caja, pero es bastante improbable que quiera usar este pin.

El pin VBAT permite conectar una pequeña batería de respaldo (o supercondensador) al

Photon,  para  alimentarlo  mientras  está  en  modo  de  sueño  profundo  para  preservar  su

memoria, de modo que cuando se despierte, pueda continuar desde que se fue a dormir.

Los  pines  etiquetados  como  D0  a  D7  son  pines  de  entrada/salida  de  propósito  general

(GPIO)  que  pueden  actuar  como  entradas  o  salidas  digitales.  Algunos  de  estos  pines

también  pueden  actuar  como  salidas  analógicas  (pines  D0  a  D3)  utilizando  una  técnica

llamada modulación de ancho de pulso (PWM). Hay un LED azul junto al pin D7 que está

conectado  a  D7.  Puedes  encenderlo  y  apagarlo  desde  tus  programas,  o  usando  la

aplicación Tinker en tu smartphone.

El  Photon  tiene  una  antena  de  chip  integrada  que  funcionará  bien  en  la  mayoría  de  las

situaciones de WiFi, pero el Photon también tiene una pequeña toma de antena a la que se

puede conectar una antena externa. Esto es útil para ampliar el alcance WiFi del dispositivo

añadiendo una antena más sensible o direccional. Por defecto, el Photon intentará elegir la

mejor antena, pero también puede controlar qué antena se prefiere en su firmware.

Los pines A0 a A5 son principalmente entradas  analógicas  que pueden  medir  un  voltaje

entre  0  y  3.3V.  Éstas  se  utilizarán  normalmente  para  los  sensores.  Por  ejemplo,  en  el

Capítulo 6 usarás un sensor de luz con uno de estos pines. Los pines analógicos también

pueden utilizarse como entradas o salidas digitales, al igual que los pines D0 a D7 y, al igual

que los pines digitales, algunos de los pines analógicos (A4, A5) también pueden utilizarse

como salidas analógicas PWM.

47

El pin DAC (Digital to Analog Converter) es un pin especial de salida analógica. Se trata de

una verdadera salida analógica que puede ajustarse a cualquier tensión entre 0 y 3,3V.

El pin WKP (Wakeup) se utiliza para despertar al Photon después de que se haya puesto

en modo de sueño profundo. Escribir un software que ponga al Photon en modo de reposo

parte del tiempo hace que sea práctico hacer funcionar el Photon con baterías cuando se

necesita minimizar el consumo de energía. WKP, RX y TX también pueden utilizarse como

GPIO.

Los pines TX y RX (Transmisión y Recepción) se utilizan para la comunicación en serie.

Esto es útil para conectar un Photon a ciertos tipos de periféricos, como los módulos GPS,

que tienen una interfaz serie.

Por encima de estos pines hay un segundo pin GND y el pin VIN. Puedes suministrar entre

3,6V y 5,5V al pin VIN para alimentar la placa como alternativa al uso del puerto USB.

20.3.1 Spark vs Photon

La Photon  no  es la primera placa de  IoT producida por Particle. Ese honor pertenece al

Spark  Core.  Ambas  placas  se  muestran  una  al  lado  de  la  otra  en  la  Figura  40,  y  como

puedes ver, las placas son muy similares entre sí.

Las principales diferencias son que la Photon utiliza un chip WiFi diferente (Broadcom en

lugar de Texas Instruments). También utiliza un procesador más rápido con más RAM.

Los pines son en su mayoría los mismos entre las dos placas; sin embargo, hay algunos

cambios importantes a tener en cuenta. En primer lugar, el Core no tiene pines DAC y WKP;

en su lugar tiene dos entradas analógicas, A6 y A7.

48

Figura 40

El Spark Core (izquierda) y el Photon (derecha)

Fuente: Nota. Por Monk (2015).

La empresa Particle ha lanzado en los últimos años otras placas IoT superiores al Photon,

con nombres de Electron, Argon, Boron y Xenon.

20.3.2 Programación de Photon

Particle ha hecho todo lo posible para que la programación del Photon y del Core sea lo

más sencilla posible, tanto proporcionando un entorno de desarrollo muy fácil de usar como

eligiendo  el  lenguaje  de  programación  Arduino  C  como  base  para  el  lenguaje  de

programación del Photon.

Dado  que  el  Photon  es  un  dispositivo  de  Internet,  tiene  mucho  sentido  programar  el

dispositivo a través de Internet, por lo que la mayoría de las veces, usted escribirá el código

para su Photon en su navegador web y luego lo enviará a su Photon, que estará pendiente

de las actualizaciones. También existe un entorno de programación offline para los usuarios

más avanzados.

Para aquellos que estén pensando en utilizar el Photon para aplicaciones comerciales, la

capacidad de actualización a través del aire es increíblemente poderosa, ya que permite la

actualización remota del software del Photon desde cualquier parte del mundo.

49

Esto puede hacer saltar algunas alarmas. Al fin y al cabo, si el Photon controlara la puerta

de  tu  casa  o  la  calefacción,  no  querrías  que  alguien  actualizara  tus  Photons  y  Cores,

diciéndoles  que  desbloquearan  tus  puertas  y  que  pusieran  la  calefacción  al  máximo.

Afortunadamente,  se  utilizan  varios  mecanismos  de  seguridad  para  proteger  el  Photon.

Entre ellos, el uso de la comunicación Secure Sockets Layer (SSL), así como las claves de

autenticación que garantizan que sólo usted puede actualizar sus Cores.

50

20.3.2.1 Web IDE

La aplicación Web IDE es utilizada para el desarrollo de  programas para los dispositivos

IoT de Particle. En esta aplicación web escribiremos los códigos, compilarlos y cargarlos a

los dispositivos, como lo es el Photon.

En la Figura 41 se muestra el Web IDE con etiquetas para algunos de sus botones.

Figura 41

Pantalla de Web IDE

Fuente: Nota. Elaboración propia.

El botón Verify comprobará un programa y se asegurará de que el código no tenga errores,

esta acción no envía el código al Photon aun cuando no existan errores. Dado que el botón

Flash también verifica el programa, pero al no encontrar errores en el código, la aplicación

cargara el código al Photon.

El botón Save guardará la aplicación que se esté mostrando en la ventana del editor a la

derecha. El botón Código activa el panel lateral que contiene tu lista de aplicaciones y los

botones que te permiten eliminar una aplicación o crear una nueva.

51

Debajo del botón de Code, el botón de Libraries le permite acceder a un enorme conjunto

de bibliotecas de código aportadas por la comunidad que puede utilizar en sus aplicaciones.

Muchas de estas bibliotecas están relacionadas con la interconexión de tipos específicos

de hardware, como sensores y pantallas.

El botón Docs abre la página web de la documentación de Photon u otros dispositivos de

Particle con los que se estén trabajando.

El botón Devices le permite gestionar sus Photons y Cores. Al hacer clic en él, se despliega

un panel lateral que enumera todos los dispositivos asociados a su cuenta para que pueda

gestionarlos de diversas maneras. En la figura 42 se muestran los 2 Photons asociados a

una cuenta con nombres de shinbX y slave2, .

Figura 42

Gestión de los Photons

Fuente: Nota. Elaboración propia.

52

20.3.2.2 Codificando una aplicación

Vamos a desarrollar una aplicación que consiste en cambiar el color mostrado en el LED

incorporado del Photon a rojo, verde o azul en intervalos de dos segundos. En la figura 43

se muestra el código.

Figura 43

Código para cambiar de color a led incorporado en el Photon

Fuente: Nota. Elaboración propia.

Como  puedes  ver,  el  código  está  en  dos  secciones:  una  sección  que  comienza  con  las

palabras void setup y otra que comienza con void loop. Cada una de estas secciones del

código del programa se llama función. Una función es una forma de agrupar un conjunto de

instrucciones y darles un nombre.

Mirando la primera función, vemos que comienza con la palabra void. Esto puede parecer

una palabra inusual para indicar el comienzo de una función. En caso de que te interese,

esto se debe a que cada función tiene que especificar un tipo. Las dos funciones de este

programa no tienen ningún tipo, así que tenemos que indicar este hecho usando la palabra

void. Una cosa  que notarás enseguida sobre los lenguajes  de  programación  es que son

realmente  quisquillosos.  A  los  informáticos  les  gusta  que  las  cosas  sean  ordenadas  y

precisas; por eso tenemos que escribir void antes de nuestras funciones setup y loop.

53

Después de la palabra void viene el nombre de la función setup seguido de (). Más adelante,

verás funciones que tienen algo dentro de () llamado parámetros. De nuevo, la naturaleza

precisa del lenguaje C dicta que incluso si esta función no tiene ningún parámetro, debe

incluir los paréntesis.

20.3.2.3 Comentarios

Los  comentarios  en  cualquier  lenguaje  de  programación  sirven  para  dejar  pequeñas

explicaciones sobre qué es lo que hace el programa. Escribiendo // al principio, se indica

que el resto de  la línea es un  comentario. Es decir,  indica que la línea no  es código  del

programa en absoluto, sino un comentario que le dice al lector algo sobre el código. En la

figura 44 se muestra un código con comentarios.

Figura 44

Uso de comentarios en código en el Wed IDE

Fuente: Nota. Elaboración propia.

54

20.3.2.4 Variables

Las variables son un concepto de programación increíblemente útil en la programación con

IoT. Te permiten dar un nombre significativo a algo. En la figura 45 se muestra un código,

donde las dos primeras líneas definen las variables led y led2.

 Figura 45

Uso de variables en el código para Photon

Fuente: Nota. Elaboración propia.

55

En el caso de la primera de las líneas (int led = D0), hay un pin llamado D0. Sabemos que

se refiere a uno de los pines físicos del Photon/Core que puede utilizarse como entrada o

salida, pero no dice absolutamente nada sobre para qué se va a utilizar ese pin en el resto

de la aplicación. En realidad, como dice el comentario, se va a conectar un led a D0. Más

adelante  en  el  código,  cuando  queramos  encender  y  apagar  el  pin,  es  más  agradable

referirse a ese pin como el pin del led en lugar del número de pin real.

Te invito a ver el siguiente video, para comprender como iniciar el módulo IoT Photon de
Particle.

CarlosVolt Electrónica Robótica (5 de julio de 2017).  Revisión del módulo IoT Particle
Photon de la mano de DFROBOT(Review). [Video].

20.3.2.5 Código Morse

Vamos  a  realizar  un  ejemplo  de  una  aplicación  con  el  Photon  al  parpadear  una  luz,

siguiendo el código morse. Pero antes entendamos que es el código morse y cuál es su

codificación.

El código Morse representa las letras y los números como pitidos cortos (puntos) o largos

(rayas) o destellos de luz. Por ejemplo, la letra A se representa como “.-“ (punto guion), un

pulso corto seguido de un pulso largo. Aunque existen algunas variantes del código Morse,

aquí utilizaremos el Código Morse Internacional.

Si se convirtiera la palabra PHOTON a código Morse, el mensaje resultante sería “.--. .... --

- - --- -“. El código Morse no distingue entre letras mayúsculas y minúsculas. En la tabla 4

se muestra el código morse para cada letra.

56

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

-----

.----

..---

…--

….-

…..

-….

--…

---..

----.

Tabla 4

Código Morse internacional

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

.-

-…

-.-.

-..

.

..-.

--.

….

..

.---

-.-

.-..

M

--

Fuente: Nota. Elaboración propia.

20.3.2.6 Flashing SOS

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

-.

---

.--.

--.-

.-.

…

-

.--

…-

.--

-..-

-.--

--..

Conociendo el código morse, vamos a ver cómo podemos aplicar lo que hemos aprendido

para hacer parpadear una señal de socorro (LED RGB incorporado en el Photon). SOS es

“... --- ...” en código Morse y se utiliza por alguien en peligro, por lo general en alta mar y

por lo general hace cien años.

Para hacer un parpadeo de SOS “... --- ...”, sólo tenemos que utilizar un bucle y variar los

retardos. Un guion es tres veces más largo que un punto, y el espacio entre un punto o

guion  y  el  siguiente  debería  ser  el  mismo  que  un  punto.  El  espacio  entre  una  letra  y  la

siguiente debe ser el mismo que el de un guion. En la figura 46 se muestra el código del

57

Photon  utilizando  el  Web  IDE  y  la  verificación  del  código  mostrando  el  mensaje  Code

verified! Greate work.

Figura 46

Código para para Flashing SOS en Photon

Fuente: Nota. Elaboración propia.

58

20.3.2.7 Funciones

El código anterior para el Flashing SOS se puede reducir como en cualquier lenguaje de

programación utilizando funciones.

Hemos utilizado  felizmente algunas de  las  funciones  como delay y  RGB.color que están

incorporadas en el sistema de Particle. También puedes escribir tus propias funciones para

agrupar líneas de código que quieras utilizar una y otra vez en tu programa. Por ejemplo,

¿no sería estupendo que existiera una función llamada flash, por la que pudiéramos pasar

como parámetros la duración del flash y el tiempo de pausa antes de seguir parpadeando?

Bueno, se puede crear la función como se muestra en la figura 47.

Figura 47

Función flash

Fuente: Nota. Elaboración propia.

La función comienza con la palabra void, porque esta función no devuelve ningún valor. A

continuación, tenemos el nombre de la función (flash). Dentro de los paréntesis se definen

dos  parámetros,  duración  para  guion/punto  (duration)  y  hueco  que  es  el  espacio  entre

símbolos (grap). Ambos deben tener el tipo especificado para ellos. Como son un número

entero de milisegundos, se debe utilizar el tipo int.

En la figura 48 se muestra el código completo de la aplicación Flashing SOS utilizando la

función. Como podrás observar, el código se ha reduciendo notablemente

59

Figura 48

Código para para Flashing SOS utilizando funciones

Fuente: Nota. Elaboración propia.

60

   Referencias citadas en UNIDAD 5

Murdocca, M. y Heuring, V. (2000).  Principles of Computer Architecture. Prentice Hall.

Marzal, A., García, I. y García, P. (2014). Introducción a la programación con Python 3.

Universitat Jaume I.

Knowlton, J. (2009). Python. Anaya Multimedia-Anaya Interactiva.

Gosling, J.,  Joy, B., Steele, G. y Bracha, G. (2005). The Java language specification.

Addison-Wesley.

Burtch, K. (2004). Linux Shell Scripting with Bash. Sams.

Monk, S. (2015). Make: Getting Started with the Photon. Maker Media.

61

Glosario de los términos citados en la
UNIDAD 5

Código objeto

Código que resulta de la compilación del código fuente.

Puede  ser  en  lenguaje  máquina  o  bytecode,  y  puede

distribuirse  en  varios archivos  que  corresponden  a  cada

código fuente compilado.

Shell de Unix

Es  el  término  usado  en  informática  para  referirse  al

intérprete  de  comandos  de  los  sistemas  operativos

basados en Unix y similares, como GNU/Linux, y que es

su interfaz de usuario tradicional.

Unix

Sistema  operativo  portable,  multitarea  y  multiusuario;

desarrollado en 1969 por un grupo de empleados de los

laboratorios Bell de AT&T.

Safecast

Es  una  organización

internacional  centrada  en  el

voluntariado  y  dedicada  a  la  ciencia  ciudadana  abierta

para  el  medio  ambiente.  Safecast  fue  creada  por  Sean

Bonner,  Pieter  Franken  y  Joi  Ito  poco  después  de  la

catástrofe nuclear de Fukushima Daiichi en Japón, tras el

terremoto de Tōhoku del 11 de marzo de 2011, y gestiona

una red mundial de datos abiertos para la vigilancia de la

radiación ionizante.

Particle IoT

Es  una  plataforma  IoT  totalmente  integrada  que  ofrece

todo lo necesario para desplegar un producto IoT.

Secure  Sockets

Son  protocolos

criptográficos,  que  proporcionan

Layer (SSL)

comunicaciones  seguras  por  una  red,  comúnmente

Internet.

62

Web IDE

Es  un  Entorno  de  Desarrollo  Integrado,  o  IDE,  lo  que

significa  que  puedes  desarrollar  software  en  una

aplicación fácil de usar, que casualmente se ejecuta en tu

navegador web.

Led RGB

Significa LED rojo, azul y verde. Los productos LED RGB

combinan  estos  tres  colores  para  producir  más  de  16

millones de tonos de luz.

63

