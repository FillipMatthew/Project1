#ifndef I_MATRIX_VIEW
#define I_MATRIX_VIEW

#include <string>

class IMatrixPresentor;

class IMatrixView
{
public:
	virtual void Init(IMatrixPresentor * presentor) = 0;

	virtual void MatrixAChanged(int col, int row, const std::string & value) = 0;

	virtual void MatrixBChanged(int col, int row, const std::string & value) = 0;

	virtual void MatrixCChanged(int col, int row, const std::string & value) = 0;
};

#endif
