#include<iostream>
using namespace std;
class Matrix
{
public:
	Matrix(int l, int c);

	Matrix operator=(const Matrix &m);
	Matrix operator~() const;

	friend istream & operator >> (istream & input, Matrix &a);
	friend ostream & operator << (ostream & output, Matrix &a);

	friend Matrix operator + (const Matrix &a,const Matrix &b);
	friend Matrix operator - (const Matrix &a,const Matrix &b);
	friend Matrix operator * (const Matrix &a,const Matrix &b);
private:
	int line;
	int col;
	int elems[100][100];
};
Matrix::Matrix(int l, int c)
{
	line = l;
	col = c;
}
Matrix Matrix::operator=(const Matrix &m)
{
	int i, j;
	line = m.line;
	col = m.col;
	for(i = 0; i < line; i++)
		for(j = 0; j < col; j++)
			elems[i][j] = m.elems[i][j];
	return *this;
}
Matrix Matrix::operator~() const
{
	int i, j;
	Matrix t(col, line);
	for(i = 0; i < line; i++)
		for(j = 0; j < col; j++)
		t.elems[i][j]=elems[j][i];
	return t;
}
istream & operator >> (istream & input, Matrix &a)
{
	int i, j;
	for(i = 0; i < a.line; i++)
		for(j = 0; j < a.col; j++)
			input>>a.elems[i][j];
	return input;
}
ostream & operator << (ostream & output, Matrix &a)
{
	int i, j;
	for(i = 0; i < a.line; i++)
	{
		for(j = 0; j < a.col; j++)
			output<<a.elems[i][j]<<" ";
		output<<endl;
	}
	return output;
}
Matrix operator + (const Matrix &a,const Matrix &b)
{
	int i, j;
	Matrix temp(a.line, a.col);
	for(i = 0; i < a.line; i++)
		for(j = 0; j < a.col; j++)
			temp.elems[i][j] = a.elems[i][j]+b.elems[i][j];
	return temp;
}
Matrix operator - (const Matrix &a,const Matrix &b)
{
	int i, j;
	Matrix temp(a.line, a.col);
	for(i = 0; i < a.line; i++)
		for(j = 0; j < a.col; j++)
			temp.elems[i][j] = a.elems[i][j]-b.elems[i][j];
	return temp;
}
Matrix operator * (const Matrix &a,const Matrix &b)
{
	int i, j, k;
	Matrix temp(a.line, b.col);
	for(i = 0; i < a.line; i++)
		for(j = 0; j < b.line; j++)
		{
			temp.elems[i][j] = 0;
			for(k = 0; k < a.col; k++)
				temp.elems[i][j] = temp.elems[i][j] + a.elems[i][k]*b.elems[k][j];
		}
	return temp;
}
int main()
{
	Matrix a(3,3),b(3,3);

	cout<<"�������һ�������Ԫ�أ�"<<endl;
	cin>>a;
	cout<<"������ڶ��������Ԫ�أ�"<<endl;
	cin>>b;

	Matrix c(3,3);
	cout<<"\n������ĺ�Ϊ��"<<endl;
	c = a+b;
	cout<<c;
	cout<<"\n������Ĳ�Ϊ��"<<endl;
	c = a-b;
	cout<<c;
	cout<<"\n������ĳ˻�Ϊ��"<<endl;
	c = a*b;
	cout<<c;

	cout<<"\nת�þ���Ϊ��"<<endl;
	cout<<~c;
	return 0;
}