#include <stdio.h>
#include "BinaryTree.h"
#include "BinarySearchTree.h"

void BSTMakeAndInit(BTreeNode ** pRoot)
{
	*pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode * bst)
{
	return GetData(bst);
}

void BSTInsert(BTreeNode ** pRoot, BSTData data)
{
	BTreeNode * pNode = NULL;    // parent node
	BTreeNode * cNode = *pRoot;    // current node
	BTreeNode * nNode = NULL;    // new node

	// ���ο� ��尡 �߰��� ��ġ�� ã�´�.
	while(cNode != NULL)
	{
		if(data == GetData(cNode))
			return;    // Ű�� �ߺ��� ������� ����

		pNode = cNode;

		if(GetData(cNode) > data)
			cNode = ...........
		else
			cNode = ...........
	}

	// pNode�� ���� ��忡 �߰��� �� ����� ����
	nNode = ........    // �� ����� ����
	SetData(nNode, data);    // �� ��忡 ������ ����

	// pNode�� ���� ��忡 �� ��带 �߰�
	if(pNode != NULL)    // �� ��尡 ��Ʈ ��尡 �ƴ϶��,
	{
		if(data < GetData(pNode))
			..........
		else
			..........
	}
	else    // �� ��尡 ��Ʈ �����,
	{
		*pRoot = .......
	}
}

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target)
{
	BTreeNode * cNode = bst;    // current node
	BSTData cd;    // current data

	while(cNode != NULL)
	{
		cd = GetData(cNode);

		if(target == cd)
			return ......
		else if(target < cd)
			cNode = ..........
		else
			cNode = ..........
	}

	return NULL;
}
