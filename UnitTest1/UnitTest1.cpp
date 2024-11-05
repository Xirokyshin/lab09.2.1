#include "pch.h"
#include "CppUnitTest.h"
#include "../PR9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestCalculateWFormula1)
        {
            // Тест для calculateWFormula1
            double result = calculateWFormula1(3.0, 1.0, 2.0);
            Assert::AreEqual(1.0, result);

            result = calculateWFormula1(5.0, 3.0, 4.0);
            Assert::AreEqual(1.0, result);
        }

        TEST_METHOD(TestCalculateWFormula2)
        {
            // Тест для calculateWFormula2
            double result = calculateWFormula2(3.0, 1.0, 2.0);
            Assert::AreEqual(2.0, result);

            result = calculateWFormula2(5.0, 3.0, 4.0);
            Assert::AreEqual(2.0, result);
        }

        TEST_METHOD(TestCalculateW)
        {
            // Тест для calculateW з z > 1
            double result = calculateW(3.0, 1.0, 2.0);
            Assert::AreEqual(1.0, result);

            // Тест для calculateW з z <= 1
            result = calculateW(3.0, 1.0, 0.5);
            Assert::AreEqual(2.0, result);
        }
    };
}
