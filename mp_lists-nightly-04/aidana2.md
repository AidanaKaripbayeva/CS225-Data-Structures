


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
==4626== Memcheck, a memory error detector
==4626== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4626== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4626== Command: ./test -r xml "List::insertFront\ size"
==4626== 
==4626== 
==4626== HEAP SUMMARY:
==4626==     in use at exit: 0 bytes in 0 blocks
==4626==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==4626== 
==4626== All heap blocks were freed -- no leaks are possible
==4626== 
==4626== For counts of detected and suppressed errors, rerun with: -v
==4626== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4635== Memcheck, a memory error detector
==4635== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4635== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4635== Command: ./test -r xml "List::insertBack\ size"
==4635== 
==4635== 
==4635== HEAP SUMMARY:
==4635==     in use at exit: 0 bytes in 0 blocks
==4635==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==4635== 
==4635== All heap blocks were freed -- no leaks are possible
==4635== 
==4635== For counts of detected and suppressed errors, rerun with: -v
==4635== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4640== Memcheck, a memory error detector
==4640== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4640== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4640== Command: ./test -r xml "List::insert\ contents"
==4640== 
==4640== 
==4640== HEAP SUMMARY:
==4640==     in use at exit: 0 bytes in 0 blocks
==4640==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==4640== 
==4640== All heap blocks were freed -- no leaks are possible
==4640== 
==4640== For counts of detected and suppressed errors, rerun with: -v
==4640== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4646== Memcheck, a memory error detector
==4646== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4646== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4646== Command: ./test -r xml "List::triplerotate\ basic"
==4646== 
==4646== 
==4646== HEAP SUMMARY:
==4646==     in use at exit: 0 bytes in 0 blocks
==4646==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==4646== 
==4646== All heap blocks were freed -- no leaks are possible
==4646== 
==4646== For counts of detected and suppressed errors, rerun with: -v
==4646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4672== Memcheck, a memory error detector
==4672== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4672== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4672== Command: ./test -r xml "List::triplerotate\ simple"
==4672== 
==4672== 
==4672== HEAP SUMMARY:
==4672==     in use at exit: 24 bytes in 1 blocks
==4672==   total heap usage: 2,357 allocs, 2,356 frees, 268,608 bytes allocated
==4672== 
==4672== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==4672==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==4672==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==4672==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:93)
==4672==    by 0x431B20: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==4672==    by 0x472B62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==4672==    by 0x4632B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==4672==    by 0x4631EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==4672==    by 0x45F746: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==4672==    by 0x45DD1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==4672==    by 0x4670B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==4672==    by 0x465D52: Catch::Session::runInternal() (catch.hpp:10149)
==4672==    by 0x465A1A: Catch::Session::run() (catch.hpp:10106)
==4672== 
==4672== LEAK SUMMARY:
==4672==    definitely lost: 24 bytes in 1 blocks
==4672==    indirectly lost: 0 bytes in 0 blocks
==4672==      possibly lost: 0 bytes in 0 blocks
==4672==    still reachable: 0 bytes in 0 blocks
==4672==         suppressed: 0 bytes in 0 blocks
==4672== 
==4672== For counts of detected and suppressed errors, rerun with: -v
==4672== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==4677== Memcheck, a memory error detector
==4677== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4677== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4677== Command: ./test -r xml "List::split\ simple"
==4677== 
==4677== 
==4677== HEAP SUMMARY:
==4677==     in use at exit: 0 bytes in 0 blocks
==4677==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==4677== 
==4677== All heap blocks were freed -- no leaks are possible
==4677== 
==4677== For counts of detected and suppressed errors, rerun with: -v
==4677== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4690== Memcheck, a memory error detector
==4690== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4690== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4690== Command: ./test -r xml "List::_destroy\ empty\ list"
==4690== 
==4690== 
==4690== HEAP SUMMARY:
==4690==     in use at exit: 0 bytes in 0 blocks
==4690==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==4690== 
==4690== All heap blocks were freed -- no leaks are possible
==4690== 
==4690== For counts of detected and suppressed errors, rerun with: -v
==4690== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4710== Memcheck, a memory error detector
==4710== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4710== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4710== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==4710== 
==4710== 
==4710== HEAP SUMMARY:
==4710==     in use at exit: 0 bytes in 0 blocks
==4710==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==4710== 
==4710== All heap blocks were freed -- no leaks are possible
==4710== 
==4710== For counts of detected and suppressed errors, rerun with: -v
==4710== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4715== Memcheck, a memory error detector
==4715== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4715== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4715== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==4715== 
==4715== 
==4715== HEAP SUMMARY:
==4715==     in use at exit: 0 bytes in 0 blocks
==4715==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==4715== 
==4715== All heap blocks were freed -- no leaks are possible
==4715== 
==4715== For counts of detected and suppressed errors, rerun with: -v
==4715== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4721== Memcheck, a memory error detector
==4721== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4721== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4721== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==4721== 
==4721== 
==4721== HEAP SUMMARY:
==4721==     in use at exit: 0 bytes in 0 blocks
==4721==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==4721== 
==4721== All heap blocks were freed -- no leaks are possible
==4721== 
==4721== For counts of detected and suppressed errors, rerun with: -v
==4721== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4740== Memcheck, a memory error detector
==4740== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4740== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4740== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==4740== 
==4740== 
==4740== HEAP SUMMARY:
==4740==     in use at exit: 0 bytes in 0 blocks
==4740==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==4740== 
==4740== All heap blocks were freed -- no leaks are possible
==4740== 
==4740== For counts of detected and suppressed errors, rerun with: -v
==4740== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4773== Memcheck, a memory error detector
==4773== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4773== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4773== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==4773== 
==4773== 
==4773== HEAP SUMMARY:
==4773==     in use at exit: 0 bytes in 0 blocks
==4773==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==4773== 
==4773== All heap blocks were freed -- no leaks are possible
==4773== 
==4773== For counts of detected and suppressed errors, rerun with: -v
==4773== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4778== Memcheck, a memory error detector
==4778== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4778== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4778== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==4778== 
==4778== 
==4778== HEAP SUMMARY:
==4778==     in use at exit: 0 bytes in 0 blocks
==4778==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==4778== 
==4778== All heap blocks were freed -- no leaks are possible
==4778== 
==4778== For counts of detected and suppressed errors, rerun with: -v
==4778== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4785== Memcheck, a memory error detector
==4785== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4785== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4785== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==4785== 
==4785== 
==4785== HEAP SUMMARY:
==4785==     in use at exit: 0 bytes in 0 blocks
==4785==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==4785== 
==4785== All heap blocks were freed -- no leaks are possible
==4785== 
==4785== For counts of detected and suppressed errors, rerun with: -v
==4785== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4806== Memcheck, a memory error detector
==4806== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4806== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4806== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==4806== 
==4806== 
==4806== HEAP SUMMARY:
==4806==     in use at exit: 0 bytes in 0 blocks
==4806==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==4806== 
==4806== All heap blocks were freed -- no leaks are possible
==4806== 
==4806== For counts of detected and suppressed errors, rerun with: -v
==4806== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4812== Memcheck, a memory error detector
==4812== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4812== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4812== Command: ./test -r xml "List::reverse\ edge\ cases"
==4812== 
==4812== 
==4812== HEAP SUMMARY:
==4812==     in use at exit: 0 bytes in 0 blocks
==4812==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==4812== 
==4812== All heap blocks were freed -- no leaks are possible
==4812== 
==4812== For counts of detected and suppressed errors, rerun with: -v
==4812== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4818== Memcheck, a memory error detector
==4818== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4818== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4818== Command: ./test -r xml "List::insert\ contents\ #2"
==4818== 
==4818== 
==4818== HEAP SUMMARY:
==4818==     in use at exit: 0 bytes in 0 blocks
==4818==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==4818== 
==4818== All heap blocks were freed -- no leaks are possible
==4818== 
==4818== For counts of detected and suppressed errors, rerun with: -v
==4818== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
