#include <iostream>

using namespace std;

class Stack {
public:

	Stack(int size) {
		this->array = new int[size];
		// Seu construtor. Use para iniciar os atributos.
		cout << "Eu sou um construtor" << endl;
		this->size = size;
		this->indice = 0;
	}

	void push(int value) {
		this->array[this->indice++] = value;
	}

	void pop() {
		// TODO: Pop deve desempilhar um valor.
		this->indice--;
	}

	int count() {
		// TODO: Deve retornar o total de elementos dentro da pilha
		return (this->indice+1);
	}

	int top() {
		// TODO: Deve retornar o elemento do topo da pilha
		return (this->array[(this->indice-1)]);
	}

	bool isFull() {
		if(this->indice == (this->size-1))
			return true;
		return false;
	}

	bool isEmpty() {
		// TODO
		if(this->indice == 0)
			return true;
		return false;
	}

	void print() {
		// TODO: Esse método deve printar os valores do array!
		for(int i=0; i<this->indice; i++)
			cout << this->array[i] << ", ";
		cout << endl;
	}

	~Stack() {
		cout << "Eu sou um destrutor" << endl;
		// Destrutor! Use para desalocar os dados criados com o new
		delete[] array;
	}

private:
	int size; // Atributo privado. Pode ser acessado com this->atributo ou só com atributo
	int* array;
	int indice;
};


int main() {
	Stack pilha(20);
	// teste
	pilha.push(2);
	pilha.push(7);
	pilha.push(99);

	pilha.print();

	pilha.pop();
	pilha.pop();

	pilha.print();

	return 0;
}
