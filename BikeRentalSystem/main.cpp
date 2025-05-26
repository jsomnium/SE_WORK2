#include "BikeRentalSystem.h"

int main()
{
	// 파일 입출력 변수 선언
	ifstream in_fp;
	ofstream out_fp;

	// 파일 입출력을 위한 초기화
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	doTask(in_fp, out_fp);

	out_fp.close();
	in_fp.close();

	return 0;
}