#include "CUnit/Basic.h"

void isPalindrome(char str[]) {  
    int i = 0; 
    int j = strlen(str) - 1; 
    while (j > i) { 
        if (str[i++] != str[j--]) 
        { 
            printf("%s is Not Palindrome\n", str); 
            return; 
        } 
    } 
    printf("%s is palindrome\n", str); 
} 

void length_test() {
  CU_ASSERT_EQUAL(isPalindrome("kok"), "is palindrome");
  CU_ASSERT_EQUAL(isPalindrome("ababc"), "is not palindrome");
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
        
        if (NULL == CU_add_test(pSuite, "isPalindrome", isPalindrome)) {
        CU_cleanup_registry();
        return CU_get_error();
        }
        
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();   
   
    return CU_get_error();
}