#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setWidth(int, int*);
extern "C" void setLength(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ002
{
	TEST_CLASS(REQ002)
	{
	public:
		TEST_METHOD(widthFunctionalityGeneral)
		{
			int width = 1;
			setWidth(12, &width);
			Assert::AreEqual(12, width);
		}
		TEST_METHOD(widthFunctionalityMax)
		{
			int width = 1;
			setWidth(1, &width);
			Assert::AreEqual(1, width);
		}
		TEST_METHOD(widthFunctionalityMin)
		{
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}

		TEST_METHOD(lengthFunctionalityGeneral)
		{
			int length = 1;
			setLength(43, &length);
			Assert::AreEqual(43, length);
		}
		TEST_METHOD(lengthFunctionalityMax)
		{
			int length = 1;
			setLength(1, &length);
			Assert::AreEqual(1, length);
		}
		TEST_METHOD(lengthFunctionalityMin)
		{
			int length = 99;
			setLength(1, &length);
			Assert::AreEqual(1, length);
		}
	};
}
