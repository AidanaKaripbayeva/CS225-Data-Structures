


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
==19462== Memcheck, a memory error detector
==19462== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19462== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19462== Command: ./test -r xml "List::insertFront\ size"
==19462== 
==19462== 
==19462== HEAP SUMMARY:
==19462==     in use at exit: 0 bytes in 0 blocks
==19462==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==19462== 
==19462== All heap blocks were freed -- no leaks are possible
==19462== 
==19462== For counts of detected and suppressed errors, rerun with: -v
==19462== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19473== Memcheck, a memory error detector
==19473== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19473== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19473== Command: ./test -r xml "List::insertBack\ size"
==19473== 
==19473== 
==19473== HEAP SUMMARY:
==19473==     in use at exit: 0 bytes in 0 blocks
==19473==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==19473== 
==19473== All heap blocks were freed -- no leaks are possible
==19473== 
==19473== For counts of detected and suppressed errors, rerun with: -v
==19473== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19483== Memcheck, a memory error detector
==19483== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19483== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19483== Command: ./test -r xml "List::insert\ contents"
==19483== 
==19483== 
==19483== HEAP SUMMARY:
==19483==     in use at exit: 0 bytes in 0 blocks
==19483==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==19483== 
==19483== All heap blocks were freed -- no leaks are possible
==19483== 
==19483== For counts of detected and suppressed errors, rerun with: -v
==19483== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19500== Memcheck, a memory error detector
==19500== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19500== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19500== Command: ./test -r xml "List::triplerotate\ basic"
==19500== 
==19500== 
==19500== HEAP SUMMARY:
==19500==     in use at exit: 0 bytes in 0 blocks
==19500==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==19500== 
==19500== All heap blocks were freed -- no leaks are possible
==19500== 
==19500== For counts of detected and suppressed errors, rerun with: -v
==19500== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19508== Memcheck, a memory error detector
==19508== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19508== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19508== Command: ./test -r xml "List::triplerotate\ simple"
==19508== 
==19508== 
==19508== HEAP SUMMARY:
==19508==     in use at exit: 24 bytes in 1 blocks
==19508==   total heap usage: 2,357 allocs, 2,356 frees, 268,608 bytes allocated
==19508== 
==19508== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==19508==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==19508==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==19508==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:93)
==19508==    by 0x431B20: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==19508==    by 0x472B62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==19508==    by 0x4632B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==19508==    by 0x4631EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==19508==    by 0x45F746: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==19508==    by 0x45DD1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==19508==    by 0x4670B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==19508==    by 0x465D52: Catch::Session::runInternal() (catch.hpp:10149)
==19508==    by 0x465A1A: Catch::Session::run() (catch.hpp:10106)
==19508== 
==19508== LEAK SUMMARY:
==19508==    definitely lost: 24 bytes in 1 blocks
==19508==    indirectly lost: 0 bytes in 0 blocks
==19508==      possibly lost: 0 bytes in 0 blocks
==19508==    still reachable: 0 bytes in 0 blocks
==19508==         suppressed: 0 bytes in 0 blocks
==19508== 
==19508== For counts of detected and suppressed errors, rerun with: -v
==19508== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==19516== Memcheck, a memory error detector
==19516== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19516== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19516== Command: ./test -r xml "List::split\ simple"
==19516== 
==19516== 
==19516== HEAP SUMMARY:
==19516==     in use at exit: 0 bytes in 0 blocks
==19516==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==19516== 
==19516== All heap blocks were freed -- no leaks are possible
==19516== 
==19516== For counts of detected and suppressed errors, rerun with: -v
==19516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19555== Memcheck, a memory error detector
==19555== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19555== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19555== Command: ./test -r xml "List::_destroy\ empty\ list"
==19555== 
==19555== 
==19555== HEAP SUMMARY:
==19555==     in use at exit: 0 bytes in 0 blocks
==19555==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==19555== 
==19555== All heap blocks were freed -- no leaks are possible
==19555== 
==19555== For counts of detected and suppressed errors, rerun with: -v
==19555== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19562== Memcheck, a memory error detector
==19562== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19562== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19562== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==19562== 
==19562== 
==19562== HEAP SUMMARY:
==19562==     in use at exit: 0 bytes in 0 blocks
==19562==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==19562== 
==19562== All heap blocks were freed -- no leaks are possible
==19562== 
==19562== For counts of detected and suppressed errors, rerun with: -v
==19562== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19579== Memcheck, a memory error detector
==19579== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19579== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19579== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==19579== 
==19579== 
==19579== HEAP SUMMARY:
==19579==     in use at exit: 0 bytes in 0 blocks
==19579==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==19579== 
==19579== All heap blocks were freed -- no leaks are possible
==19579== 
==19579== For counts of detected and suppressed errors, rerun with: -v
==19579== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19587== Memcheck, a memory error detector
==19587== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19587== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19587== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==19587== 
==19587== 
==19587== HEAP SUMMARY:
==19587==     in use at exit: 0 bytes in 0 blocks
==19587==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==19587== 
==19587== All heap blocks were freed -- no leaks are possible
==19587== 
==19587== For counts of detected and suppressed errors, rerun with: -v
==19587== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19596== Memcheck, a memory error detector
==19596== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19596== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19596== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==19596== 
==19596== 
==19596== HEAP SUMMARY:
==19596==     in use at exit: 0 bytes in 0 blocks
==19596==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==19596== 
==19596== All heap blocks were freed -- no leaks are possible
==19596== 
==19596== For counts of detected and suppressed errors, rerun with: -v
==19596== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19649== Memcheck, a memory error detector
==19649== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19649== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19649== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==19649== 
==19649== 
==19649== HEAP SUMMARY:
==19649==     in use at exit: 0 bytes in 0 blocks
==19649==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==19649== 
==19649== All heap blocks were freed -- no leaks are possible
==19649== 
==19649== For counts of detected and suppressed errors, rerun with: -v
==19649== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19693== Memcheck, a memory error detector
==19693== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19693== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19693== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==19693== 
==19693== 
==19693== HEAP SUMMARY:
==19693==     in use at exit: 0 bytes in 0 blocks
==19693==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==19693== 
==19693== All heap blocks were freed -- no leaks are possible
==19693== 
==19693== For counts of detected and suppressed errors, rerun with: -v
==19693== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19701== Memcheck, a memory error detector
==19701== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19701== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19701== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==19701== 
==19701== 
==19701== HEAP SUMMARY:
==19701==     in use at exit: 0 bytes in 0 blocks
==19701==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==19701== 
==19701== All heap blocks were freed -- no leaks are possible
==19701== 
==19701== For counts of detected and suppressed errors, rerun with: -v
==19701== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19725== Memcheck, a memory error detector
==19725== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19725== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19725== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==19725== 
==19725== 
==19725== HEAP SUMMARY:
==19725==     in use at exit: 0 bytes in 0 blocks
==19725==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==19725== 
==19725== All heap blocks were freed -- no leaks are possible
==19725== 
==19725== For counts of detected and suppressed errors, rerun with: -v
==19725== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19735== Memcheck, a memory error detector
==19735== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19735== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19735== Command: ./test -r xml "List::reverse\ edge\ cases"
==19735== 
==19735== 
==19735== HEAP SUMMARY:
==19735==     in use at exit: 0 bytes in 0 blocks
==19735==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==19735== 
==19735== All heap blocks were freed -- no leaks are possible
==19735== 
==19735== For counts of detected and suppressed errors, rerun with: -v
==19735== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19754== Memcheck, a memory error detector
==19754== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19754== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19754== Command: ./test -r xml "List::insert\ contents\ #2"
==19754== 
==19754== 
==19754== HEAP SUMMARY:
==19754==     in use at exit: 0 bytes in 0 blocks
==19754==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==19754== 
==19754== All heap blocks were freed -- no leaks are possible
==19754== 
==19754== For counts of detected and suppressed errors, rerun with: -v
==19754== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **aidana2** using **335009f2b744d12f0f0db4bd99a2fb82a5cf17af** (from **February 29th 2020, 11:59:59 pm**)
