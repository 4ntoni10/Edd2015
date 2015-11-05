#include<iostream>
using namespace std;


struct list {
	struct list *prev;
	int data;
	struct list *next;
} *node = NULL, *first = NULL, *last = NULL, *node1 = NULL, *node2 = NULL;

class linkedlist {
	public: 

		
		void insert_beginning() {
			list *addBeg = new list;
			cout << "Valor de nodo:" << endl;
			cin >> addBeg->data;
			if(first == NULL) {
				addBeg->prev = NULL;
				addBeg->next = NULL;
				first = addBeg;
				last = addBeg;
				cout << "Lista Creada" << endl;
			}
			else {
				addBeg->prev = NULL;
				first->prev = addBeg;
				addBeg->next = first;
				first = addBeg;
				cout << "Dato Introducido" << endl;
			}
		}

		
		void insert_end() {
			list *addEnd = new list;
			cout << "Valor de nodo:" << endl;
			cin >> addEnd->data;
			if(first == NULL) {
				addEnd->prev = NULL;
				addEnd->next = NULL;
				first = addEnd;
				last = addEnd;
				cout << "Lista Creada" << endl;
			}
			else {
				addEnd->next = NULL;
				last->next = addEnd;
				addEnd->prev = last;
				last = addEnd;
				cout << "Dato introducido" << endl;
			}
		}

		
		void display() {
			node = first;
			cout << "Lista Ascendente " << endl;
			while(node != NULL) {
				cout << node->data << endl;
				node = node->next;
			}
			node = last;
			cout << "Lista Descendente " << endl;
			while(node != NULL) {
				cout << node->data << endl;
				node = node->prev;
			}
		}
	
		
		void del() {
			int count = 0, number, i;
			node = node1 = node2 = first;
			for(node = first; node != NULL; node = node->next)
				cout << "Introduce valor:" << endl;
			count++;
			display();
			cout << count << " nodos" << endl;
			cout << "Nmero de nodo a eliminar" << endl;
			cin >> number;
			if(number != 1) {
				if(number < count && number > 0) {
					for(i = 2; i <= number; i++)
						node = node->next;
					for(i = 2; i <= number-1; i++)
						node1 = node1->next;
					for(i = 2; i <= number+1; i++)
						node2 = node2->next;
					node2->prev = node1;
					node1->next = node2;
					node->prev = NULL;
					node->next = NULL;
					node = NULL;
				}
				else if(number == count) {
					node = last;
					last = node->prev;
					last->next = NULL;
					node = NULL;
				}
				else
					cout << "Numero de Nodo invalido" << endl;
			}
			else {
				node = first;
				first = node->next;
				first->prev = NULL;
				node = NULL;
			}
			cout << "Nodo eliminado" << endl;
		}
	
};
/*....................Main.............
                                       */
int main() {
	int op = 0;
	linkedlist llist = linkedlist();
	while(op != 4) {
		cout << "1. Insertar al principio\n2. Insertar al final\n3. Eliminar\n4. Mostrar\n5. Salir" << endl;
		cout << "Introduce opcion:" << endl;
		cin >> op;
		switch(op) {
			case 1:
				llist.insert_beginning();
				break;
			case 2:
				llist.insert_end();
				break;
			case 3:
				llist.del();
				break;
			case 4:
				llist.display();
				break;
			case 5:
				cout << "Saliendo..." << endl;
				return 0;
				break;
			default:
				cout << "Opcion invalida" << endl;
		}
	}
	return 0;
}