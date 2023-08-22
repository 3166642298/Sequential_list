#include<iostream>
#include"Elem.h"
#include"SeqList.h"
using namespace std;
int main()
{
	SeqList seqList;
	Elem elem1("pzn", 20, 1);
	Elem elem2("www", 20, 2);
	Elem elem3("xxx", 20, 3);
	Elem elem4("rrr", 20, 4);
	Elem elem5("yyy", 20, 5);
	seqList.push_Last(elem1);
	seqList.push_Last(elem2);
	seqList.push_Last(elem3);
	seqList.push_Last(elem4);
	seqList.push_Last(elem5);
	seqList.print();
	SeqList seqlist1(seqList);
	seqlist1.print();
	return 0;
}