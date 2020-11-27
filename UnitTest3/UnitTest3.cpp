#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int b[22] = { 5, 10, 15 };
			t = Sum(b, 22, 1);
			Assert::AreEqual(t, 25);
		}
	};
}
