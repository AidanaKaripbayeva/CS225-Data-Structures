


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
==9634== Memcheck, a memory error detector
==9634== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9634== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9634== Command: ./test -r xml "List::insertFront\ size"
==9634== 
==9634== 
==9634== HEAP SUMMARY:
==9634==     in use at exit: 0 bytes in 0 blocks
==9634==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==9634== 
==9634== All heap blocks were freed -- no leaks are possible
==9634== 
==9634== For counts of detected and suppressed errors, rerun with: -v
==9634== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9640== Memcheck, a memory error detector
==9640== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9640== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9640== Command: ./test -r xml "List::insertBack\ size"
==9640== 
==9640== 
==9640== HEAP SUMMARY:
==9640==     in use at exit: 0 bytes in 0 blocks
==9640==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==9640== 
==9640== All heap blocks were freed -- no leaks are possible
==9640== 
==9640== For counts of detected and suppressed errors, rerun with: -v
==9640== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9645== Memcheck, a memory error detector
==9645== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9645== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9645== Command: ./test -r xml "List::insert\ contents"
==9645== 
==9645== 
==9645== HEAP SUMMARY:
==9645==     in use at exit: 0 bytes in 0 blocks
==9645==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==9645== 
==9645== All heap blocks were freed -- no leaks are possible
==9645== 
==9645== For counts of detected and suppressed errors, rerun with: -v
==9645== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9648== Memcheck, a memory error detector
==9648== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9648== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9648== Command: ./test -r xml "List::triplerotate\ basic"
==9648== 
==9648== 
==9648== HEAP SUMMARY:
==9648==     in use at exit: 0 bytes in 0 blocks
==9648==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==9648== 
==9648== All heap blocks were freed -- no leaks are possible
==9648== 
==9648== For counts of detected and suppressed errors, rerun with: -v
==9648== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9652== Memcheck, a memory error detector
==9652== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9652== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9652== Command: ./test -r xml "List::triplerotate\ simple"
==9652== 
==9652== 
==9652== HEAP SUMMARY:
==9652==     in use at exit: 24 bytes in 1 blocks
==9652==   total heap usage: 2,142 allocs, 2,141 frees, 252,736 bytes allocated
==9652== 
==9652== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9652==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==9652==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==9652==    by 0x428963: List<int>::insertBack(int const&) (List.hpp:93)
==9652==    by 0x4233C0: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==9652==    by 0x4625F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9652==    by 0x452D46: Catch::TestCase::invoke() const (catch.hpp:10793)
==9652==    by 0x452C7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9652==    by 0x44F1D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9652==    by 0x44D7AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9652==    by 0x456B46: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9652==    by 0x4557E2: Catch::Session::runInternal() (catch.hpp:10149)
==9652==    by 0x4554AA: Catch::Session::run() (catch.hpp:10106)
==9652== 
==9652== LEAK SUMMARY:
==9652==    definitely lost: 24 bytes in 1 blocks
==9652==    indirectly lost: 0 bytes in 0 blocks
==9652==      possibly lost: 0 bytes in 0 blocks
==9652==    still reachable: 0 bytes in 0 blocks
==9652==         suppressed: 0 bytes in 0 blocks
==9652== 
==9652== For counts of detected and suppressed errors, rerun with: -v
==9652== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9656== Memcheck, a memory error detector
==9656== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9656== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9656== Command: ./test -r xml "List::split\ simple"
==9656== 
==9656== 
==9656== HEAP SUMMARY:
==9656==     in use at exit: 0 bytes in 0 blocks
==9656==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==9656== 
==9656== All heap blocks were freed -- no leaks are possible
==9656== 
==9656== For counts of detected and suppressed errors, rerun with: -v
==9656== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9660== Memcheck, a memory error detector
==9660== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9660== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9660== Command: ./test -r xml "List::_destroy\ empty\ list"
==9660== 
==9660== 
==9660== HEAP SUMMARY:
==9660==     in use at exit: 0 bytes in 0 blocks
==9660==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==9660== 
==9660== All heap blocks were freed -- no leaks are possible
==9660== 
==9660== For counts of detected and suppressed errors, rerun with: -v
==9660== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9663== Memcheck, a memory error detector
==9663== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9663== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9663== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==9663== 
==9663== 
==9663== HEAP SUMMARY:
==9663==     in use at exit: 0 bytes in 0 blocks
==9663==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==9663== 
==9663== All heap blocks were freed -- no leaks are possible
==9663== 
==9663== For counts of detected and suppressed errors, rerun with: -v
==9663== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9667== Memcheck, a memory error detector
==9667== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9667== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9667== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==9667== 
==9667== 
==9667== HEAP SUMMARY:
==9667==     in use at exit: 0 bytes in 0 blocks
==9667==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==9667== 
==9667== All heap blocks were freed -- no leaks are possible
==9667== 
==9667== For counts of detected and suppressed errors, rerun with: -v
==9667== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9705== Memcheck, a memory error detector
==9705== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9705== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9705== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==9705== 
==9705== 
==9705== HEAP SUMMARY:
==9705==     in use at exit: 0 bytes in 0 blocks
==9705==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==9705== 
==9705== All heap blocks were freed -- no leaks are possible
==9705== 
==9705== For counts of detected and suppressed errors, rerun with: -v
==9705== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9710== Memcheck, a memory error detector
==9710== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9710== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9710== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==9710== 
==9710== 
==9710== HEAP SUMMARY:
==9710==     in use at exit: 0 bytes in 0 blocks
==9710==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==9710== 
==9710== All heap blocks were freed -- no leaks are possible
==9710== 
==9710== For counts of detected and suppressed errors, rerun with: -v
==9710== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9718== Memcheck, a memory error detector
==9718== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9718== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9718== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==9718== 
==9718== 
==9718== HEAP SUMMARY:
==9718==     in use at exit: 0 bytes in 0 blocks
==9718==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==9718== 
==9718== All heap blocks were freed -- no leaks are possible
==9718== 
==9718== For counts of detected and suppressed errors, rerun with: -v
==9718== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9723== Memcheck, a memory error detector
==9723== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9723== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9723== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==9723== 
==9723== 
==9723== HEAP SUMMARY:
==9723==     in use at exit: 0 bytes in 0 blocks
==9723==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==9723== 
==9723== All heap blocks were freed -- no leaks are possible
==9723== 
==9723== For counts of detected and suppressed errors, rerun with: -v
==9723== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9729== Memcheck, a memory error detector
==9729== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9729== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9729== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==9729== 
==9729== 
==9729== HEAP SUMMARY:
==9729==     in use at exit: 0 bytes in 0 blocks
==9729==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==9729== 
==9729== All heap blocks were freed -- no leaks are possible
==9729== 
==9729== For counts of detected and suppressed errors, rerun with: -v
==9729== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9734== Memcheck, a memory error detector
==9734== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9734== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9734== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==9734== 
==9734== 
==9734== HEAP SUMMARY:
==9734==     in use at exit: 0 bytes in 0 blocks
==9734==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==9734== 
==9734== All heap blocks were freed -- no leaks are possible
==9734== 
==9734== For counts of detected and suppressed errors, rerun with: -v
==9734== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9739== Memcheck, a memory error detector
==9739== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9739== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9739== Command: ./test -r xml "List::insert\ contents\ #2"
==9739== 
==9739== 
==9739== HEAP SUMMARY:
==9739==     in use at exit: 0 bytes in 0 blocks
==9739==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==9739== 
==9739== All heap blocks were freed -- no leaks are possible
==9739== 
==9739== For counts of detected and suppressed errors, rerun with: -v
==9739== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **aidana2** using **335009f2b744d12f0f0db4bd99a2fb82a5cf17af** (from **March 1st 2020, 11:59:59 pm**)
