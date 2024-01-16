#include <iostream>
#include "doctor.h"
#include "paciente.h"
#include "clinica.h"

#include "clinica.cpp"


using namespace std;

int main()
{

    Doctor cardiologo("Dr. Emiliano", 30, "Cardiologo");
    Doctor ortopedista("Dr. Alberto", 45, "Ortopedista");
    Doctor neurologo("Dr. Ernesto", 67, "Neurologo");

    cardiologo.setTelefono("3345672398");
    ortopedista.setTelefono("3376217753");
    neurologo.setTelefono("5576238961");

    Paciente paciente1;

    int opcion;
    do {

        cout << "Elija una especialidad:" << endl;
        cout << "1. Cardiologia" << endl;
        cout << "2. Ortopedia" << endl;
        cout << "3. Neurologia" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        Clinica clinicaActual;

        switch (opcion) {
            case 1:
                cout << "Ha seleccionado Cardiologia. El doctor asignado es: " << cardiologo.getNombre() << endl;
                clinicaActual.asignar_clinica(cardiologo, paciente1, "Clinica Cardiologica", "AV CENTRAL 65, SANTANA, 24050", 4.7);
                cout << "Su telefono es: "<< cardiologo.getTelefono()<< ", para cualquier duda ponerse en contacto"<<endl;
                break;
            case 2:
                cout << "Ha seleccionado Ortopedia. El doctor asignado es: " << ortopedista.getNombre() << endl;
                clinicaActual.asignar_clinica(ortopedista, paciente1, "Ortopedistas de Occidente", "GUSTAVO DIAZ ORDAZ 311, PRESIDENTES DE MEXICO, 37236", 4.9);
                break;
            case 3:
                cout << "Ha seleccionado Neurologia. El doctor asignado es: " << neurologo.getNombre() << endl;
                clinicaActual.asignar_clinica(neurologo, paciente1, "Neurobin", "PINO SUAREZ NO. 746 NO. A, CENTRO, 37000", 4.5);
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }
        if(opcion>=1&&opcion<=3)
        {

            string nombrePaciente, direccionPaciente;
            int edadPaciente;


            cout << "Ingrese el nombre del paciente: "<<endl;
            cin >> nombrePaciente;
            paciente1.setNombre(nombrePaciente);

            cout << "Ingrese la edad del paciente: "<<endl;
            cin >> edadPaciente;
            paciente1.setEdad(edadPaciente);


            cout << "Ingrese la direccion del paciente: "<<endl;
            cin >> direccionPaciente;
            paciente1.setDireccion(direccionPaciente);


            cout << "Datos del paciente:" << endl;
            cout << "Nombre: " << paciente1.getNombre() << endl;
            cout << "Edad: " << paciente1.getEdad() << endl;
            cout << "Direccion: " << paciente1.getDireccion() << endl;

            cout << "Detalles de la Clinica Asignada al Paciente:" << endl;
            cout << "Nombre de la Clinica: " << clinicaActual.getNombre() << endl;
            cout << "Ubicacion: " << clinicaActual.getUbicacion() << endl;
            cout << "Numero de Estrellas: " << clinicaActual.getNum_estrellas() << endl;

            return opcion=0;
        }

    } while (opcion != 0);



    return 0;
}
