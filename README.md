# Operador Ternario
El operador condicional ?: tiene tres operandos, lo que significa que es un operador ternario.

```expresión1 ? expresión2 : expresión3```

Se evalúa la expresión1, y si su resultado es verdadero, entonces se evalúa y devuelve como resultado la expresión2. Si expresión1 es falso, se evalúa y devuelve expresión3. En este caso, es equivalente a escribir:

**Utilizando el operador ternario**
```c++
String cadena = estado ? "valor verdadero": "valor falso";
```

**Sin utilizar el operador ternario**
```c++
if (estado) {
    "valor verdadero";
} else {
    "valor falso"
}
```



## Codigo de prueba
```c++
void setup() {
Serial.begin(9600);
}

void loop() {

boolean estado = false;

String cadena = estado ? "valor verdadero": "valor falso";
Serial.println(valor);
}

```
