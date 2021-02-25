#include "bst.h"

#include <iostream>
#include <iterator>
#include <cstddef>
#include <vector>
#include <queue>

Node::Node(int data) {
	this->data = data;
	this->left = NULL;
	this->right = NULL;
};

BST::BST(int data) {
	this->root = new Node(data);
	this->count = 1;
};
/******************************************************************************/
/* Implementaciรณn de Primitivas */
/*-------------------------------*/

/* Inserto un nodo en el árbol por cada uno de los elementos del dataset */
void createTree(BST* tree, std::vector<int> dataset) {
	for (int data : dataset)
		insert(tree, data);

};
/* Aumentamos el contador, creamos un nuevo nodo y lo insertamos en el árbol */
void insert(BST* bst, int data) {
	bst->count++;
	Node* newNode = new Node(data);
	searchTree(bst->root, newNode);
};
/* Función recursiva para insertar el Nodo correspondiente */
void searchTree(Node* node, Node* newNode) {
	/* Si el nuevo nodo a insertar es menor al nodo raíz */
	if (newNode->data < node->data) {
		/* Sino existe, seteo al nuevo nodo como hijo izquierdo */
		if(!node->left) {
			node->left = newNode;
		/* Sino ahora llamo a la funcion pero mi raiz es el hijo izquierdo */
		} else {
			searchTree(node->left, newNode);
		};

	/* Si el nuevo nodo a insertar es mayor al nodo raíz */
	} else if (newNode->data > node->data) {
		/* Sino existe, seteo al nuevo nodo como hijo derecho */
		if (!node->right) {
			node->right = newNode;
		/* Sino ahora llamo a la funcion pero mi raiz es el hijo derecho */
		} else {
			searchTree(node->right, newNode);
		};

	/* Si el dato del nodo es igual al dato de la raíz,
	 * lanzo una excepcion en el programa
	 */
	} else {
		throw new std::exception();

	};
};

/* Muestro el tamaño del nodo */
int size(BST* bst) {
	return bst->count;
};

int min(Node* root) {
	Node* currentNode = root;
	/* Recorro el lado izquierdo hasta que encuentre el menor nodo del árbol */
	while(currentNode->left) {
		currentNode = currentNode->left;

	}

	return currentNode->data;
};

int max(Node* root) {
	Node* currentNode = root;
	/* Recorro el lado izquierdo hasta que encuentre el mayor nodo del árbol */
	while(currentNode->right) {
		currentNode = currentNode->right;

	}

	return currentNode->data;

};

bool containsData(Node* root, int data) {
	Node* currentNode = root;
	/* Recorro todos los nodos del árbol para saber si exite el nodo */
	while(currentNode) {
		/* Comparo los datos de los nodos para saber si existe */
		if (data == currentNode->data) {
			return true;
		}
		/* Si el dato es menor, recorro el lado izquierdo del árbol sino comienzo
		 * la búsqueda por el lado derecho hasta encontrar el posible valor.
		 */
		if (data < currentNode->data) {
			currentNode = currentNode->left;

		} else {
			currentNode = currentNode->right;

		}
	}

	return false;
};

/*
 * Depth First Search / Búsqueda en Profundidad
 */

/* Búsqueda InOrder */
/* Valores esperados:: 2, 3, 12, 15, 28, 36, 39 */
void inOrder(Node* root) {
    std::cout << "[ -------------" << " ] "<<std::endl;
	/* Busco en Nodo izquierdo */
	if(root->left){

        inOrder(root->left);

	}

	/* Muestro el dato del Nodo */
    std::cout << "[ " << root->data << " ] ";
	//	std::cout << "[ x ] ";
	/* busco en Nodo derecho */
	if(root->right){
         inOrder(root->right);
	}

};

/* Búsqueda PreOrder */
/* Valores esperados:: 15, 3, 2, 12, 36, 28, 39 */
void preOrder(Node* root) {
	/* Muestro el dato del Nodo */
	std::cout << "[ " << root->data << " ] ";
	/* Busco en Nodo izquierdo */
	if(root->left) preOrder(root->left);
	/* busco en Nodo derecho */
	if(root->right) preOrder(root->right);
};

/* Búsqueda PostOrder */
/* Valores esperados:: 2, 12, 3, 28, 39, 36, 15 */
void postOrder(Node* root) {
	/* Busco en Nodo izquierdo */
	if(root->left) postOrder(root->left);
	/* busco en Nodo derecho */
	if(root->right) postOrder(root->right);
	/* Muestro el dato del Nodo */
	std::cout << "[ " << root->data << " ] ";
};

/*
 * Breadth First Search / Búsqueda en Anchura
 */
/* Valores esperados:: 15, 3, 36, 2, 12, 28, 39 */
 void bfs (Node* root) {
	 /* Creamos a una Cola vacía */
	 std::queue<Node *> q;

    /* Encolo la raíz e inizializo la altura */
    q.push(root);

    while (q.empty() == false) {
        /* Imprime el primer elemento (el primer node) del la cola y lo elimina */
        Node *node = q.front();
		std::cout << "[ " << node->data << " ] ";
        q.pop();

        /* Encolo el nodo (hijo) izquierdo */
        if (node->left != NULL)
            q.push(node->left);

        /* Encolo el nodo (hijo) derecho */
        if (node->right != NULL)
            q.push(node->right);
    }
 };
