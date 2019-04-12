#include "CUnit/Basic.h"

int str_compare(char str1[],char str2[]){
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++)
            if(str1[i]==str2[j])
                return 0;
            else return 1;
    }         
}

void length_test() {
  CU_ASSERT_EQUAL(str_compare("kenan","kenan"),0);
  CU_ASSERT_EQUAL(str_compare("abcde","kenn"), 1);
  CU_ASSERT_EQUAL(str_compare("ahah","ahah"), 0);
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
        
        if (NULL == CU_add_test(pSuite, "str_compare", str_compare)) {
        CU_cleanup_registry();
        return CU_get_error();
        }
        
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();   
   
    return CU_get_error();
}