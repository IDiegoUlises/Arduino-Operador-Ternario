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
estado ? print("valor verdadero"): print("valor falso");
```
