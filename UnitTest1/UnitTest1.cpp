
#include "pch.h"
#include "CppUnitTest.h"

#include "../3.6/B.cpp"
#include "../3.6/D1.cpp"

#include "../3.6/D3.cpp"
#include "../3.6/D4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab36
{
	TEST_CLASS(UnitTestLab36)
	{
	public:

		TEST_METHOD(Test)
		{
			D4 Test(  234, 234, 342);
			Assert::AreEqual(sizeof(D4), size_t(12));
		}
	};
}