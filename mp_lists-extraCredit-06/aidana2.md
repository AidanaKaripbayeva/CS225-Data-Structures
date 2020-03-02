


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
==25504== Memcheck, a memory error detector
==25504== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25504== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25504== Command: ./test -r xml "List::insertFront\ size"
==25504== 
==25504== 
==25504== HEAP SUMMARY:
==25504==     in use at exit: 0 bytes in 0 blocks
==25504==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==25504== 
==25504== All heap blocks were freed -- no leaks are possible
==25504== 
==25504== For counts of detected and suppressed errors, rerun with: -v
==25504== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25534== Memcheck, a memory error detector
==25534== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25534== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25534== Command: ./test -r xml "List::insertBack\ size"
==25534== 
==25534== 
==25534== HEAP SUMMARY:
==25534==     in use at exit: 0 bytes in 0 blocks
==25534==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==25534== 
==25534== All heap blocks were freed -- no leaks are possible
==25534== 
==25534== For counts of detected and suppressed errors, rerun with: -v
==25534== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25541== Memcheck, a memory error detector
==25541== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25541== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25541== Command: ./test -r xml "List::insert\ contents"
==25541== 
==25541== 
==25541== HEAP SUMMARY:
==25541==     in use at exit: 0 bytes in 0 blocks
==25541==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==25541== 
==25541== All heap blocks were freed -- no leaks are possible
==25541== 
==25541== For counts of detected and suppressed errors, rerun with: -v
==25541== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25552== Memcheck, a memory error detector
==25552== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25552== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25552== Command: ./test -r xml "List::triplerotate\ basic"
==25552== 
==25552== 
==25552== HEAP SUMMARY:
==25552==     in use at exit: 0 bytes in 0 blocks
==25552==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==25552== 
==25552== All heap blocks were freed -- no leaks are possible
==25552== 
==25552== For counts of detected and suppressed errors, rerun with: -v
==25552== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25564== Memcheck, a memory error detector
==25564== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25564== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25564== Command: ./test -r xml "List::triplerotate\ simple"
==25564== 
==25564== 
==25564== HEAP SUMMARY:
==25564==     in use at exit: 24 bytes in 1 blocks
==25564==   total heap usage: 2,142 allocs, 2,141 frees, 252,736 bytes allocated
==25564== 
==25564== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==25564==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==25564==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==25564==    by 0x428963: List<int>::insertBack(int const&) (List.hpp:93)
==25564==    by 0x4233C0: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==25564==    by 0x4625F2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==25564==    by 0x452D46: Catch::TestCase::invoke() const (catch.hpp:10793)
==25564==    by 0x452C7C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==25564==    by 0x44F1D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==25564==    by 0x44D7AE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==25564==    by 0x456B46: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==25564==    by 0x4557E2: Catch::Session::runInternal() (catch.hpp:10149)
==25564==    by 0x4554AA: Catch::Session::run() (catch.hpp:10106)
==25564== 
==25564== LEAK SUMMARY:
==25564==    definitely lost: 24 bytes in 1 blocks
==25564==    indirectly lost: 0 bytes in 0 blocks
==25564==      possibly lost: 0 bytes in 0 blocks
==25564==    still reachable: 0 bytes in 0 blocks
==25564==         suppressed: 0 bytes in 0 blocks
==25564== 
==25564== For counts of detected and suppressed errors, rerun with: -v
==25564== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==25587== Memcheck, a memory error detector
==25587== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25587== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25587== Command: ./test -r xml "List::split\ simple"
==25587== 
==25587== 
==25587== HEAP SUMMARY:
==25587==     in use at exit: 0 bytes in 0 blocks
==25587==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==25587== 
==25587== All heap blocks were freed -- no leaks are possible
==25587== 
==25587== For counts of detected and suppressed errors, rerun with: -v
==25587== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25596== Memcheck, a memory error detector
==25596== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25596== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25596== Command: ./test -r xml "List::_destroy\ empty\ list"
==25596== 
==25596== 
==25596== HEAP SUMMARY:
==25596==     in use at exit: 0 bytes in 0 blocks
==25596==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==25596== 
==25596== All heap blocks were freed -- no leaks are possible
==25596== 
==25596== For counts of detected and suppressed errors, rerun with: -v
==25596== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25605== Memcheck, a memory error detector
==25605== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25605== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25605== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==25605== 
==25605== 
==25605== HEAP SUMMARY:
==25605==     in use at exit: 0 bytes in 0 blocks
==25605==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==25605== 
==25605== All heap blocks were freed -- no leaks are possible
==25605== 
==25605== For counts of detected and suppressed errors, rerun with: -v
==25605== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25611== Memcheck, a memory error detector
==25611== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25611== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25611== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==25611== 
==25611== 
==25611== HEAP SUMMARY:
==25611==     in use at exit: 0 bytes in 0 blocks
==25611==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==25611== 
==25611== All heap blocks were freed -- no leaks are possible
==25611== 
==25611== For counts of detected and suppressed errors, rerun with: -v
==25611== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25616== Memcheck, a memory error detector
==25616== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25616== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25616== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==25616== 
==25616== 
==25616== HEAP SUMMARY:
==25616==     in use at exit: 0 bytes in 0 blocks
==25616==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==25616== 
==25616== All heap blocks were freed -- no leaks are possible
==25616== 
==25616== For counts of detected and suppressed errors, rerun with: -v
==25616== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25622== Memcheck, a memory error detector
==25622== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25622== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25622== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==25622== 
==25622== 
==25622== HEAP SUMMARY:
==25622==     in use at exit: 0 bytes in 0 blocks
==25622==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==25622== 
==25622== All heap blocks were freed -- no leaks are possible
==25622== 
==25622== For counts of detected and suppressed errors, rerun with: -v
==25622== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25627== Memcheck, a memory error detector
==25627== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25627== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25627== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==25627== 
==25627== 
==25627== HEAP SUMMARY:
==25627==     in use at exit: 0 bytes in 0 blocks
==25627==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==25627== 
==25627== All heap blocks were freed -- no leaks are possible
==25627== 
==25627== For counts of detected and suppressed errors, rerun with: -v
==25627== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25632== Memcheck, a memory error detector
==25632== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25632== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25632== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==25632== 
==25632== 
==25632== HEAP SUMMARY:
==25632==     in use at exit: 0 bytes in 0 blocks
==25632==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==25632== 
==25632== All heap blocks were freed -- no leaks are possible
==25632== 
==25632== For counts of detected and suppressed errors, rerun with: -v
==25632== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25637== Memcheck, a memory error detector
==25637== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25637== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25637== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==25637== 
==25637== 
==25637== HEAP SUMMARY:
==25637==     in use at exit: 0 bytes in 0 blocks
==25637==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==25637== 
==25637== All heap blocks were freed -- no leaks are possible
==25637== 
==25637== For counts of detected and suppressed errors, rerun with: -v
==25637== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25665== Memcheck, a memory error detector
==25665== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25665== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25665== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==25665== 
==25665== 
==25665== HEAP SUMMARY:
==25665==     in use at exit: 0 bytes in 0 blocks
==25665==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==25665== 
==25665== All heap blocks were freed -- no leaks are possible
==25665== 
==25665== For counts of detected and suppressed errors, rerun with: -v
==25665== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25684== Memcheck, a memory error detector
==25684== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25684== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25684== Command: ./test -r xml "List::insert\ contents\ #2"
==25684== 
==25684== 
==25684== HEAP SUMMARY:
==25684==     in use at exit: 0 bytes in 0 blocks
==25684==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==25684== 
==25684== All heap blocks were freed -- no leaks are possible
==25684== 
==25684== For counts of detected and suppressed errors, rerun with: -v
==25684== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
