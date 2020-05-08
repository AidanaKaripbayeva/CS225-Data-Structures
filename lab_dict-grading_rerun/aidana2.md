


## Score: 0/100 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c anagram_dict.cpp -o .objs/anagram_dict.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c fib.cpp -o .objs/fib.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c pronounce_dict.cpp -o .objs/pronounce_dict.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cartalk_puzzle.cpp -o .objs/cartalk_puzzle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c common_words.cpp -o .objs/common_words.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/anagram_dict.o .objs/fib.o .objs/pronounce_dict.o .objs/cartalk_puzzle.o .objs/common_words.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/15] - test_get_anagrams

- **Points**: 0 / 15


```
Original: canon == resultSet
Expanded: { "dog", "god" } == {  }
```


### ✗ - [0/15] - test_get_all_anagrams

- **Points**: 0 / 15


```
Original: canon == result_set
Expanded: { { "dog", "god" }, { "kins", "skin" } }
==
{  }
```


### ✗ - [0/10] - test_fib

- **Points**: 0 / 10


```
Original: fib(i) == fib_results[i]
Expanded: 0 == 1
```


### ✗ - [0/10] - test_memoized_fib

- **Points**: 0 / 10


```
Original: memoized_fib(28) == fib_results[28]
Expanded: 0 == 317811 (0x4d973)
```


### ✗ - [0/10] - test_homophones

- **Points**: 0 / 10


```
Original: (! d.homophones("scent", "DOG"))
Expanded: false
```


### ✗ - [0/10] - test_cartalk_puzzle

- **Points**: 0 / 10


```
Original: result.size() == 1
Expanded: 0 == 1
```


### ✗ - [0/15] - test_get_common_words_3

- **Points**: 0 / 15


```
Original: canon == resultSet
Expanded: { "dog", "pig" } == {  }
```


### ✗ - [0/15] - test_get_common_words_999

- **Points**: 0 / 15


```
Original: canon == resultSet2
Expanded: { "of", "the" } == {  }
```


---

This report was generated for **aidana2** using **335009f2b744d12f0f0db4bd99a2fb82a5cf17af** (from **May 6th 2020, 11:59:59 pm**)
