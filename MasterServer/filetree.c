#include "filetree.h"


void create_node(node_t *father, file_t *file){
	node_t *node = (node_t*) malloc(sizeof(node_t));
	node->file = file;
	node->father = father;
	linklist_init(&node->child);
	if( father != NULL)
		linklist_push_back(father->child, (void*)node);
}


void delete_node(node_t **node){
	while((*node)->child->size != 0){
		listnode_t *listnode = linklist_findFirst((*node)->child);
		node_t *tnode = (node_t*) listnode->elem;
		delete_Node(&tnode);
	}
	node_t *father = (*node)->father;
	linklist_delete(father->child, *node);
	free_Node(node);
	node = NULL;
}


node_t* find_node(node_t *root, file_t *file){
	listnode_t *listnode = linklist_findFirst((*node)->child);
	while( listnode != NULL) {
		node_t *tnode = (node_t*)listnode->elem;
		if( file_equal(tnode->file, file) ) {
			return tnode;
		}
		listnode = listnode->next;
	}
	listnode_t *listnode = linklist_findFirst((*node)->child);
	while( listnode != NULL) {
		node_t *tnode = (node_t*)listnode->elem;
		node_t* result = find_Node(tnode, file);
		if(result != NULL)return result;
		listnode = listnode->next;
	}
	return NULL;
}

void free_node(node_t **node){
	file_free((*node)->file);
	linklist_free((*node)->child);
	(*node)->father = NULL;
	free(*node);
	node = NULL;
}
