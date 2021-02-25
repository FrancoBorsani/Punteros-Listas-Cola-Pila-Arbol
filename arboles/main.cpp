#include "bst.h"

#include <iostream>
#include <iterator>
#include <cstddef>
#include <vector>
#include <queue>

std::string showFriendly(bool result);

int main(int argc, char *argv[]) {
	/* Creo un nuevo BST Árbol Binario de Busqueda */
	//BST* tree = new BST(15);
        BST* tree = new BST(30);
	/* Creo mi set de datos para los nodos hijo del árbol */
//	std::vector<int> dataset { 3, 36, 2, 12, 28, 39 };
    std::vector<int> dataset {1, 9, 18, 55, 0, 12, 13 ,56 ,100, -15};
	int extraData = 12;

	/* Inserto los Nodos que necesito */
	createTree(tree, dataset);

	/* Muestro en pantalla los resultados llamando a cada funcion */
	std::cout << "\n";
	std::cout << ":: Binary Tree SIZE ::>> " << size(tree) << "\n";
	std::cout << ":: Binary Tree MIN ::>> " << min(tree->root) << "\n";
	std::cout << ":: Binary Tree MAX ::>> " << max(tree->root) << "\n";
	std::cout << ":: Binary Tree CONTAINS ::>> " << containsData(tree->root, extraData) << "\n";
	std::cout << ":: Binary Tree CONTAINS Friendly ::>> " << showFriendly(containsData(tree->root, extraData)) << "\n";

	std::cout << "\n" << ":: InOrder ::>> \n";
	inOrder(tree->root);

	std::cout << "\n\n" << ":: PreOrder ::>> \n";
	preOrder(tree->root);

	std::cout << "\n\n" << ":: PostOrder ::>> \n";
	postOrder(tree->root);

	std::cout << "\n\n" << ":: BFS ::>> \n";
	bfs(tree->root);

	/* Fin mostrar datos! */
	std::cout << "\n\n" << "<< :: FIN :: >> \n";


    return 0;
}

std::string showFriendly(bool result) {
	if (result)
		return "Exist!";
	else
		return "Not Exist!";
};
