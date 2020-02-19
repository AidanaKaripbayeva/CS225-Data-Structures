


## Score: 70/90 (77.78%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor circle.cpp -o .objs/circle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor flower.cpp -o .objs/flower.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor line.cpp -o .objs/line.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor rectangle.cpp -o .objs/rectangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor shape.cpp -o .objs/shape.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor triangle.cpp -o .objs/triangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor truck.cpp -o .objs/truck.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor vector2.cpp -o .objs/vector2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/circle.o .objs/flower.o .objs/line.o .objs/rectangle.o .objs/shape.o .objs/triangle.o .objs/truck.o .objs/vector2.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_virtual_perim

- **Points**: 10 / 10





### ✓ - [10/10] - test_virtual_area

- **Points**: 10 / 10





### ✓ - [20/20] - test_destructor

- **Points**: 20 / 20

```
==41035== Memcheck, a memory error detector
==41035== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==41035== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==41035== Command: ./test -r xml "test_destructor"
==41035== 
==41035== 
==41035== HEAP SUMMARY:
==41035==     in use at exit: 0 bytes in 0 blocks
==41035==   total heap usage: 1,667 allocs, 1,667 frees, 216,576 bytes allocated
==41035== 
==41035== All heap blocks were freed -- no leaks are possible
==41035== 
==41035== For counts of detected and suppressed errors, rerun with: -v
==41035== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_destructor" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="92">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_constructor

- **Points**: 20 / 20





### ✓ - [10/10] - test_pure_virtual

- **Points**: 10 / 10

```
==41041== Memcheck, a memory error detector
==41041== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==41041== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==41041== Command: ./test -r xml "test_pure_virtual"
==41041== 
==41041== 
==41041== HEAP SUMMARY:
==41041==     in use at exit: 0 bytes in 0 blocks
==41041==   total heap usage: 1,728 allocs, 1,728 frees, 1,757,183 bytes allocated
==41041== 
==41041== All heap blocks were freed -- no leaks are possible
==41041== 
==41041== For counts of detected and suppressed errors, rerun with: -v
==41041== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_pure_virtual" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/20] - test_slicing

- **Points**: 0 / 20

```
==41047== Memcheck, a memory error detector
==41047== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==41047== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==41047== Command: ./test -r xml "test_slicing"
==41047== 
==41047== 
==41047== HEAP SUMMARY:
==41047==     in use at exit: 264 bytes in 7 blocks
==41047==   total heap usage: 1,794 allocs, 1,787 frees, 1,759,556 bytes allocated
==41047== 
==41047== 64 bytes in 1 blocks are definitely lost in loss record 5 of 7
==41047==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==41047==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==41047==    by 0x407A25: Flower::Flower(Vector2 const&) (flower.cpp:36)
==41047==    by 0x42BD77: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==41047==    by 0x460CB2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==41047==    by 0x451406: Catch::TestCase::invoke() const (catch.hpp:10793)
==41047==    by 0x45133C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==41047==    by 0x44D896: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==41047==    by 0x44BE6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==41047==    by 0x455206: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==41047==    by 0x453EA2: Catch::Session::runInternal() (catch.hpp:10149)
==41047==    by 0x453B6A: Catch::Session::run() (catch.hpp:10106)
==41047== 
==41047== 64 bytes in 1 blocks are definitely lost in loss record 6 of 7
==41047==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==41047==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==41047==    by 0x407A84: Flower::Flower(Vector2 const&) (flower.cpp:38)
==41047==    by 0x42BD77: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==41047==    by 0x460CB2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==41047==    by 0x451406: Catch::TestCase::invoke() const (catch.hpp:10793)
==41047==    by 0x45133C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==41047==    by 0x44D896: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==41047==    by 0x44BE6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==41047==    by 0x455206: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==41047==    by 0x453EA2: Catch::Session::runInternal() (catch.hpp:10149)
==41047==    by 0x453B6A: Catch::Session::run() (catch.hpp:10106)
==41047== 
==41047== 136 (64 direct, 72 indirect) bytes in 1 blocks are definitely lost in loss record 7 of 7
==41047==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==41047==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==41047==    by 0x407BA9: Flower::Flower(Vector2 const&) (flower.cpp:43)
==41047==    by 0x42BD77: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==41047==    by 0x460CB2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==41047==    by 0x451406: Catch::TestCase::invoke() const (catch.hpp:10793)
==41047==    by 0x45133C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==41047==    by 0x44D896: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==41047==    by 0x44BE6E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==41047==    by 0x455206: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==41047==    by 0x453EA2: Catch::Session::runInternal() (catch.hpp:10149)
==41047==    by 0x453B6A: Catch::Session::run() (catch.hpp:10106)
==41047== 
==41047== LEAK SUMMARY:
==41047==    definitely lost: 192 bytes in 3 blocks
==41047==    indirectly lost: 72 bytes in 4 blocks
==41047==      possibly lost: 0 bytes in 0 blocks
==41047==    still reachable: 0 bytes in 0 blocks
==41047==         suppressed: 0 bytes in 0 blocks
==41047== 
==41047== For counts of detected and suppressed errors, rerun with: -v
==41047== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_slicing" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="125">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aidana2** using **5291551ed8316c96a49fc9d69f8e6e6123eb8ae2** (from **February 16th 2020, 11:59:59 pm**)
