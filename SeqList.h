#pragma once
#ifndef SEQLIST_H
#define SEQLIST_H
#include"Elem.h"
class SeqList {
private:
	Elem* elem;//�洢������
	int maxSize;//�ܴ洢�����������
	int size;//��ǰ����ŵ����ݸ���
public:
	SeqList();//���캯��
	SeqList(const SeqList& list);//�������캯��
	~SeqList();//��������
	int Get_maxSize();//�������Ա��ܴ洢�����������
	int Get_size();//����˳���洢���ݵĸ���
	bool isEmpty();//�ж�˳����Ƿ�Ϊ��
	void print();//��ӡ˳���
	void clear();//���˳���
	void delete_SeqList();//����˳���
	void reSize();//���ӿռ��С
	void push_First(Elem p);//ͷ�巨
	void push_Last(Elem p);//β�巨
	void push_Pos(int pos, Elem p);//�ڵ�pos��λ�ò�������
	void pop_First();//ͷɾ��
	void pop_Last();//βɾ��
	void pop_Pos(int pos);//ɾ��˳����pos��Ԫ��
	void change_Pos(int pos,Elem p);//�޸�˳����pos������
	void get_Pos(int pos, Elem& p);//�õ�˳����pos������
	int find_Pos(Elem p); // ����˳�����p��ͬ�ĵ�һ��Ԫ�ص��±�pos�����������򷵻� - 1
};
#endif // !SEQLIST_H

