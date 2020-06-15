# Operador Ternario
El operador condicional ?: tiene tres operandos, lo que significa que es un operador ternario.

```expresión1 ? expresión2 : expresión3```

Se evalúa la expresión1, y si su resultado es verdadero, entonces se evalúa y devuelve como resultado la expresión2. Si expresión1 es falso, se evalúa y devuelve expresión3. En este caso, es equivalente a escribir:

```c++
if (expresión1) {
    expresión2;
} else {
    expresión3;
}
```

## Codigo de prueba
```c++
void setup() {
Serial.begin(9600);
}

void loop() {

boolean estado = false;

int valor = estado ? 1: 2;
Serial.println(valor);
}

```
