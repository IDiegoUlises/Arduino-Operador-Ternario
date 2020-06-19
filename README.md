# Operador Ternario

**Utilizando el Operador Ternario**
```c++
String cadena = estado ? "valor verdadero": "valor falso";
```

**Es equivalente**
```c++
String cadena;

if (estado)
{
  cadena = "valor verdadero";
}

else
{
  cadena = "valor falso";
}
```

**Utilizar el operador ternario sin almacenar una variable**
```c++
Boolean estado = false;
estado ? Serial.println("valor verdadero"): Serial.println("valor falso");
