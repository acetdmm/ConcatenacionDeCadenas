# Concatenación de Cadenas en C++

Este programa en C++ toma dos cadenas de texto ingresadas por el usuario, las concatena y muestra el resultado. Utiliza las funciones de la biblioteca `<cstring>` para copiar y concatenar las cadenas.

## Propósito del Código

El propósito de este código es demostrar cómo trabajar con cadenas de caracteres en C++ utilizando las funciones `strcpy` y `strcat` de la biblioteca `<cstring>`. El programa permite al usuario ingresar dos cadenas, las concatena y muestra la cadena resultante.

## ¿Qué incluye el código?

1. **Declaración de Cadenas**
   - Se declaran tres cadenas de caracteres de tamaño fijo (`str1`, `str2` y `result`), donde se almacenarán las entradas del usuario y el resultado de la concatenación:
     ```cpp
     char str1[100], str2[100], result[200];
     ```

2. **Entrada de Datos**
   - El programa solicita al usuario ingresar dos cadenas de texto utilizando `cin.getline()`, lo que permite leer cadenas con espacios:
     ```cpp
     cout << "Ingrese la primera cadena: ";
     cin.getline(str1, 100);
     cout << "Ingrese la segunda cadena: ";
     cin.getline(str2, 100);
     ```

3. **Copia y Concatenación**
   - El programa copia la primera cadena (`str1`) a la cadena `result` utilizando la función `strcpy()`:
     ```cpp
     strcpy(result, str1); // Copia la primera cadena en result
     ```
   - Luego, concatena la segunda cadena (`str2`) al final de `result` utilizando la función `strcat()`:
     ```cpp
     strcat(result, str2); // Concatenar la segunda cadena a result
     ```

4. **Mostrar Resultado**
   - El programa muestra la cadena concatenada usando `cout`:
     ```cpp
     cout << "La cadena concatenada es: " << result << endl;
     ```

5. **Salida del Programa**
   - El programa imprime la cadena resultante de la concatenación de `str1` y `str2`.

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el archivo fuente:
     ```bash
     g++ concatenacionDeCadenas.cpp -o concatenacionDeCadenas
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./concatenacionDeCadenas
     ```

3. **Entrada de Datos**
   - Se te pedirá que ingreses dos cadenas de texto. Por ejemplo:
     ```plaintext
     Ingrese la primera cadena: Hola 
     Ingrese la segunda cadena: Mundo
     ```

4. **Resultado**
   - El programa imprimirá la concatenación de las dos cadenas:
     ```plaintext
     La cadena concatenada es: HolaMundo
     ```

## Características Técnicas

- **`strcpy()`**: Esta función copia una cadena de caracteres en otra. En el código, se usa para copiar la primera cadena (`str1`) a la cadena `result`.
- **`strcat()`**: Esta función concatena (agrega) una cadena al final de otra. En este caso, concatena la segunda cadena (`str2`) a la cadena `result`.
- **Cadenas de caracteres**: El programa trabaja con arreglos de caracteres, una estructura básica en C++ para manejar texto.

## Limitaciones

- El tamaño de las cadenas está limitado a 100 caracteres cada una, lo que significa que no se pueden ingresar cadenas más largas sin modificar el tamaño de los arreglos.
- Si la longitud de la cadena concatenada excede el tamaño del arreglo `result` (200 caracteres), el comportamiento del programa puede ser inesperado, ya que no hay verificación de desbordamiento de búfer.

## Personalización

Puedes modificar el tamaño de los arreglos `str1`, `str2` y `result` según sea necesario para manejar cadenas más largas:
```cpp
char str1[200], str2[200], result[400]; // Aumentando el tamaño para manejar cadenas más largas
