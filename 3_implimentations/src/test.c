#include "Dairy.h"
#include "unity.h"
void setup(){

}
void teardown(){

}
 void milk(){
      TEST_ASSERT_EQUAL(68,milk(2));
 }
void curd(){
 TEST_ASSERT_EQUAL(20,curd(1));
}
void BUtter(){
 TEST_ASSERT_EQUAL(50,Butter(1));
}
void Buttermilk(){
 TEST_ASSERT_EQUAL(16,Buttermilk(2));
}
void Total(){
     TEST_ASSERT_EQUAL(154,Total(68,20,50,16))
}
int main_test(){

       UNITY_BEGIN();
    RUN_TEST(test_milk);
    RUN_TEST(test_curd);
    RUN_TEST(test_Butter);
    RUN_TEST(test_Buttermilk);

    return UNITY_END();
    
    
    


}