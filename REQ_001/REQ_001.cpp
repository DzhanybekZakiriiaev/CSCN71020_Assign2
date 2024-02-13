#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(perimeterFunctionality)
		{
			//This is testing perimeter function using 10=3+3+2+2
			int length = 2;
			int width = 3;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(10, result);
		}

		TEST_METHOD(areaFunctionality)
		{
			//This is testing area function using 20=5*4
			int length = 5;
			int width = 4;
			int result = getArea(&length, &width);
			Assert::AreEqual(20, result);
		}
	};
}
