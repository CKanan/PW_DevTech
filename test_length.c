#include "CUnit/Basic.h"

void str_length(char str[]){
    int length=0;
    for(int i=0;str[i] !='\0';i++)
        length++;
    printf("Its length: %d\n",length); 
}
void length_test() {
  CU_ASSERT_EQUAL(str_length("aba"), 3);
  CU_ASSERT_EQUAL(str_length("abcde"), 5);
  CU_ASSERT_EQUAL(str_length("ahah"), 4);
}

int main() {
   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

        CU_pSuite pSuite = NULL;
        pSuite = CU_add_suite("string_test_suite", 0, 0);
        
        if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
        }
        
        if (NULL == CU_add_test(pSuite, "str_length", str_length)) {
        CU_cleanup_registry();
        return CU_get_error();
        }
        
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();   
   
    return CU_get_error();
}