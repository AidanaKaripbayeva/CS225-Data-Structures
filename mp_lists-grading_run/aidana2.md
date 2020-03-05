


## Score: 39/121 (32.23%)


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
==39776== Memcheck, a memory error detector
==39776== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39776== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39776== Command: ./test -r xml "List::insertFront\ size"
==39776== 
==39776== 
==39776== HEAP SUMMARY:
==39776==     in use at exit: 0 bytes in 0 blocks
==39776==   total heap usage: 2,395 allocs, 2,395 frees, 281,176 bytes allocated
==39776== 
==39776== All heap blocks were freed -- no leaks are possible
==39776== 
==39776== For counts of detected and suppressed errors, rerun with: -v
==39776== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39779== Memcheck, a memory error detector
==39779== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39779== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39779== Command: ./test -r xml "List::insertBack\ size"
==39779== 
==39779== 
==39779== HEAP SUMMARY:
==39779==     in use at exit: 0 bytes in 0 blocks
==39779==   total heap usage: 2,395 allocs, 2,395 frees, 281,176 bytes allocated
==39779== 
==39779== All heap blocks were freed -- no leaks are possible
==39779== 
==39779== For counts of detected and suppressed errors, rerun with: -v
==39779== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39782== Memcheck, a memory error detector
==39782== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39782== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39782== Command: ./test -r xml "List::insert\ contents"
==39782== 
==39782== 
==39782== HEAP SUMMARY:
==39782==     in use at exit: 0 bytes in 0 blocks
==39782==   total heap usage: 2,391 allocs, 2,391 frees, 281,080 bytes allocated
==39782== 
==39782== All heap blocks were freed -- no leaks are possible
==39782== 
==39782== For counts of detected and suppressed errors, rerun with: -v
==39782== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39785== Memcheck, a memory error detector
==39785== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39785== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39785== Command: ./test -r xml "List::triplerotate\ basic"
==39785== 
==39785== 
==39785== HEAP SUMMARY:
==39785==     in use at exit: 0 bytes in 0 blocks
==39785==   total heap usage: 2,399 allocs, 2,399 frees, 281,368 bytes allocated
==39785== 
==39785== All heap blocks were freed -- no leaks are possible
==39785== 
==39785== For counts of detected and suppressed errors, rerun with: -v
==39785== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39788== Memcheck, a memory error detector
==39788== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39788== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39788== Command: ./test -r xml "List::triplerotate\ simple"
==39788== 
==39788== 
==39788== HEAP SUMMARY:
==39788==     in use at exit: 24 bytes in 1 blocks
==39788==   total heap usage: 2,405 allocs, 2,404 frees, 281,512 bytes allocated
==39788== 
==39788== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==39788==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==39788==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==39788==    by 0x42AE63: List<int>::insertBack(int const&) (List.hpp:93)
==39788==    by 0x431D50: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==39788==    by 0x474202: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==39788==    by 0x464956: Catch::TestCase::invoke() const (catch.hpp:10793)
==39788==    by 0x46488C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==39788==    by 0x460DE6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==39788==    by 0x45F3BE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==39788==    by 0x468756: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==39788==    by 0x4673F2: Catch::Session::runInternal() (catch.hpp:10149)
==39788==    by 0x4670BA: Catch::Session::run() (catch.hpp:10106)
==39788== 
==39788== LEAK SUMMARY:
==39788==    definitely lost: 24 bytes in 1 blocks
==39788==    indirectly lost: 0 bytes in 0 blocks
==39788==      possibly lost: 0 bytes in 0 blocks
==39788==    still reachable: 0 bytes in 0 blocks
==39788==         suppressed: 0 bytes in 0 blocks
==39788== 
==39788== For counts of detected and suppressed errors, rerun with: -v
==39788== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==39791== Memcheck, a memory error detector
==39791== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39791== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39791== Command: ./test -r xml "List::split\ simple"
==39791== 
==39791== 
==39791== HEAP SUMMARY:
==39791==     in use at exit: 0 bytes in 0 blocks
==39791==   total heap usage: 2,253 allocs, 2,253 frees, 276,648 bytes allocated
==39791== 
==39791== All heap blocks were freed -- no leaks are possible
==39791== 
==39791== For counts of detected and suppressed errors, rerun with: -v
==39791== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39796== Memcheck, a memory error detector
==39796== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39796== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39796== Command: ./test -r xml "List::_destroy\ empty\ list"
==39796== 
==39796== 
==39796== HEAP SUMMARY:
==39796==     in use at exit: 0 bytes in 0 blocks
==39796==   total heap usage: 2,403 allocs, 2,403 frees, 282,008 bytes allocated
==39796== 
==39796== All heap blocks were freed -- no leaks are possible
==39796== 
==39796== For counts of detected and suppressed errors, rerun with: -v
==39796== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39801== Memcheck, a memory error detector
==39801== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39801== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39801== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==39801== 
==39801== 
==39801== HEAP SUMMARY:
==39801==     in use at exit: 0 bytes in 0 blocks
==39801==   total heap usage: 2,407 allocs, 2,407 frees, 286,344 bytes allocated
==39801== 
==39801== All heap blocks were freed -- no leaks are possible
==39801== 
==39801== For counts of detected and suppressed errors, rerun with: -v
==39801== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39804== Memcheck, a memory error detector
==39804== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39804== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39804== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==39804== 
==39804== 
==39804== HEAP SUMMARY:
==39804==     in use at exit: 0 bytes in 0 blocks
==39804==   total heap usage: 2,407 allocs, 2,407 frees, 288,744 bytes allocated
==39804== 
==39804== All heap blocks were freed -- no leaks are possible
==39804== 
==39804== For counts of detected and suppressed errors, rerun with: -v
==39804== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39812== Memcheck, a memory error detector
==39812== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39812== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39812== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==39812== 
==39812== 
==39812== HEAP SUMMARY:
==39812==     in use at exit: 0 bytes in 0 blocks
==39812==   total heap usage: 2,407 allocs, 2,407 frees, 288,744 bytes allocated
==39812== 
==39812== All heap blocks were freed -- no leaks are possible
==39812== 
==39812== For counts of detected and suppressed errors, rerun with: -v
==39812== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39817== Memcheck, a memory error detector
==39817== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39817== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39817== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==39817== 
==39817== 
==39817== HEAP SUMMARY:
==39817==     in use at exit: 0 bytes in 0 blocks
==39817==   total heap usage: 2,407 allocs, 2,407 frees, 291,144 bytes allocated
==39817== 
==39817== All heap blocks were freed -- no leaks are possible
==39817== 
==39817== For counts of detected and suppressed errors, rerun with: -v
==39817== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39821== Memcheck, a memory error detector
==39821== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39821== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39821== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==39821== 
==39821== 
==39821== HEAP SUMMARY:
==39821==     in use at exit: 0 bytes in 0 blocks
==39821==   total heap usage: 2,407 allocs, 2,407 frees, 286,344 bytes allocated
==39821== 
==39821== All heap blocks were freed -- no leaks are possible
==39821== 
==39821== For counts of detected and suppressed errors, rerun with: -v
==39821== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39824== Memcheck, a memory error detector
==39824== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39824== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39824== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==39824== 
==39824== 
==39824== HEAP SUMMARY:
==39824==     in use at exit: 0 bytes in 0 blocks
==39824==   total heap usage: 2,407 allocs, 2,407 frees, 291,144 bytes allocated
==39824== 
==39824== All heap blocks were freed -- no leaks are possible
==39824== 
==39824== For counts of detected and suppressed errors, rerun with: -v
==39824== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39827== Memcheck, a memory error detector
==39827== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39827== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39827== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==39827== 
==39827== 
==39827== HEAP SUMMARY:
==39827==     in use at exit: 0 bytes in 0 blocks
==39827==   total heap usage: 2,400 allocs, 2,400 frees, 283,776 bytes allocated
==39827== 
==39827== All heap blocks were freed -- no leaks are possible
==39827== 
==39827== For counts of detected and suppressed errors, rerun with: -v
==39827== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39830== Memcheck, a memory error detector
==39830== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39830== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39830== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==39830== 
==39830== 
==39830== HEAP SUMMARY:
==39830==     in use at exit: 0 bytes in 0 blocks
==39830==   total heap usage: 2,400 allocs, 2,400 frees, 286,176 bytes allocated
==39830== 
==39830== All heap blocks were freed -- no leaks are possible
==39830== 
==39830== For counts of detected and suppressed errors, rerun with: -v
==39830== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39834== Memcheck, a memory error detector
==39834== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39834== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39834== Command: ./test -r xml "List::reverse\ edge\ cases"
==39834== 
==39834== 
==39834== HEAP SUMMARY:
==39834==     in use at exit: 0 bytes in 0 blocks
==39834==   total heap usage: 2,401 allocs, 2,401 frees, 281,456 bytes allocated
==39834== 
==39834== All heap blocks were freed -- no leaks are possible
==39834== 
==39834== For counts of detected and suppressed errors, rerun with: -v
==39834== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==39840== Memcheck, a memory error detector
==39840== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==39840== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==39840== Command: ./test -r xml "List::insert\ contents\ #2"
==39840== 
==39840== 
==39840== HEAP SUMMARY:
==39840==     in use at exit: 0 bytes in 0 blocks
==39840==   total heap usage: 2,406 allocs, 2,406 frees, 281,576 bytes allocated
==39840== 
==39840== All heap blocks were freed -- no leaks are possible
==39840== 
==39840== For counts of detected and suppressed errors, rerun with: -v
==39840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/2] - List::triplerotate hard

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate hard" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1_extra.cpp" line="50">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="62">
        <Original>
          "&lt; 2 3 1 5 6 4 7 8 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 2 3 1 5 6 4 7 8 >"
==
"&lt; 2 3 1 5 6 7 4 8 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - List::triplerotate image

- **Points**: 0 / 10


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---

This report was generated for **aidana2** using **335009f2b744d12f0f0db4bd99a2fb82a5cf17af** (from **March 3rd 2020, 11:59:59 pm**)
