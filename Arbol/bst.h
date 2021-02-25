#ifndef _BST_H_
#define _BST_H_

#include <cstddef>
#include <iostream>
#include <vector>
#include <iterator>
#include <queue>

/***********************************************************************
/* Definiciones de Tipos de Datos
 *----------------------------------------------------------------------
 */

/* Tipo de Estructura Nodo */
struct Node {
	int data; // valor
	struct Node* right; // Nodo derecho
	struct Node* left; // Nodo izquierdo

	Node(int data);
};

/* Tipo de Estructura Binary Search Tree / Arbol Binario de Búsqueda */
struct BST {
	struct Node* root; // Nodo Raiz
	int count; // contador

	BST(int data);
};

/******************************************************************************/
/* Definicion de Primitivas */
/*--------------------------*/

/*
 * PRE : El Arbol no debe haber sido creado, pero si su nodo raiz y el set de datos.
 * POST: El Arbol queda creado y preparado para ser usado y evaluado.
 */
void createTree(BST* tree, std::vector<int> dataset);
void insert(BST* bst, int data);
void searchTree(Node* node, Node* newNode);
/*
 * PRE : El Arbol debe haber sido creado en su totalidad.
 * POST: Muestra el tamaño del Arbol.
 */
int size(BST* bst);
/*
 * PRE : El Arbol debe haber sido creado en su totalidad.
 * POST: Muestra el dato Minimo del Arbol.
 */
int min(Node* root);
/*
 * PRE : El Arbol debe haber sido creado en su totalidad.
 * POST: Muestra el dato Maximo del Arbol.
 */
int max(Node* root);
/*
 * PRE : El Arbol debe haber sido creado en su totalidad.
 * POST: Muestra 0 (FALSE) O 1 (TRUE), si el valor existe o no en el Arbol.
 */
bool containsData(Node* root, int data);

/*------------------------------------------------------------------*/
/* Depth First Search / Búsqueda en Profundidad */
/*------------------------------------------------------------------*/
/*
 * PRE : El Arbol debe haber sido creado en su totalidad.
 * POST: Se imprime por pantalla el recorrido en profundidad InOrder
 */
void inOrder(Node* root);
/*
 * PRE : El Arbol debe haber sido creado en su totalidad.
 * POST: Se imprime por pantalla el recorrido en profundidad PreOrder
 */
void preOrder(Node* root);
/*
 * PRE : El Arbol debe haber sido creado en su totalidad.
 * POST: Se imprime por pantalla el recorrido en profundidad PostOrder
 */
void postOrder(Node* root);

/*------------------------------------------------------------------*/
/* Breadth First Search / Búsqueda en Anchura */
/*------------------------------------------------------------------*/
/*
 * PRE : El Arbol debe haber sido creado en su totalidad.
 * POST: Se imprime por pantalla el recorrido en anchura Breadth First Search
 */
 void bfs(Node* root);

#endif
