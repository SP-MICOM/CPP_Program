#include "Vector2.h"

int main()
{
#pragma region 캡슐화
	// 객체의 속성과 기능을 하나의 단위로 합친 다음 외부에서
	// 필요한 정보만 접근할 수 있도록 제한하는 기능입니다.

	Vector2 point1D(1, 0);
	Vector2 point2D(0, 1);

	// Vector2 direction = point1D + point2D;

#pragma endregion

	return 0;
}