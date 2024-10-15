#ifndef I_MATRIX_PRESENTOR
#define I_MATRIX_PRESENTOR

#include <string>

class IMatrixPresentor
{
public:
	virtual void GetMatrixADimentions(int * cols, int * rows) const = 0;
	virtual bool SetMatrixAValue(int col, int row, const std::string & value) = 0;
	virtual std::string GetMatrixAValue(int col, int row) const = 0;

	virtual void GetMatrixBDimentions(int * cols, int * rows) const = 0;
	virtual bool SetMatrixAValue(int col, int row, const std::string & value) = 0;
	virtual std::string GetMatrixBValue(int col, int row) const = 0;

	virtual void GetMatrixCDimentions(int * cols, int * rows) const = 0;
	virtual std::string GetMatrixCValue(int col, int row) const = 0;
};

#endif
