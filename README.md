# herencia_polimorfismo

## Ejercicio empleados

### Enunciado:

**Ejercicio 1.17.**

Nos solicitan modelar como parte del sistema de RRHH de
una empresa, la nómina de los distintos tipos de empleados que trabajan en
la empresa y sus características. Los posibles tipos de empleados a considerar
son: _Director_, _Jefe de área_ y _Administrativo._ (Hay que tener presente que un
director es un empleado, pero no a la inversa). Construir una estructura de
empleados que permita guardar la siguiente información de cada uno: 
legajo, nombre y apellido, salario y antigüedad. Debemos proveer métodos que
permitan visualizar las características de cada empleado. Además debemos
proveer de un método incrementarSalario() que se ejecutará anualmente y
permitirá incrementar el salario de toda la planta de empleados. Para esto
debe considerarse que a los directores se les incrementará un 10 %, a los jefes
un 15 % y a los empleados administrativos un 20 % anual.


**Ejercicio 1.18.** 

Escribir un main que genere en forma aleatoria un vector
de 100 Empleados, teniendo en cuenta la implementación del punto anterior. 
Para eso se debe “sortear” de forma random un número entre 0 y 1,
tomando un 10 % para los directores, un 20 % para los jefes y el resto serán
administrativos. Por ejemplo:

- De 0 a 69 es Administrativo
- De 70 a 89 es Jefe
- De 90 a 100 es Director

Además debe sortear un nombre y un apellido de una lista de nombres y
apellidos, una antiguedad y un salario entre un rango de 3 salarios: uno para
directores, otro para jefes y otro para administrativos.
Luego, debe listar los datos y los sueldos de cada uno y calcular un promedio.

------

Se compila con g++ *.cpp -o empleados

se corre por lineas de comando del estilo:

./empleados 99177 Juan Perez 50000 10



