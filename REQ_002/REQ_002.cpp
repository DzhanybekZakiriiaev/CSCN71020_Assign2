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
			//This is testing setWidth general functionality
			int width = 17;
			setWidth(12, &width);
			Assert::AreEqual(12, width);
		}
		TEST_METHOD(widthFunctionalityMin)
		{
			//This is testing setWidth max values functionality
			int width = 1;
			setWidth(1, &width);
			Assert::AreEqual(1, width);
		}
		TEST_METHOD(widthFunctionalityMax)
		{
			//This is testing setWidth min values functionality
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}

		TEST_METHOD(lengthFunctionalityGeneral)
		{
			//This is testing setLength general functionality
			int length = 57;
			setLength(43, &length);
			Assert::AreEqual(43, length);
		}
		TEST_METHOD(lengthFunctionalityMin)
		{
			//This is testing setLength general min values functionality
			int length = 1;
			setLength(1, &length);
			Assert::AreEqual(1, length);
		}
		TEST_METHOD(lengthFunctionalityMax)
		{
			//This is testing setLength general max values functionality
			int length = 99;
			setLength(1, &length);
			Assert::AreEqual(1, length);
		}
	};
}
