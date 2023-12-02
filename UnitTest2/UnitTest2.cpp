#include "pch.h"
#include "CppUnitTest.h";
#include"..\\gLab5.1\lab.cpp";
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(h(1., 1.) - 1.5 < 10e-15);
		}
	};

}
