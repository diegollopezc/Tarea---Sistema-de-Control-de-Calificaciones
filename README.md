# Tarea - Uso de Bucles
# Sistema de Control de Calificaciones

# Diego Lopez
# 2026-1579
# Logica de Programacion - UCE

# Objetivo
Utiliza estructuras de control repetitivas para resolver problemas, mediante la codificación
de programas en C++.

# Descripción (caso práctico)
El centro educativo “La Nueva Escuela” necesita un programa sencillo de consola para
registrar las calificaciones de un grupo de estudiantes. La coordinación docente lo solicita
porque actualmente el proceso se realiza a mano y se cometen errores.

## Datos de entrada
- Cantidad de estudiantes, este debe ser mayor a 0 o retornar invalido.
- Nombres de cada estudiante y almacenamiento de estos.
- 4 calificaciones por estudiante, correspondiente a cada periodo escolar.
- Pregunta final al usuario para determinar si se procesaran multiples grupos.

## Proceso
1. Validar cantidad de estudiantes.
2. Leer cantidad de estudiantes segun entrada del usuario.
3. Calcula el promedio y determina Aprobado o Reprobado de cada estudiante.
4. Mostrar el resumen del grupo al final.
5. Pregunta si se desea repetir, en caso de que si, volver al paso 1 y guardarlo como siguiente grupo.

## Salida
Promedio y estado por estudiante: aprobados, reprobados, promedio del grupo y mejor estudiante.


## Uso de los bucles
| Bucle | Dónde | Por qué |
|---|---|---|
| do-while | Inicio  | Existe para validar la repeticion del programa en caso de que el usuario elija 'S' |
| do-while | Linea 18 | Valida que la cantidad de estudiantes sea mayor que 0 para retornar error en caso de que no |
| for | Linea 27 | Recorre cada estudiante del grupo validando los nombres |
| for | Linea 37 |Recorrer las 4 calificaciones del estudiante 
| do-while | Linea 41 | Repite la solicitud hasta que la nota sea valida entre 0 y 100 |
| do-while | Lina 82 | Repite la pregunta hasta recibir 's' o 'n' |
