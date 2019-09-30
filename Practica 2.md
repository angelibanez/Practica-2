
# Practica 2

Función que permite estimar el tamaño de una base de datos.

El programa está escrito en lenguaje C, donde primero definimos las variables constantes en un arreglo con respecto a nuestra base de datos establecida en clase, se establecieron un conjunto de funciones que intervienen en el proceso del cálculo de una BD, y dentro de nuestro main se mandaron a llamar dichas funciones, donde el resultado de estas se almacena en otras variables para posteriormente imprimir los resultados solicitados. Después del main encontramos las funciones desarrolladas con lo que cada una va a realizar, desde las sencillas operaciones de calcular el número de páginas que van a ser necesarias para la BD, el tamaño que cada página va a necesitar en bytes y el tamaño total de nuestra BD, hasta la suma total del arreglo con respecto a los bytes de la asignación de cada tipo de variable que existe en nuestra BD.

Al final me encontré con un gran detalle, ya que el número que nos da del tamaño total de la BD tiene un error asociado, ya que este valor es muy grande, calculado desde una calculadora es: 80,396,247,680, pero el valor más grande que trabaja nuestro tipo de dato en c es: 4,294,967,295, por lo cual no podemos realizar esta última operación de manera correcta, se intentó realizar una conversión de unidades de bytes a megabytes antes de imprimir el resultado, pero el resultado sigue siendo erróneo.
