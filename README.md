# BookLoanSys

> Sistema de gestión de préstamos de libros desarrollado en C, utilizando procesos, hilos POSIX, semáforos y comunicación interprocesos mediante pipes.

## 📚 Descripción

Este proyecto implementa un sistema de préstamo de libros simulando el funcionamiento de una pequeña biblioteca. Se hace uso intensivo de características del sistema operativo como:

- Procesos e hilos (multithreading)
- Comunicación mediante *pipes*
- Sincronización usando semáforos
- Archivos como base de datos persistente

El sistema permite:
- Registrar solicitudes de préstamo, renovación y devolución de libros.
- Manejar concurrencia entre procesos/hilos para simular múltiples usuarios.
- Sincronizar el acceso a recursos compartidos (archivos de datos).
- Generar reportes sobre los préstamos realizados.

## 🛠️ Tecnologías usadas

- Lenguaje C
- POSIX Threads (`pthread`)
- Semáforos (`semaphore.h`)
- Pipes (Comunicación entre procesos)
- Manejo de archivos como base de datos


## 🧪 Compilación

### Compilar
```bash
make
./RP/receptor
./TP/transmisor


