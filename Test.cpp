#include "sources/Fraction.hpp"
#include "doctest.h"
#include <limits>


using namespace std;
using namespace ariel;

namespace ariel
{


    TEST_CASE("building fraction with 0 denom Test")   
    {
        CHECK_THROWS(Fraction(1,0));
        CHECK_THROWS(Fraction(0,0));
    }

    TEST_CASE("building fraction Test")
    {
        Fraction harel;
        CHECK(harel.getNumerator() == 0);
        CHECK(harel.getDenominator() == 1);

        Fraction giladi(4, 6);
        CHECK(giladi.getNumerator() == 4);
        CHECK(giladi.getDenominator() == 6);

        Fraction henry(1, 2);
        CHECK(henry.getNumerator() == 1);
        CHECK(henry.getDenominator() == 2);
        
        Fraction gilad(0, 99);
        CHECK(gilad.getNumerator() == 0);
        CHECK(gilad.getDenominator() == 99);

        Fraction hg(-44, 88);
        CHECK(hg.getNumerator() == -44);
        CHECK(hg.getDenominator() == 88);

        Fraction hg2(-44, -88);
        CHECK(hg.getNumerator() == -44);
        CHECK(hg.getDenominator() == -88);
    }



    TEST_CASE(" ++ Test")
    {
        Fraction hg1(3, 1);
        Fraction hg2(7, 13);

        hg1++;
        ++hg1;
        CHECK(hg1.getNumerator() == 5); 
        CHECK(hg1.getDenominator() == 1);

        hg2++;
        ++hg2;
        CHECK(hg2.getNumerator() == 33);
        CHECK(hg2.getDenominator() == 7);
    }

   TEST_CASE("  -- Test") 
   {
        Fraction hg1(5, 2);
        --hg1;
        CHECK(hg1 == Fraction(3, 2));
        hg1--;
        CHECK(hg1 == Fraction(1, 2));
   }

   

    TEST_CASE(" != Test")
    {
        Fraction hg1(1, 2);
        Fraction hg2(2, 3);
        Fraction hg3(1, 2);

        CHECK(hg1 <= hg3);
        CHECK(hg3 <= hg1);
        CHECK(hg1 <= hg2);

        CHECK(hg1 == hg3);
        CHECK(!(hg1 == hg2));

        CHECK(!(hg1 > hg2));
        CHECK(hg2 > hg1);
        
        CHECK(!(hg1 >= hg2));
        CHECK(hg1 >= hg1);

        CHECK(hg1 < hg2);
        CHECK(!(hg2 < hg1));

        CHECK(hg1 != hg2);


     
    }


    TEST_CASE("  - Test")
    {
        Fraction hg(1, 2);
        Fraction hg1(1, 3);
        Fraction c(6, 6);
        Fraction d(-100, 7);

        Fraction e = hg - hg1;
        CHECK(e.getNumerator() == 1);
        CHECK(e.getDenominator() == 6);

        Fraction f = c - d;
        CHECK(e.getNumerator() == 107);
        CHECK(e.getDenominator() == 7);
    }


    TEST_CASE(" + Test") 
    {
        Fraction harel(1, 2);
        Fraction giladi(1, 3);
        harel++;
        ++harel;

        Fraction henry(-1, 8);
        Fraction giladd(7, 8);

        Fraction ans1 = harel + giladi;
        Fraction ans2 = henry + giladd;

        CHECK(ans1.getNumerator() == 5 );
        CHECK(ans1.getDenominator() == 6);

        CHECK(ans2.getNumerator() == 6);
        CHECK(ans2.getDenominator() == 8);
    }

    TEST_CASE("Rounding Test")
    {
        Fraction hg1(3, 5);
        float hg2 = 0.2001; 
        Fraction hg3 = hg1 + hg2; 
        CHECK(((hg3.getNumerator() == 4) && (hg3.getDenominator() == 5)));

        hg2 = 0.2001;
        hg3 = hg1 - hg2; 
        CHECK(((hg3.getNumerator() == 2) && (hg3.getDenominator() == 5)));

        hg2 = 0.2001;
        hg3 = hg1 * hg2; 
        CHECK(((hg3.getNumerator() == 3) && (hg3.getDenominator() == 25)));

        hg2 = 0.2001;
        hg3 = hg1 / hg2; 
        CHECK(((hg3.getNumerator() == 3) && (hg3.getDenominator() == 1)));
   }
    TEST_CASE(" * Test")
    {
        Fraction hg(2, 2);
        Fraction hg1(2, 3);
        Fraction hg2(-28, 7);
        Fraction hg3(5, 2);

        Fraction ans1 = hg * hg1;
        CHECK(ans1.getNumerator() == 2);
        CHECK(ans1.getDenominator() == 3);


        Fraction ans2 = hg2 * hg3;
        CHECK(ans2.getNumerator() == -10);
        CHECK(ans2.getDenominator() == 1);
    }

    TEST_CASE(" : Test")
    {
        Fraction hg1(2, 7);
        Fraction hg2(2, 3);
        Fraction ans1 = hg1 / hg2;

        CHECK(ans1.getNumerator() == 3);
        CHECK(ans1.getDenominator() == 7);

    }

       
}