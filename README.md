# so_memory_leaks_valgrind
Ejemplo de memory leaks con valgrind en C.



1) Correr programa sin valgrind.
2) Correr programa solamente con valgrind sin flags → Revisar los parametros recomendados de valgrind

valgrind <parametros> ./programa <parametros_programa>

3) Mostrar que se puede guardar la salida de valgrind en un archivo con --log-file=archivo
4) Descomentar free en [ generar_saludo ] para corregir 'leaks'
5) Comentar free anterior y descomentar free en [ main ] para corregir lecturas y leaks
6) Descomentar lineas posteriores al 'free' estado de la variable, luego correr sin valgrind.