#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;


const string nombreArchivo="datos.txt";
struct datos{
	int id;
	string nombreSerie;
	string genero;
	int temporada;
	int episodiosPorTemporada;
	int estado;
	int temporadaActual;
	int episodioActual;
	
};
int idSiguiente = 1;

void agregarSerie(){
	datos d;	    
	cout<<"## AGREGAR SERIES ##"<<endl;
	cout<<"Ingrese el id de la serie: ";
	cin>>d.id;
	cout<<"Ingrese el nombre de la serie: ";
	cin.ignore();
	getline(cin,d.nombreSerie);
	cout<<"Ingrese el genero de la serie: ";
	getline(cin,d.genero);
	cout<<"Ingrese el numero de temporadas: ";
	cin>>d.temporada;
	cout<<"Ingrese el numero de episodios por temporada: ";
	cin>>d.episodiosPorTemporada;
	cout<<"Ingrese el estado (1.Pendiente/2.Viendo/3.Finalizado): ";
	cin>>d.estado;
	
	if(d.estado<0 || d.estado>3){
		cout<<"Ingrese una opcion valida"<<endl;
		return;
	}
	
	if(d.estado==1){
		d.temporadaActual=1;
		d.episodioActual=1;
	}else if(d.estado==2){
		cout<<"Temporada actual: ";
		cin>>d.temporadaActual;
		cout<<"Episodio actual: ";
		cin>>d.episodioActual;
	}else if(d.estado==3){
		d.temporadaActual=d.temporada;
		d.episodioActual=d.episodiosPorTemporada;
	}
	cout<<"\n Serie agregada"<<endl;
	
	ofstream archivo(nombreArchivo, ios::app);	     
	    if (archivo.is_open()) {
		        archivo<<d.id<<";"
		        <<d.nombreSerie<<";"
		        <<d.genero<<";"
		        <<d.temporada<<";"
		        <<d.episodiosPorTemporada<<";"
		        <<d.estado<<";"
				<<d.temporadaActual<<";"
				<<d.episodioActual<<"\n";
	    }else{
			cerr<<"No se pudo abrir el archivo para guardar\n";
		}
}

vector<datos> CargarSeries(){
	vector <datos> datoscompletos;
	ifstream archivo(nombreArchivo);
	
	if(archivo.is_open()){
		
		string linea;
		
		while(getline(archivo,linea)){
			if(linea.empty()){
				continue;
			}
			
			vector<string> sacarDato;
			size_t pos=0;
			
			while((pos=linea.find(";"))!=string::npos){
				sacarDato.push_back(linea.substr(0,pos));
				linea.erase(0,pos+1);
			}
			sacarDato.push_back(linea);
			if(sacarDato.size()==8){
				datos n;
				n.id=stoi(sacarDato[0]);
				n.nombreSerie=sacarDato[1];
				n.genero=sacarDato[2];
				n.temporada=stoi(sacarDato[3]);
				n.episodiosPorTemporada=stoi(sacarDato[4]);
				n.estado=stoi(sacarDato[5]);
				n.temporadaActual=stoi(sacarDato[6]);
				n.episodioActual=stoi(sacarDato[7]);
				datoscompletos.push_back(n);
			}
		}
	}
	return datoscompletos;
}
void VerSeries(){
	vector<datos> series= CargarSeries();
	string esta="";
	cout<<"\n-- LISTA DE SERIES--\n";
	if(series.empty()){
		cout<<"Lista vacia\n";
		return;
	}
	for(auto& serie:series){
		cout<<"\n------------------\n";
		cout<<"ID Serie: "<<serie.id<<endl;
		cout<<"Nombre de la serie: "<<serie.nombreSerie<<endl;
		cout<<"Genero de la serie: "<<serie.genero<<endl;
		cout<<"NUmero de temporadas: "<<serie.temporada<<endl;
		cout<<"Episodios por temporada: "<<serie.episodiosPorTemporada<<endl;
		cout<<"Estado: ";
		if(serie.estado==1){
			cout<<"pendiente"<<endl;
		}else if(serie.estado==2){
			cout<<"Viendo"<<endl;
		}else if(serie.estado==3){
			cout<<"Finalizada"<<endl;
		}
		cout<<"Temporada actual: "<<serie.temporadaActual<<endl;
		cout<<"Episodio actual: "<<serie.episodioActual<<endl;	
	}
}

void BuscarSerie(){
	vector<datos> series= CargarSeries();
	string esta="";
	cout<<"\n-- LISTA DE SERIES--\n";
	if(series.empty()){
		cout<<"Lista vacia\n";
		return;
	}else{
		cout<<"Ingrese el Id de la serie a buscar: ";
		int idbuscar;
		cin>>idbuscar;
		for(auto& serie:series){
			if(serie.id==idbuscar){
				cout<<"Nombre de la serie: "<<serie.nombreSerie<<endl;
				cout<<"Genero de la serie: "<<serie.genero<<endl;
				cout<<"NUmero de temporadas: "<<serie.temporada<<endl;
				cout<<"Episodios por temporada: "<<serie.episodiosPorTemporada<<endl;
				cout<<"Estado: ";
				if(serie.estado==1){
					cout<<"pendiente"<<endl;
				}else if(serie.estado==2){
					cout<<"Viendo"<<endl;
				}else if(serie.estado==3){
					cout<<"Finalizada"<<endl;
				}
				cout<<"Temporada actual: "<<serie.temporadaActual<<endl;
				cout<<"Episodio actual: "<<serie.episodioActual<<endl;
				return;
			}
		}
		cout<<"Serie no encontrada\n";
	}
}
void guardartodo(vector<datos>& series){
	ofstream archivo(nombreArchivo);
		if (archivo.is_open()) {
			for (auto& d:series)
		        archivo<<d.id<<";"
		        <<d.nombreSerie<<";"
		        <<d.genero<<";"
		        <<d.temporada<<";"
		        <<d.episodiosPorTemporada<<";"
		        <<d.estado<<";"
				<<d.temporadaActual<<";"
				<<d.episodioActual<<"\n";
	    }else{
			cerr<<"No se pudo abrir el archivo para guardar\n";
		}
}
void actualizar(){
	vector<datos> series= CargarSeries();
	string esta="";
	cout<<"\n-- ACTUALIZAR SERIES--\n";
	if(series.empty()){
		cout<<"Lista vacia\n";
		return;
	}else{
		cout<<"Ingrese el Id de la serie a buscar: ";
		int idbuscar;
		cin>>idbuscar;
		for(auto& serie:series){
			if(serie.id==idbuscar){
				cin.ignore();
				cout<<"Nombre de la serie: ";
				getline(cin,serie.nombreSerie);
				cout<<"Genero de la serie: ";
				getline(cin,serie.genero);
				cout<<"Ingrese el numero de temporadas: ";
				cin>>serie.temporada;
				cout<<"Ingrese el numero de episodios por temporada: ";
				cin>>serie.episodiosPorTemporada;
				cout<<"Ingrese el estado (1.Pendiente/2.Viendo/3.Finalizado): ";
				cin>>serie.estado;
				
				if(serie.estado<0 || serie.estado>3){
					cout<<"Ingrese una opcion valida"<<endl;
					return;
				}
				
				if(serie.estado==1){
					serie.temporadaActual=1;
					serie.episodioActual=1;
				}else if(serie.estado==2){
					cout<<"Temporada actual: ";
					cin>>serie.temporadaActual;
					cout<<"Episodio actual: ";
					cin>>serie.episodioActual;
				}else if(serie.estado==3){
					serie.temporadaActual=serie.temporada;
					serie.episodioActual=serie.episodiosPorTemporada;
				}
			}
		}

	}	
	guardartodo(series);
}
void eliminar(){
	vector<datos> series= CargarSeries();
	string esta="";
	cout<<"\n-- ACTUALIZAR SERIES--\n";
	if(series.empty()){
		cout<<"Lista vacia\n";
		return;
	}
	cout<<"Ingrese el Id de la serie a eliminar: ";
	int idbuscar;
	cin>>idbuscar;
	for(size_t i=0;i<series.size();i++){
		if(idbuscar==series[i].id){
			series.erase(series.begin()+i);
			cout<<"Eliminado "<<endl;
		}
	}
	guardartodo(series);
}
int main(){
	int opcion;
	
	do{
		cout<<"\nMenu\n";
		cout<<"1. Agregar Serie\n";
		cout<<"2. Listar Serie Serie\n";
		cout<<"3. Buscar Serie por id\n";
		cout<<"4. Actualizar serie Serie por id\n";
		cout<<"5. Eliminar Serie\n";
		cout<<"6. Salir\n";
		cout<<"Elija una opcion: ";
		cin>>opcion;
		switch(opcion) {
			case 1:
				agregarSerie();
				break;
			case 2:
				VerSeries();				
				break;
			case 3:
				BuscarSerie();
				break;
			case 4:
				actualizar();
				break;
			case 5:
				eliminar();
				break;
			default:
				cout<<"opcion invalida";
				break;
		}
	}	
	while(opcion != 6);
	
	return 0;
}
