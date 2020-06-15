**Utilizando el operador ternario**
```c++
String cadena = estado ? "valor verdadero": "valor falso";
```

**Es equivalente**
```c++
if (estado) {
    print("valor verdadero");
} else {
    print("valor falso")
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
