#include "../Program/Concrete.h"
#include "../Program/Stone.h"

int main()
{

#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부에 있는 세부 사항을 숨기고,
	// 필요한 부분만 외부에서 사용할 수 있도록 단순화시키는 작업입니다.

	// Block* container[2];
	// 
	// container[0] = new Stone;
	// container[1] = new Concrete;
	// 
	// for (int i = 0; i < 2; i++)
	// {
	// 	container[i]->Desribe();
	// }
	// 
	// for (int i = 0; i < 2; i++)
	// {
	// 	delete container[i];
	// }

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
	// 객체를 생성할 수 없습니다.

#pragma endregion

	return 0;
}