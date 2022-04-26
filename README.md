# herencia_polimorfismo

## Vehiculos

### Enunciado

Construir una aplicación que a partir de las especificaciones de un vehículo calcule su 
coeficiente impositivo y su valor de mercado. Se tienen autos, camionetas y camiones. 

coeficiente_impositivo = (precio_base * cilindrada) / 1000000
valor mercado auto = (coeficiente_impositivo * precio_base * combustible) / (1 + 0.001 * kilometraje)
valor mercado camioneta = 3*(coeficiente_impositivo * (kilometraje + cilindrada)*0.003) 
valor mercado camion = (coeficiente_impositivo * ((kilometraje + cilindrada + combustible)*0.002)

Donde precio base:
auto 1000
camioneta 1500
camion 2000

-----------------------

Se compila con:
```
g++ *.cpp -Werror -Wconversion -Wall -o programa
```

se corre por lineas de comando del estilo:

```
./programa camioneta 100 500 43

./programa camion 100 500 43

./programa auto 100 500 43
```
donde los argumentos son:
0: nombre programa
1: tipo de vehiculo
2: cilindrada
3: kilometraje
4: combustible

