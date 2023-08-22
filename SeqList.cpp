#include "SeqList.h"

SeqList::SeqList()
{
	this->maxSize = 10000;
	this->size = 0;
	this->elem = new Elem[this->maxSize];
	if (elem == NULL)
	{
		cout << "空间不足，内存分配失败" << endl;
	}
}

SeqList::SeqList(const SeqList& list)
{
	this->maxSize = list.maxSize;
	this->size = list.size;
	this->elem = new Elem[this->maxSize];
	if (elem == NULL)
	{
		cout << "空间不足，内存分配失败" << endl;
	}
	else {
		for (int i = 0; i < list.size; i++)
		{
			this->elem[i] = list.elem[i];
		}
	}
}

SeqList::~SeqList()
{
	delete []this->elem;
}

int SeqList::Get_maxSize()
{
	return this->maxSize;
}

int SeqList::Get_size()
{
	return this->size;
}

bool SeqList::isEmpty()
{
	if (this->size == 0)
	{
		return true;
	}
	else {
		return false;
	}
}

void SeqList::print()
{
	if (this->isEmpty() == true)
	{
		return;
	}
	else {
		for (int i = 0; i < this->Get_size(); i++)
		{
			cout<<this->elem[i] << endl;
		}
	}
}

void SeqList::clear()
{
	delete this->elem;
	this->size = 0;
	this->elem = new Elem[this->maxSize];
}

void SeqList::delete_SeqList()
{
	delete []this->elem;
}

void SeqList::reSize()
{
	this->maxSize += 10;
	Elem* temp = new Elem[this->maxSize];
	for (int i = 0; i < this->Get_size(); i++)
	{
		temp[i] = this->elem[i];
	}
	delete this->elem;
	this->elem = temp;
}

void SeqList::push_First(Elem p)
{
	if (this->size + 1 > this->maxSize)
	{
		this->reSize();
	}
	else {
		this->size++;
		for (int i = this->size - 1; i > 0; i--)
		{
			this->elem[i] = this->elem[i - 1];
		}
		this->elem[0] = p;
	}
}

void SeqList::push_Last(Elem p)
{
	if (this->size + 1 > this->maxSize)
	{
		this->reSize();
	}
	else {
		this->size++;
		this->elem[this->size - 1] = p;
	}
}

void SeqList::push_Pos(int pos, Elem p)
{
	if (pos > this->size + 1 || pos <= 0)
	{
		cout << "不存在第pos个位置" << endl;
		return;
	}
	else if (this->size + 1 > this->maxSize)
	{
		this->reSize();
	}
	this->size++;
	for (int i = this->size - 1; i >= pos; i--)
	{
		this->elem[i] = this->elem[i - 1];
	}
	this->elem[pos - 1] = p;
}

void SeqList::pop_First()
{
	if (this->isEmpty() == true)
	{
		return;
	}
	else {
		for (int i = 0; i < this->size - 1; i++) 
		{
			this->elem[i] = this->elem[i + 1];
		}
		this->size--;
	}
}

void SeqList::pop_Last()
{
	if (this->isEmpty() == true)
	{
		return;
	}
	this->size--;
}

void SeqList::pop_Pos(int pos)
{
	if (pos > this->size || pos <= 0)
	{
		return;
	}
	else {
		for (int i = pos - 1; i < this->size - 1; i++)
		{
			this->elem[i] = this->elem[i + 1];
		}
		this->size--;
	}
}

void SeqList::change_Pos(int pos,Elem p)
{
	if (pos > this->size || pos <= 0)
	{
		return;
	}
	else {
		this->elem[pos - 1] = p;
	}
}

void SeqList::get_Pos(int pos, Elem& p)
{
	if (pos > this->size || pos <= 0)
	{
		return;
	}
	else {
		p = this->elem[pos - 1];
	}
}

int SeqList::find_Pos(Elem p)
{
	for (int i = 0; i < this->size; i++)
	{
		if (this->elem[i] == p)
		{
			return i;
		}
	}
	return -1;
}
