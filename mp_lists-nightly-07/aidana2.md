


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
==12191== Memcheck, a memory error detector
==12191== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12191== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12191== Command: ./test -r xml "List::insertFront\ size"
==12191== 
==12191== 
==12191== HEAP SUMMARY:
==12191==     in use at exit: 0 bytes in 0 blocks
==12191==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==12191== 
==12191== All heap blocks were freed -- no leaks are possible
==12191== 
==12191== For counts of detected and suppressed errors, rerun with: -v
==12191== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12194== Memcheck, a memory error detector
==12194== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12194== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12194== Command: ./test -r xml "List::insertBack\ size"
==12194== 
==12194== 
==12194== HEAP SUMMARY:
==12194==     in use at exit: 0 bytes in 0 blocks
==12194==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==12194== 
==12194== All heap blocks were freed -- no leaks are possible
==12194== 
==12194== For counts of detected and suppressed errors, rerun with: -v
==12194== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12197== Memcheck, a memory error detector
==12197== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12197== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12197== Command: ./test -r xml "List::insert\ contents"
==12197== 
==12197== 
==12197== HEAP SUMMARY:
==12197==     in use at exit: 0 bytes in 0 blocks
==12197==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==12197== 
==12197== All heap blocks were freed -- no leaks are possible
==12197== 
==12197== For counts of detected and suppressed errors, rerun with: -v
==12197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12200== Memcheck, a memory error detector
==12200== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12200== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12200== Command: ./test -r xml "List::triplerotate\ basic"
==12200== 
==12200== 
==12200== HEAP SUMMARY:
==12200==     in use at exit: 0 bytes in 0 blocks
==12200==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==12200== 
==12200== All heap blocks were freed -- no leaks are possible
==12200== 
==12200== For counts of detected and suppressed errors, rerun with: -v
==12200== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12203== Memcheck, a memory error detector
==12203== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12203== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12203== Command: ./test -r xml "List::triplerotate\ simple"
==12203== 
==12203== 
==12203== HEAP SUMMARY:
==12203==     in use at exit: 24 bytes in 1 blocks
==12203==   total heap usage: 2,357 allocs, 2,356 frees, 268,608 bytes allocated
==12203== 
==12203== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==12203==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==12203==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==12203==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:93)
==12203==    by 0x431B20: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==12203==    by 0x472B62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==12203==    by 0x4632B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==12203==    by 0x4631EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==12203==    by 0x45F746: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==12203==    by 0x45DD1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==12203==    by 0x4670B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==12203==    by 0x465D52: Catch::Session::runInternal() (catch.hpp:10149)
==12203==    by 0x465A1A: Catch::Session::run() (catch.hpp:10106)
==12203== 
==12203== LEAK SUMMARY:
==12203==    definitely lost: 24 bytes in 1 blocks
==12203==    indirectly lost: 0 bytes in 0 blocks
==12203==      possibly lost: 0 bytes in 0 blocks
==12203==    still reachable: 0 bytes in 0 blocks
==12203==         suppressed: 0 bytes in 0 blocks
==12203== 
==12203== For counts of detected and suppressed errors, rerun with: -v
==12203== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==12231== Memcheck, a memory error detector
==12231== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12231== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12231== Command: ./test -r xml "List::split\ simple"
==12231== 
==12231== 
==12231== HEAP SUMMARY:
==12231==     in use at exit: 0 bytes in 0 blocks
==12231==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==12231== 
==12231== All heap blocks were freed -- no leaks are possible
==12231== 
==12231== For counts of detected and suppressed errors, rerun with: -v
==12231== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12239== Memcheck, a memory error detector
==12239== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12239== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12239== Command: ./test -r xml "List::_destroy\ empty\ list"
==12239== 
==12239== 
==12239== HEAP SUMMARY:
==12239==     in use at exit: 0 bytes in 0 blocks
==12239==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==12239== 
==12239== All heap blocks were freed -- no leaks are possible
==12239== 
==12239== For counts of detected and suppressed errors, rerun with: -v
==12239== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12245== Memcheck, a memory error detector
==12245== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12245== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12245== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==12245== 
==12245== 
==12245== HEAP SUMMARY:
==12245==     in use at exit: 0 bytes in 0 blocks
==12245==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==12245== 
==12245== All heap blocks were freed -- no leaks are possible
==12245== 
==12245== For counts of detected and suppressed errors, rerun with: -v
==12245== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12250== Memcheck, a memory error detector
==12250== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12250== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12250== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==12250== 
==12250== 
==12250== HEAP SUMMARY:
==12250==     in use at exit: 0 bytes in 0 blocks
==12250==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==12250== 
==12250== All heap blocks were freed -- no leaks are possible
==12250== 
==12250== For counts of detected and suppressed errors, rerun with: -v
==12250== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12256== Memcheck, a memory error detector
==12256== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12256== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12256== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==12256== 
==12256== 
==12256== HEAP SUMMARY:
==12256==     in use at exit: 0 bytes in 0 blocks
==12256==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==12256== 
==12256== All heap blocks were freed -- no leaks are possible
==12256== 
==12256== For counts of detected and suppressed errors, rerun with: -v
==12256== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12261== Memcheck, a memory error detector
==12261== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12261== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12261== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==12261== 
==12261== 
==12261== HEAP SUMMARY:
==12261==     in use at exit: 0 bytes in 0 blocks
==12261==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==12261== 
==12261== All heap blocks were freed -- no leaks are possible
==12261== 
==12261== For counts of detected and suppressed errors, rerun with: -v
==12261== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12266== Memcheck, a memory error detector
==12266== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12266== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12266== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==12266== 
==12266== 
==12266== HEAP SUMMARY:
==12266==     in use at exit: 0 bytes in 0 blocks
==12266==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==12266== 
==12266== All heap blocks were freed -- no leaks are possible
==12266== 
==12266== For counts of detected and suppressed errors, rerun with: -v
==12266== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12271== Memcheck, a memory error detector
==12271== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12271== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12271== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==12271== 
==12271== 
==12271== HEAP SUMMARY:
==12271==     in use at exit: 0 bytes in 0 blocks
==12271==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==12271== 
==12271== All heap blocks were freed -- no leaks are possible
==12271== 
==12271== For counts of detected and suppressed errors, rerun with: -v
==12271== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12276== Memcheck, a memory error detector
==12276== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12276== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12276== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==12276== 
==12276== 
==12276== HEAP SUMMARY:
==12276==     in use at exit: 0 bytes in 0 blocks
==12276==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==12276== 
==12276== All heap blocks were freed -- no leaks are possible
==12276== 
==12276== For counts of detected and suppressed errors, rerun with: -v
==12276== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12281== Memcheck, a memory error detector
==12281== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12281== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12281== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==12281== 
==12281== 
==12281== HEAP SUMMARY:
==12281==     in use at exit: 0 bytes in 0 blocks
==12281==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==12281== 
==12281== All heap blocks were freed -- no leaks are possible
==12281== 
==12281== For counts of detected and suppressed errors, rerun with: -v
==12281== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12287== Memcheck, a memory error detector
==12287== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12287== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12287== Command: ./test -r xml "List::reverse\ edge\ cases"
==12287== 
==12287== 
==12287== HEAP SUMMARY:
==12287==     in use at exit: 0 bytes in 0 blocks
==12287==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==12287== 
==12287== All heap blocks were freed -- no leaks are possible
==12287== 
==12287== For counts of detected and suppressed errors, rerun with: -v
==12287== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12295== Memcheck, a memory error detector
==12295== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12295== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12295== Command: ./test -r xml "List::insert\ contents\ #2"
==12295== 
==12295== 
==12295== HEAP SUMMARY:
==12295==     in use at exit: 0 bytes in 0 blocks
==12295==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==12295== 
==12295== All heap blocks were freed -- no leaks are possible
==12295== 
==12295== For counts of detected and suppressed errors, rerun with: -v
==12295== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
