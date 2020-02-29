


## Score: 37/52 (71.15%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==39152== Memcheck, a memory error detector
==39152== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39152== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39152== Command: ./test -r xml "List::insertFront\ size"
==39152== 
==39152== 
==39152== HEAP SUMMARY:
==39152==     in use at exit: 0 bytes in 0 blocks
==39152==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==39152== 
==39152== All heap blocks were freed -- no leaks are possible
==39152== 
==39152== For counts of detected and suppressed errors, rerun with: -v
==39152== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39157== Memcheck, a memory error detector
==39157== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39157== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39157== Command: ./test -r xml "List::insertBack\ size"
==39157== 
==39157== 
==39157== HEAP SUMMARY:
==39157==     in use at exit: 0 bytes in 0 blocks
==39157==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==39157== 
==39157== All heap blocks were freed -- no leaks are possible
==39157== 
==39157== For counts of detected and suppressed errors, rerun with: -v
==39157== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39160== Memcheck, a memory error detector
==39160== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39160== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39160== Command: ./test -r xml "List::insert\ contents"
==39160== 
==39160== 
==39160== HEAP SUMMARY:
==39160==     in use at exit: 0 bytes in 0 blocks
==39160==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==39160== 
==39160== All heap blocks were freed -- no leaks are possible
==39160== 
==39160== For counts of detected and suppressed errors, rerun with: -v
==39160== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39163== Memcheck, a memory error detector
==39163== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39163== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39163== Command: ./test -r xml "List::triplerotate\ basic"
==39163== 
==39163== 
==39163== HEAP SUMMARY:
==39163==     in use at exit: 0 bytes in 0 blocks
==39163==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==39163== 
==39163== All heap blocks were freed -- no leaks are possible
==39163== 
==39163== For counts of detected and suppressed errors, rerun with: -v
==39163== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39167== Memcheck, a memory error detector
==39167== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39167== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39167== Command: ./test -r xml "List::triplerotate\ simple"
==39167== 
==39167== 
==39167== HEAP SUMMARY:
==39167==     in use at exit: 24 bytes in 1 blocks
==39167==   total heap usage: 2,142 allocs, 2,141 frees, 252,736 bytes allocated
==39167== 
==39167== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==39167==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==39167==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==39167==    by 0x428963: List<int>::insertBack(int const&) (List.hpp:93)
==39167==    by 0x4233C0: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==39167==    by 0x4625F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==39167==    by 0x452D46: Catch::TestCase::invoke() const (catch.hpp:10793)
==39167==    by 0x452C7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==39167==    by 0x44F1D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==39167==    by 0x44D7AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==39167==    by 0x456B46: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==39167==    by 0x4557E2: Catch::Session::runInternal() (catch.hpp:10149)
==39167==    by 0x4554AA: Catch::Session::run() (catch.hpp:10106)
==39167== 
==39167== LEAK SUMMARY:
==39167==    definitely lost: 24 bytes in 1 blocks
==39167==    indirectly lost: 0 bytes in 0 blocks
==39167==      possibly lost: 0 bytes in 0 blocks
==39167==    still reachable: 0 bytes in 0 blocks
==39167==         suppressed: 0 bytes in 0 blocks
==39167== 
==39167== For counts of detected and suppressed errors, rerun with: -v
==39167== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==39170== Memcheck, a memory error detector
==39170== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39170== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39170== Command: ./test -r xml "List::split\ simple"
==39170== 
==39170== 
==39170== HEAP SUMMARY:
==39170==     in use at exit: 0 bytes in 0 blocks
==39170==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==39170== 
==39170== All heap blocks were freed -- no leaks are possible
==39170== 
==39170== For counts of detected and suppressed errors, rerun with: -v
==39170== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39174== Memcheck, a memory error detector
==39174== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39174== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39174== Command: ./test -r xml "List::_destroy\ empty\ list"
==39174== 
==39174== 
==39174== HEAP SUMMARY:
==39174==     in use at exit: 0 bytes in 0 blocks
==39174==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==39174== 
==39174== All heap blocks were freed -- no leaks are possible
==39174== 
==39174== For counts of detected and suppressed errors, rerun with: -v
==39174== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39178== Memcheck, a memory error detector
==39178== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39178== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39178== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==39178== 
==39178== 
==39178== HEAP SUMMARY:
==39178==     in use at exit: 0 bytes in 0 blocks
==39178==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==39178== 
==39178== All heap blocks were freed -- no leaks are possible
==39178== 
==39178== For counts of detected and suppressed errors, rerun with: -v
==39178== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39216== Memcheck, a memory error detector
==39216== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39216== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39216== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==39216== 
==39216== 
==39216== HEAP SUMMARY:
==39216==     in use at exit: 0 bytes in 0 blocks
==39216==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==39216== 
==39216== All heap blocks were freed -- no leaks are possible
==39216== 
==39216== For counts of detected and suppressed errors, rerun with: -v
==39216== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39220== Memcheck, a memory error detector
==39220== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39220== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39220== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==39220== 
==39220== 
==39220== HEAP SUMMARY:
==39220==     in use at exit: 0 bytes in 0 blocks
==39220==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==39220== 
==39220== All heap blocks were freed -- no leaks are possible
==39220== 
==39220== For counts of detected and suppressed errors, rerun with: -v
==39220== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39225== Memcheck, a memory error detector
==39225== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39225== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39225== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==39225== 
==39225== 
==39225== HEAP SUMMARY:
==39225==     in use at exit: 0 bytes in 0 blocks
==39225==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==39225== 
==39225== All heap blocks were freed -- no leaks are possible
==39225== 
==39225== For counts of detected and suppressed errors, rerun with: -v
==39225== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39232== Memcheck, a memory error detector
==39232== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39232== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39232== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==39232== 
==39232== 
==39232== HEAP SUMMARY:
==39232==     in use at exit: 0 bytes in 0 blocks
==39232==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==39232== 
==39232== All heap blocks were freed -- no leaks are possible
==39232== 
==39232== For counts of detected and suppressed errors, rerun with: -v
==39232== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39237== Memcheck, a memory error detector
==39237== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39237== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39237== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==39237== 
==39237== 
==39237== HEAP SUMMARY:
==39237==     in use at exit: 0 bytes in 0 blocks
==39237==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==39237== 
==39237== All heap blocks were freed -- no leaks are possible
==39237== 
==39237== For counts of detected and suppressed errors, rerun with: -v
==39237== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39242== Memcheck, a memory error detector
==39242== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39242== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39242== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==39242== 
==39242== 
==39242== HEAP SUMMARY:
==39242==     in use at exit: 0 bytes in 0 blocks
==39242==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==39242== 
==39242== All heap blocks were freed -- no leaks are possible
==39242== 
==39242== For counts of detected and suppressed errors, rerun with: -v
==39242== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39247== Memcheck, a memory error detector
==39247== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39247== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39247== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==39247== 
==39247== 
==39247== HEAP SUMMARY:
==39247==     in use at exit: 0 bytes in 0 blocks
==39247==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==39247== 
==39247== All heap blocks were freed -- no leaks are possible
==39247== 
==39247== For counts of detected and suppressed errors, rerun with: -v
==39247== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==39252== Memcheck, a memory error detector
==39252== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39252== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39252== Command: ./test -r xml "List::insert\ contents\ #2"
==39252== 
==39252== 
==39252== HEAP SUMMARY:
==39252==     in use at exit: 0 bytes in 0 blocks
==39252==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==39252== 
==39252== All heap blocks were freed -- no leaks are possible
==39252== 
==39252== For counts of detected and suppressed errors, rerun with: -v
==39252== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
