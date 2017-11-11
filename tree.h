/*
 * tree.h
 *
 *  Created on: Nov 11, 2017
 *      Author: jenifferwu
 */

#ifndef TREE_H_
#define TREE_H_
#include <stdio.h>

typedef struct BiTree
{
	char data;
	struct BiTree * lchild;
	struct BiTree * rchild;
} BiTreeNode;

void CreateBiTree(BiTreeNode * root, char A[], int i);

#endif /* TREE_H_ */
