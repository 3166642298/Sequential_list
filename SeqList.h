#pragma once
#ifndef SEQLIST_H
#define SEQLIST_H
#include"Elem.h"
class SeqList {
private:
	Elem* elem;//存储的数据
	int maxSize;//能存储的最大数据量
	int size;//当前所存放的数据个数
public:
	SeqList();//构造函数
	SeqList(const SeqList& list);//拷贝构造函数
	~SeqList();//析构函数
	int Get_maxSize();//返回线性表能存储的最大数据量
	int Get_size();//返回顺序表存储数据的个数
	bool isEmpty();//判断顺序表是否为空
	void print();//打印顺序表
	void clear();//清空顺序表
	void delete_SeqList();//销毁顺序表
	void reSize();//增加空间大小
	void push_First(Elem p);//头插法
	void push_Last(Elem p);//尾插法
	void push_Pos(int pos, Elem p);//在第pos个位置插入数据
	void pop_First();//头删法
	void pop_Last();//尾删法
	void pop_Pos(int pos);//删除顺序表第pos个元素
	void change_Pos(int pos,Elem p);//修改顺序表第pos个数据
	void get_Pos(int pos, Elem& p);//得到顺序表第pos个数据
	int find_Pos(Elem p); // 返回顺序表中p相同的第一个元素的下标pos，若不存在则返回 - 1
};
#endif // !SEQLIST_H

