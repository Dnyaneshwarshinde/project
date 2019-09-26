

#ifndef ARRAY_H_
#define ARRAY_H_

class Array
{
private:
	int row;
	int col;
	int **arr;
public:

	Array(void);
	Array(int row,int col);
	void acceptRecord();
	void print();
	~Array(void);

};




#endif /* ARRAY_H_ */
