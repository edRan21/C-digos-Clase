#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

/* Mapa de usuarios para ingresar al sistema
Este mapa nos permitirá extender más usuarios con acceso gracias a que cada usuario es una clave y su contraseña un valor */
map<string,int> users = {
    {"admin" ,1234}
};


/* Para el ticket < ID del articulo, cantidad comprada> 
Mapa que nos permitirá ubicar con facilidad las dos claves en relación a la lista de articulos */
map<int, int> compras;

// Estructura de los datos de usuario
struct Usuario {
    string nombre;
    int edad = 18;
    string mail;
    string rol; // Empleado, chalan mayor etc.
};

// Estructura de los datos de articulo
struct Articulo {
    int id;
    string nombre;
    //string categoria;
    int cantidad = 0;
    int precio = 0;
};


//Variables globales
vector<Usuario> usuarios; // vector para consultar los usuarios registrados
int ID = 1;
vector<Articulo> listaArticulos; // vector que almacenará los articulos ingresados por el cliente


//Funciones

/* "login" 
    - Tiene la función de evaluar las entradas del usuario 'u' que es: usuario, y 'c' que es: contraseña, revisando las claves del mapa 'users' */
void login() {
    string u = "";
    int c = 0;

    cout<<"Ingrese su usuario: ";
    cin>> u;

    cout<<"Ingrese su contraseña: ";
    cin>> c;

    for (auto u1: users) {
        if (u1.first == u && u1.second == c ) {
            system("cls");
            break;
        } else {
            cout<<"Usuario no registrado"<<endl;
            exit(0);
        }
    }
}

/* "ingresarArticulo" 
    - Tiene la función de evaluar el ingreso de articulos con su precio por parte del usuario,
    obtiene las variables definidas en la estructura "Articulos" para agregarlos al vector de 'listaArticulos' */
void ingresarArticulo() {

    string nombre = "", categoria = "";
    int cantidad = 0, precio = 0;

    fflush(stdin); //Vaciar el bufer del teclado

    cout<<"ID asignado para el articulo: "<<ID<<endl;
    cout<<"Ingrese el nombre del artículo: ";
    getline(cin, nombre);
    //cout<<"Ingrese la categoria: ";
    //getline(cin, categoria);
    fflush(stdin);
    cout<<"Ingrese la cantidad existente: ";
    cin >> cantidad;
    cout<<"Ingrese el precio de venta: ";
    cin >> precio;

    // Objeto de la estructura temporal para poder almacenar los valores
    Articulo a;

    a.id = ID;
    a.nombre = nombre;
    //a.categoria = categoria;
    a.cantidad = cantidad;
    a.precio = precio;


    //Insertar los datos dentro del vector listaArticulos
    listaArticulos.push_back(a);
    ID++; //Aumentar el ID en 1
}

void mostrarArticulos() {

    if (!listaArticulos.empty()) {
        cout<<"\nID | NOMBRE |  CANTIDAD | PRECIO"<<endl;
        for (auto a : listaArticulos) {
            cout<<a.id<<"\t|"<<a.nombre<<"\t|"<<a.cantidad<<"\t|"<<a.precio<<endl;
        }
        cout<<"\n\n";
    }
    else {
        cout<<"\nNo hay artículos disponibles"<<endl;
    }
}

void imprimirTicket(float subtotal, float desc) {

    cout<<"Articulo \t Cantidad comprada \t Precio"<<endl;


    for (auto c : compras) {
        int i = c.first;
        cout<<listaArticulos[i-1].nombre<<"\t\t"<<c.second<<"\t\t$"<<listaArticulos[i-1].precio<<endl;
    }

    float iva = subtotal * 0.16;
    float total =  subtotal + iva;
    float descuento = total * (desc/100);
    float total2 = total - descuento;
    cout<<"\nSubtotal de la cuenta: $"<<subtotal<<endl;
    cout<<"IVA: $"<<iva<<endl;
    cout<<"\nTotal: $"<<total<<endl;
    cout<<"Descuento aplicado ("<<desc<<"%) : $"<<descuento<<endl;
    cout<<"\nTotal a pagar: $"<<total2<<endl;
}

void comprarArticulos() {
    if (!listaArticulos.empty()) {
        int id_art, cant, continuar;
        string codigo = "";
        float total = 0;

        do {
            //Mostrar lista de artículos
            mostrarArticulos();


            cout<<"\n\nIngrese el ID del articulo: ";
            cin>> id_art;
            cout<<"Ingrese la cantidad a comprar: ";
            cin >> cant;




            //Verificar si el ID existe
            if ((id_art - 1) <= (ID - 1)) {

                //Crear articulo temporal
                Articulo a = listaArticulos[id_art - 1];
                //Verificar existencias
                if (!(a.cantidad < cant)) {
                    a.cantidad -= cant;
                    float subtotal = cant * a.precio;
                    compras.insert({id_art, cant});
                    cout<<"Agregado correctamente! Subtotal: $"<<subtotal<<endl;

                    //Cambiar la existencia en la lista de articulos
                    listaArticulos[id_art - 1] = a;
                    total += subtotal;
                }
                else {
                    cout<<"No hay suficientes artículos para realizar la venta"<<endl;
                }



            }
            else {
                cout<<"El ID no existe"<<endl;
            }


            cout<<"\n\nDesea agregar otro articulo a la cuenta? (1. Si, 2. No): ";
            cin>>continuar;
        }while (continuar == 1);

        cout<<"Ingrese su codigo de descuento (enter si no tiene): ";
        cin>>codigo;

        float desc = 0;
        if (codigo == "descuento") {
            desc = 12;
        }
        else if (codigo == "martesdefrescura"){
            desc = 15;
        }


        imprimirTicket(total, desc);

    }
    else {
        cout<<"No hay artículos en existencia"<<endl;
    }
}





// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";

    int r = 0, op = 0;



    /*
     * 1. Inventario
     * 2. Ventas
     * 3. Empleados
     *
     *
     * ingrese el ID articulo: 1
     * INgrese cantidad: 3 (restar al inventario) {Si no hay existencias no se hace nada}
     *
     * (subtotal)
     * ¿otra cosa? Si
     * va de nuevo
     *
     * (al acabar de comprar) imprimir total
     *
     */

    //login();

    cout<<"\n\n-----------------------------------------------------"<<endl;
    cout<<"\t\tS I S T E M A  D E  V E N T A S "<<endl;
    cout<<"-----------------------------------------------------\n\n"<<endl;

    do {
        cout<<"\n\n1. Ingresar un nuevo artículo"<<endl;
        cout<<"2. Mostrar artículos existentes"<<endl;
        cout<<"3. Comenzar venta"<<endl;
        cout<<"Selecciona una opcion: ";
        cin>>op;

        switch (op) {
            case 1: ingresarArticulo(); break;
            case 2: mostrarArticulos(); break;
            case 3: comprarArticulos(); break;
            default: cout<<"Opcion no valida"<<endl;
        }

        cout<<"Desea realizar otra operación? (1. SI, 2. NO): ";
        cin>>r;
    }while (r != 2);

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}