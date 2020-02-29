


## Score: 39/109 (35.78%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==28586== Memcheck, a memory error detector
==28586== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28586== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28586== Command: ./test -r xml "List::insertFront\ size"
==28586== 
==28586== 
==28586== HEAP SUMMARY:
==28586==     in use at exit: 0 bytes in 0 blocks
==28586==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==28586== 
==28586== All heap blocks were freed -- no leaks are possible
==28586== 
==28586== For counts of detected and suppressed errors, rerun with: -v
==28586== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==28589== Memcheck, a memory error detector
==28589== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28589== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28589== Command: ./test -r xml "List::insertBack\ size"
==28589== 
==28589== 
==28589== HEAP SUMMARY:
==28589==     in use at exit: 0 bytes in 0 blocks
==28589==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==28589== 
==28589== All heap blocks were freed -- no leaks are possible
==28589== 
==28589== For counts of detected and suppressed errors, rerun with: -v
==28589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==28593== Memcheck, a memory error detector
==28593== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28593== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28593== Command: ./test -r xml "List::insert\ contents"
==28593== 
==28593== 
==28593== HEAP SUMMARY:
==28593==     in use at exit: 0 bytes in 0 blocks
==28593==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==28593== 
==28593== All heap blocks were freed -- no leaks are possible
==28593== 
==28593== For counts of detected and suppressed errors, rerun with: -v
==28593== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==28596== Memcheck, a memory error detector
==28596== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28596== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28596== Command: ./test -r xml "List::triplerotate\ basic"
==28596== 
==28596== 
==28596== HEAP SUMMARY:
==28596==     in use at exit: 0 bytes in 0 blocks
==28596==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==28596== 
==28596== All heap blocks were freed -- no leaks are possible
==28596== 
==28596== For counts of detected and suppressed errors, rerun with: -v
==28596== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate basic" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="52">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - List::triplerotate simple

- **Points**: 0 / 10

```
==28622== Memcheck, a memory error detector
==28622== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28622== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28622== Command: ./test -r xml "List::triplerotate\ simple"
==28622== 
==28622== 
==28622== HEAP SUMMARY:
==28622==     in use at exit: 24 bytes in 1 blocks
==28622==   total heap usage: 2,357 allocs, 2,356 frees, 268,608 bytes allocated
==28622== 
==28622== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==28622==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==28622==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==28622==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:93)
==28622==    by 0x431B20: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==28622==    by 0x472B62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==28622==    by 0x4632B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==28622==    by 0x4631EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==28622==    by 0x45F746: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==28622==    by 0x45DD1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==28622==    by 0x4670B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==28622==    by 0x465D52: Catch::Session::runInternal() (catch.hpp:10149)
==28622==    by 0x465A1A: Catch::Session::run() (catch.hpp:10106)
==28622== 
==28622== LEAK SUMMARY:
==28622==    definitely lost: 24 bytes in 1 blocks
==28622==    indirectly lost: 0 bytes in 0 blocks
==28622==      possibly lost: 0 bytes in 0 blocks
==28622==    still reachable: 0 bytes in 0 blocks
==28622==         suppressed: 0 bytes in 0 blocks
==28622== 
==28622== For counts of detected and suppressed errors, rerun with: -v
==28622== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate simple" tags="[part=1][valgrind][weight=10]" filename="tests/tests_part1.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==28627== Memcheck, a memory error detector
==28627== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28627== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28627== Command: ./test -r xml "List::split\ simple"
==28627== 
==28627== 
==28627== HEAP SUMMARY:
==28627==     in use at exit: 0 bytes in 0 blocks
==28627==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==28627== 
==28627== All heap blocks were freed -- no leaks are possible
==28627== 
==28627== For counts of detected and suppressed errors, rerun with: -v
==28627== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==28634== Memcheck, a memory error detector
==28634== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28634== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28634== Command: ./test -r xml "List::_destroy\ empty\ list"
==28634== 
==28634== 
==28634== HEAP SUMMARY:
==28634==     in use at exit: 0 bytes in 0 blocks
==28634==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==28634== 
==28634== All heap blocks were freed -- no leaks are possible
==28634== 
==28634== For counts of detected and suppressed errors, rerun with: -v
==28634== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="159">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==28639== Memcheck, a memory error detector
==28639== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28639== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28639== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==28639== 
==28639== 
==28639== HEAP SUMMARY:
==28639==     in use at exit: 0 bytes in 0 blocks
==28639==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==28639== 
==28639== All heap blocks were freed -- no leaks are possible
==28639== 
==28639== For counts of detected and suppressed errors, rerun with: -v
==28639== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="170">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==28645== Memcheck, a memory error detector
==28645== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28645== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28645== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==28645== 
==28645== 
==28645== HEAP SUMMARY:
==28645==     in use at exit: 0 bytes in 0 blocks
==28645==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==28645== 
==28645== All heap blocks were freed -- no leaks are possible
==28645== 
==28645== For counts of detected and suppressed errors, rerun with: -v
==28645== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="178">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==28651== Memcheck, a memory error detector
==28651== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28651== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28651== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==28651== 
==28651== 
==28651== HEAP SUMMARY:
==28651==     in use at exit: 0 bytes in 0 blocks
==28651==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==28651== 
==28651== All heap blocks were freed -- no leaks are possible
==28651== 
==28651== For counts of detected and suppressed errors, rerun with: -v
==28651== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="187">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==28657== Memcheck, a memory error detector
==28657== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28657== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28657== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==28657== 
==28657== 
==28657== HEAP SUMMARY:
==28657==     in use at exit: 0 bytes in 0 blocks
==28657==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==28657== 
==28657== All heap blocks were freed -- no leaks are possible
==28657== 
==28657== For counts of detected and suppressed errors, rerun with: -v
==28657== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="197">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==28662== Memcheck, a memory error detector
==28662== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28662== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28662== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==28662== 
==28662== 
==28662== HEAP SUMMARY:
==28662==     in use at exit: 0 bytes in 0 blocks
==28662==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==28662== 
==28662== All heap blocks were freed -- no leaks are possible
==28662== 
==28662== For counts of detected and suppressed errors, rerun with: -v
==28662== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="207">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==28667== Memcheck, a memory error detector
==28667== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28667== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28667== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==28667== 
==28667== 
==28667== HEAP SUMMARY:
==28667==     in use at exit: 0 bytes in 0 blocks
==28667==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==28667== 
==28667== All heap blocks were freed -- no leaks are possible
==28667== 
==28667== For counts of detected and suppressed errors, rerun with: -v
==28667== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="219">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==28672== Memcheck, a memory error detector
==28672== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28672== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28672== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==28672== 
==28672== 
==28672== HEAP SUMMARY:
==28672==     in use at exit: 0 bytes in 0 blocks
==28672==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==28672== 
==28672== All heap blocks were freed -- no leaks are possible
==28672== 
==28672== For counts of detected and suppressed errors, rerun with: -v
==28672== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==28677== Memcheck, a memory error detector
==28677== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28677== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28677== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==28677== 
==28677== 
==28677== HEAP SUMMARY:
==28677==     in use at exit: 0 bytes in 0 blocks
==28677==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==28677== 
==28677== All heap blocks were freed -- no leaks are possible
==28677== 
==28677== For counts of detected and suppressed errors, rerun with: -v
==28677== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="246">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==28683== Memcheck, a memory error detector
==28683== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28683== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28683== Command: ./test -r xml "List::reverse\ edge\ cases"
==28683== 
==28683== 
==28683== HEAP SUMMARY:
==28683==     in use at exit: 0 bytes in 0 blocks
==28683==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==28683== 
==28683== All heap blocks were freed -- no leaks are possible
==28683== 
==28683== For counts of detected and suppressed errors, rerun with: -v
==28683== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==28691== Memcheck, a memory error detector
==28691== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28691== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28691== Command: ./test -r xml "List::insert\ contents\ #2"
==28691== 
==28691== 
==28691== HEAP SUMMARY:
==28691==     in use at exit: 0 bytes in 0 blocks
==28691==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==28691== 
==28691== All heap blocks were freed -- no leaks are possible
==28691== 
==28691== For counts of detected and suppressed errors, rerun with: -v
==28691== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aidana2** using **335009f2b744d12f0f0db4bd99a2fb82a5cf17af** (from **February 28th 2020, 11:59:59 pm**)
