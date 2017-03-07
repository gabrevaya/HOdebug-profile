# Varios bugs
- Sin el flag -g el ejecutable no tiene la información extra necesaria para hacer el debbuging.

- Si ponemos el flag -g el ejecutable contiene la info necesaria para debuggear, podiendo por ejemplo poner brak points en las linas que queramos, evaluar las variables, etc.
- Para debuggear conviene compilar con el flag de optimización -O0 para que el compilador no optimice nada y el código que se ejecuta sea el mismo que escribimos (y vemos al debuggear).

- add_array_static y  add_array_dynamic no se rompen sino que dan valores equivocados. Mientras que add_array_segfault sí da segmentation fault por intentar definir variables declaradas dinámicamente sin haberlas alocado previamente, pero el flag -Wall no me dio más información.

# Segmentation Fault

- small.e no devuelve error mientras que big.e devuelve un segmentation fault.

- tras ejecutar `ulimit -s unlimited` ya no devuelve error. Este comando hace que la memoria del stack no esté limitada a priori.

- La solución anterior es una solución práctica para poder correr el programa sin que devuelva error, pero no podría ser considerada una solución real del problema sino solo un parche. Una solución más robusta sería emplear memoria dinámica en lugar de estática, para que utilizar un _heap_ (que no tiene restricción de tamaño) a diferencia del stack, en el que se guarda la información en el segundo caso.