#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
void mostrarMenu(string nombreUsuario);             // La función ACEPTA un nombre
string obtenerDatos();                              // Esta función DEVUELVE el nombre y la contraseña
void validarDatos(string usuarioPassword);                    // Esta función unicamente va ha validar si los datos ingresados son correctos

int main() {
    // 1. Llamamos a la función para obtener el nombre y lo guardamos en una variable.
    string nombre = obtenerDatos();

    string password = obtenerDatos();

    // Ejecutamos la validación de datos
    validarDatos(password);

    // 4. Le pasamos el nombre guardado a la función del menú.
    mostrarMenu(nombre);

    return 0;
}

void mostrarMenu(string nombreUsuario) { // La función recibe el nombre
    cout << "Este es el menu de interaccion, INGRESE QUE TIPO DE SALUDO DESEAS RECIBIR: \n";
    int tipoSaludo;
    cout << "Opcion 1    Opcion 2    Opcion 3: ";
    cin >> tipoSaludo;

    switch (tipoSaludo) {
        case 1:
            // 3. Ahora simplemente usamos la variable que recibimos para mostrar el saludo completo.
            cout << "!QUE TAL, " << nombreUsuario << "!" << "\n";
            break;
        case 2:
            cout << "Hola mongolo!! " << nombreUsuario << "\n";
            break;
        case 3:
            cout << "Buenos dias Ingeniero " << nombreUsuario << "\n";
            break;
        default:
            cout << "Opcion no valida." << "\n";
            break;
    }
}

void validarDatos(string usuarioPassword) {

    cout << "Bienvenido, porfavor ingrese su nombre y contraseña: ";
    
    if (usuarioPassword!= "Teseracto") {
        cout << "USUARIO INCORRECTO\n";
        
    }
}

// Esta función ahora devuelve un 'string'
string obtenerDatos() {

    string nombre, password;
    cout << "Ingresa tu nombre: ";
    cin >> nombre;

    cout << "Escriba su contraseña para ser guardada: ";
    cin >> password;
    return nombre, password; // Devolvemos el nombre y la contraseña para que pueda ser usado en 'main'
}