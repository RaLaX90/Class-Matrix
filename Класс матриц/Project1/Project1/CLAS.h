#pragma once

class Matrix
{
public:
	Matrix();
	Matrix(int rows, int cols);
	Matrix(int rows, int cols, float **C);
	int Det(std::vector< std::vector<float> > &mass, int size, float det);
	std::vector<std::vector<float>> Matrix::Inverse(std::vector<std::vector<float>>& mass, std::vector<std::vector<float>>& result_mass, int size, float det);

	Matrix(Matrix &other);
	Matrix& operator=(const Matrix &other);

	~Matrix();

	void Set(int rows, int cols);
	Matrix operator+(const Matrix &other);
	Matrix operator-(const Matrix &other);
	Matrix operator*(const Matrix &other);

	float getMatrix(int index1, int index2);
	void setMatrix(int index1, int index2, float value);




private:
	int colCount = 0, rowCount = 0;
	float **matrix;
};

void Get_mass(std::vector <std::vector<float> > &mass, std::vector< std::vector<float> > &temp_arr, int i, int j, int size) {

	int ki, kj, di, dj;
	di = 0;

	for (ki = 0; ki < size - 1; ki++) {
		if (ki == i) {
			di = 1;
		}

		dj = 0;

		for (kj = 0; kj < size - 1; kj++) {
			if (kj == j) {
				dj = 1;
			}
			temp_arr[ki][kj] = mass[ki + di][kj + dj];
		}
	}

}

void Transp(std::vector< std::vector<float> > &mass, std::vector< std::vector<float> > &temp_mass, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			temp_mass[i][j] = mass[j][i];
		}
	}

}

Matrix::Matrix()
{

}
//Конструктор, выделяем динамическую память в зависимости от количества строк и столбцов.
Matrix::Matrix(int rows, int cols)
{
	this->rowCount = rows;
	this->colCount = cols;
	this->matrix = new float*[rowCount];
	for (int i = 0; i < rowCount; i++)
	{
		matrix[i] = new float[colCount];
		for (int j = 0; j < colCount; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

Matrix::Matrix(int rows, int cols, float **C)
{
	colCount = cols;
	rowCount = rows;
	matrix = new float*[rowCount];
	for (int i = 0; i < rowCount; i++)
	{
		matrix[i] = new float[colCount];
		for (int j = 0; j < colCount; j++)
		{
			matrix[i][j] = C[i][j];
		}
	}
}

inline int Matrix::Det(std::vector< std::vector<float> > &mass, int size, float det)
{

	if (size < 1) {
		return NAN;
	}
	else if (size == 1) {
		det = mass[0][0];
		return det;
	}
	else if (size == 2) {
		det *= (mass[0][0] * mass[1][1]) - (mass[1][0] * mass[0][1]);
		return det;
	}
	else if (size > 2) {

		std::vector < std::vector <float>> temp_arr(size);
		for (int i = 0; i < size; i++) {
			temp_arr[i].resize(size);
		}

		det *= mass[0][0];
		Get_mass(mass, temp_arr, 0, 0, size);
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - 1; j++) {
				temp_arr[i][j] = ((mass[0][0] * temp_arr[i][j]) - (mass[i + 1][0] * mass[0][j + 1])) / mass[0][0];
			}
		}
		return this->Det(temp_arr, size - 1, det);

	}

}

inline std::vector<std::vector<float>> Matrix::Inverse(std::vector<std::vector<float>>& mass, std::vector<std::vector<float>>& result_mass, int size, float det)
{	

	std::vector < std::vector <float>> temp_arr2(size - 1);

	for (int i = 0; i < size; i++) {
		if (i != size - 1) {
			temp_arr2[i].resize(size - 1);
		}
	}

	std::vector < std::vector <float>> other_mas(size);
	for (int i = 0; i < size; i++) {
		other_mas[i].resize(size);
	}

	//PrintMatr(mas, dataGridView1->ColumnCount);

	Transp(mass, other_mas, size);

	//PrintMatr(other_mas, dataGridView1->ColumnCount);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			Get_mass(other_mas, temp_arr2, i, j, size);

			if ((((i + 1) + (j + 1)) % 2) == 0) {
				result_mass[i][j] = (1 / det) * Det(temp_arr2, size - 1, 1);///1
			}
			else {
				result_mass[i][j] = (1 / det) * (Det(temp_arr2, size - 1, 1) * (-1));///1
			}


			/*if ((i + j) == 0) {/////2
				temp_arr3[i][j] = mas[i][j] / (Det(temp_arr2, dataGridView1->ColumnCount - 1));
			} else {
				temp_arr3[i][j] = mas[i][j] / (Det(temp_arr2, dataGridView1->ColumnCount - 1) * (-1));
			}*/

		}
	}

	return result_mass;
}

inline Matrix::Matrix(Matrix & other)
{
	this->Set(other.rowCount, other.colCount);
	for (int i = 0; i < this->colCount; i++) {
		for (int q = 0; q < this->rowCount; q++) {
			this->matrix[i][q] = other.matrix[i][q];
		}
	}
}

inline Matrix & Matrix::operator=(const Matrix & other)
{
	if (this == &other) {
		return *this;
	}

	if (matrix != nullptr) {
		for (int i = 0; i < colCount; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
		matrix = nullptr;
	}

	this->Set(other.rowCount, other.colCount);
	for (int i = 0; i < this->colCount; i++) {
		for (int q = 0; q < this->rowCount; q++) {
			this->matrix[i][q] = other.matrix[i][q];
		}
	}
	return *this;
}

Matrix::~Matrix()
{
	if (colCount != 0) {
		for (int i = 0; i < colCount; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
		matrix = nullptr;
	}
}


void Matrix::Set(int rows, int cols) {
	this->rowCount = rows;
	this->colCount = cols;
	this->matrix = new float*[rowCount];

	for (int i = 0; i < rowCount; i++) {
		matrix[i] = new float[colCount];

		for (int j = 0; j < colCount; j++) {
			matrix[i][j] = 0;
		}

	}

}


Matrix Matrix::operator+(const Matrix &other) {
	Matrix temp(this->rowCount, this->colCount);
	//temp.Set(this->rowCount, this->colCount);
	for (int i = 0; i < this->colCount; i++) {
		for (int q = 0; q < this->rowCount; q++) {
			temp.matrix[i][q] = this->matrix[i][q] + other.matrix[i][q];
		}
	}
	return temp;
}

Matrix Matrix::operator-(const Matrix &other) {
	Matrix temp(this->rowCount, this->colCount);
	//temp.Set(this->rowCount, this->colCount);
	for (int i = 0; i < this->colCount; i++) {
		for (int q = 0; q < this->rowCount; q++) {
			temp.matrix[i][q] = this->matrix[i][q] - other.matrix[i][q];
		}
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix &other) {
	Matrix temp(this->rowCount, this->colCount);
	//temp.Set(this->rowCount, this->colCount);
	for (int i = 0; i < this->rowCount; i++) {
		for (int j = 0; j < other.colCount; j++) {
			for (int q = 0; q < this->colCount; q++) {
				temp.matrix[i][j] += this->matrix[i][q] * other.matrix[q][j];
			}
		}
	}
	return temp;

}

float Matrix::getMatrix(int index1, int index2) {
	return this->matrix[index1][index2];
}

void Matrix::setMatrix(int index1, int index2, float value) {
	this->matrix[index1][index2] = value;
}

