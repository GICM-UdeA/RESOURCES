# Guía de Motores
Elaborado por: Juan Esteban Ospina 

Esta guía está diseñada para que conozcas la descripción física de los motores más comunes, su funcionamiento y algunas formas de controlarlos.

## Índice

- [Motores Paso a Paso](#motores-paso-a-paso)
  - [Driver A4988](#driver-a4988)
  - [Programa en Arduino](#programa-en-arduino)
- [Referencias](#referencias)

## Motores Paso a Paso

Los motores paso a paso son un tipo de motor eléctrico que gira de forma discreta. De esta forma, se puede hacer girar el motor una cantidad de grados o pasos que se desee. Esto se puede hacer debido a que estos motores tienen diferentes bobinados organizados en fases que hacen girar el rotor de acuerdo a la secuencia en que se aplique corriente a las bobinas. Existen dos tipos de estos motores: motores unipolares y bipolares.

Para controlar estos motores se necesita un controlador que será el intermediario entre el motor y el microcontrolador (Arduino, por ejemplo). 

### Driver A4988

El driver A4988 es un controlador de motores paso a paso bipolares. Este driver es muy utilizado en impresoras 3D y CNC debido a su facilidad de uso y bajo costo. Tiene 16 pines, de los cuales 4 son para conectar el motor bipolar, 2 se usan en la conexión de una fuente de 8V a 35V, y algunos más para controlar la dirección y el número de pasos que dará el motor desde el microcontrolador. A continuación, una imagen detallada de la conexión básica para paso completo[1]:

<center>
<img src="https://3dbots.co/wp-content/uploads/2018/03/A4988-22.png" width="500px">
</center>

Este controlador puede configurarse para tener una resolución de paso completo, medio paso, un cuarto de paso, un octavo de paso o un dieciseisavo de paso. Esta configuración puede verse en [1].

<span style="color: red;">**Advertencia:** Conectar o desconectar un motor paso a paso mientras el driver está encendido puede destruir el driver.</span>

### Programa en Arduino

Para controlar el motor paso a paso, es necesario comunicarse con el driver a través de un microprocesador como Arduino. Usaremos un pin para controlar el sentido de giro y uno más para controlar los pasos que dará el motor. En el archivo *paso.ino* hay una implementación del movimiento de un motor paso a paso.

### Referencias

[1] [A4988 Stepper Motor Driver Carrier, Pololu](https://www.pololu.com/product/1182)
