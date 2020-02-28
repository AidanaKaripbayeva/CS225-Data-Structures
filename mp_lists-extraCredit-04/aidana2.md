


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
==8949== Memcheck, a memory error detector
==8949== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8949== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8949== Command: ./test -r xml "List::insertFront\ size"
==8949== 
==8949== 
==8949== HEAP SUMMARY:
==8949==     in use at exit: 0 bytes in 0 blocks
==8949==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==8949== 
==8949== All heap blocks were freed -- no leaks are possible
==8949== 
==8949== For counts of detected and suppressed errors, rerun with: -v
==8949== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8976== Memcheck, a memory error detector
==8976== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8976== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8976== Command: ./test -r xml "List::insertBack\ size"
==8976== 
==8976== 
==8976== HEAP SUMMARY:
==8976==     in use at exit: 0 bytes in 0 blocks
==8976==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==8976== 
==8976== All heap blocks were freed -- no leaks are possible
==8976== 
==8976== For counts of detected and suppressed errors, rerun with: -v
==8976== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==8980== Memcheck, a memory error detector
==8980== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8980== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8980== Command: ./test -r xml "List::insert\ contents"
==8980== 
==8980== 
==8980== HEAP SUMMARY:
==8980==     in use at exit: 0 bytes in 0 blocks
==8980==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==8980== 
==8980== All heap blocks were freed -- no leaks are possible
==8980== 
==8980== For counts of detected and suppressed errors, rerun with: -v
==8980== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9041== Memcheck, a memory error detector
==9041== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9041== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9041== Command: ./test -r xml "List::triplerotate\ basic"
==9041== 
==9041== 
==9041== HEAP SUMMARY:
==9041==     in use at exit: 0 bytes in 0 blocks
==9041==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==9041== 
==9041== All heap blocks were freed -- no leaks are possible
==9041== 
==9041== For counts of detected and suppressed errors, rerun with: -v
==9041== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9106== Memcheck, a memory error detector
==9106== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9106== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9106== Command: ./test -r xml "List::triplerotate\ simple"
==9106== 
==9106== 
==9106== HEAP SUMMARY:
==9106==     in use at exit: 24 bytes in 1 blocks
==9106==   total heap usage: 2,142 allocs, 2,141 frees, 252,736 bytes allocated
==9106== 
==9106== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9106==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==9106==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==9106==    by 0x428963: List<int>::insertBack(int const&) (List.hpp:93)
==9106==    by 0x4233C0: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==9106==    by 0x4625F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==9106==    by 0x452D46: Catch::TestCase::invoke() const (catch.hpp:10793)
==9106==    by 0x452C7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==9106==    by 0x44F1D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==9106==    by 0x44D7AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==9106==    by 0x456B46: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==9106==    by 0x4557E2: Catch::Session::runInternal() (catch.hpp:10149)
==9106==    by 0x4554AA: Catch::Session::run() (catch.hpp:10106)
==9106== 
==9106== LEAK SUMMARY:
==9106==    definitely lost: 24 bytes in 1 blocks
==9106==    indirectly lost: 0 bytes in 0 blocks
==9106==      possibly lost: 0 bytes in 0 blocks
==9106==    still reachable: 0 bytes in 0 blocks
==9106==         suppressed: 0 bytes in 0 blocks
==9106== 
==9106== For counts of detected and suppressed errors, rerun with: -v
==9106== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==9127== Memcheck, a memory error detector
==9127== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9127== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9127== Command: ./test -r xml "List::split\ simple"
==9127== 
==9127== 
==9127== HEAP SUMMARY:
==9127==     in use at exit: 0 bytes in 0 blocks
==9127==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==9127== 
==9127== All heap blocks were freed -- no leaks are possible
==9127== 
==9127== For counts of detected and suppressed errors, rerun with: -v
==9127== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9171== Memcheck, a memory error detector
==9171== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9171== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9171== Command: ./test -r xml "List::_destroy\ empty\ list"
==9171== 
==9171== 
==9171== HEAP SUMMARY:
==9171==     in use at exit: 0 bytes in 0 blocks
==9171==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==9171== 
==9171== All heap blocks were freed -- no leaks are possible
==9171== 
==9171== For counts of detected and suppressed errors, rerun with: -v
==9171== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9176== Memcheck, a memory error detector
==9176== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9176== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9176== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==9176== 
==9176== 
==9176== HEAP SUMMARY:
==9176==     in use at exit: 0 bytes in 0 blocks
==9176==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==9176== 
==9176== All heap blocks were freed -- no leaks are possible
==9176== 
==9176== For counts of detected and suppressed errors, rerun with: -v
==9176== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9193== Memcheck, a memory error detector
==9193== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9193== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9193== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==9193== 
==9193== 
==9193== HEAP SUMMARY:
==9193==     in use at exit: 0 bytes in 0 blocks
==9193==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==9193== 
==9193== All heap blocks were freed -- no leaks are possible
==9193== 
==9193== For counts of detected and suppressed errors, rerun with: -v
==9193== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9202== Memcheck, a memory error detector
==9202== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9202== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9202== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==9202== 
==9202== 
==9202== HEAP SUMMARY:
==9202==     in use at exit: 0 bytes in 0 blocks
==9202==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==9202== 
==9202== All heap blocks were freed -- no leaks are possible
==9202== 
==9202== For counts of detected and suppressed errors, rerun with: -v
==9202== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9207== Memcheck, a memory error detector
==9207== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9207== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9207== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==9207== 
==9207== 
==9207== HEAP SUMMARY:
==9207==     in use at exit: 0 bytes in 0 blocks
==9207==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==9207== 
==9207== All heap blocks were freed -- no leaks are possible
==9207== 
==9207== For counts of detected and suppressed errors, rerun with: -v
==9207== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9213== Memcheck, a memory error detector
==9213== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9213== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9213== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==9213== 
==9213== 
==9213== HEAP SUMMARY:
==9213==     in use at exit: 0 bytes in 0 blocks
==9213==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==9213== 
==9213== All heap blocks were freed -- no leaks are possible
==9213== 
==9213== For counts of detected and suppressed errors, rerun with: -v
==9213== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9231== Memcheck, a memory error detector
==9231== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9231== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9231== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==9231== 
==9231== 
==9231== HEAP SUMMARY:
==9231==     in use at exit: 0 bytes in 0 blocks
==9231==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==9231== 
==9231== All heap blocks were freed -- no leaks are possible
==9231== 
==9231== For counts of detected and suppressed errors, rerun with: -v
==9231== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9237== Memcheck, a memory error detector
==9237== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9237== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9237== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==9237== 
==9237== 
==9237== HEAP SUMMARY:
==9237==     in use at exit: 0 bytes in 0 blocks
==9237==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==9237== 
==9237== All heap blocks were freed -- no leaks are possible
==9237== 
==9237== For counts of detected and suppressed errors, rerun with: -v
==9237== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9243== Memcheck, a memory error detector
==9243== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9243== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9243== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==9243== 
==9243== 
==9243== HEAP SUMMARY:
==9243==     in use at exit: 0 bytes in 0 blocks
==9243==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==9243== 
==9243== All heap blocks were freed -- no leaks are possible
==9243== 
==9243== For counts of detected and suppressed errors, rerun with: -v
==9243== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9263== Memcheck, a memory error detector
==9263== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9263== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9263== Command: ./test -r xml "List::insert\ contents\ #2"
==9263== 
==9263== 
==9263== HEAP SUMMARY:
==9263==     in use at exit: 0 bytes in 0 blocks
==9263==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==9263== 
==9263== All heap blocks were freed -- no leaks are possible
==9263== 
==9263== For counts of detected and suppressed errors, rerun with: -v
==9263== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **aidana2** using **335009f2b744d12f0f0db4bd99a2fb82a5cf17af** (from **February 27th 2020, 11:59:59 pm**)
