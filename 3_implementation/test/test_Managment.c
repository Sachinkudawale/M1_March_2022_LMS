#include"library_Managment_system.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void test_addition(void){
    TEST_ASSERT_EQUAL(pass,addition(110, "sachin", "the psychology of money"));
    TEST_ASSERT_EQUAL(pass,addition(111, "yash", "Bhagwad geeta ch-1"));
    TEST_ASSERT_EQUAL(pass,addition(112, "rohit", "the Rich dad poor dad"));
    TEST_ASSERT_EQUAL(pass,addition(113, "sanket", "Wings of fire"));
    TEST_ASSERT_EQUAL(pass,addition(114, "rohan", "Inflection point"));
}

void test_viewbook(void){
    TEST_ASSERT_EQUAL(pass,viewbook());
    TEST_ASSERT_EQUAL(pass,viewbook());
    TEST_ASSERT_EQUAL(pass,viewbook());
    TEST_ASSERT_EQUAL(pass,viewbook());
    TEST_ASSERT_EQUAL(pass,viewbook());
}

void test_searchbook(void){
    TEST_ASSERT_EQUAL(fail,searchbook(-1));
    TEST_ASSERT_EQUAL(pass,searchbook(110));
    TEST_ASSERT_EQUAL(pass,searchbook(111));
    TEST_ASSERT_EQUAL(pass,searchbook(112));
    TEST_ASSERT_EQUAL(pass,searchbook(113));
    TEST_ASSERT_EQUAL(pass,searchbook(114));
}



void test_deletebook(void){
    TEST_ASSERT_EQUAL(pass,deletebook(110));
    TEST_ASSERT_EQUAL(pass,deletebook(111));
    TEST_ASSERT_EQUAL(pass,deletebook(112));
    TEST_ASSERT_EQUAL(pass,deletebook(113));
    TEST_ASSERT_EQUAL(pass,deletebook(114));
}        

void test_issuebook(void){
    TEST_ASSERT_EQUAL(pass,issuebook(110));
    TEST_ASSERT_EQUAL(pass,issuebook(111));
    TEST_ASSERT_EQUAL(pass,issuebook(112));
    TEST_ASSERT_EQUAL(pass,issuebook(113));
    TEST_ASSERT_EQUAL(pass,issuebook(114));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_addition);
    RUN_TEST(test_searchbook);
    RUN_TEST(test_issuebook);
    RUN_TEST(test_deletebook);
    RUN_TEST(test_viewbook);
    
    return UNITY_END();
}
