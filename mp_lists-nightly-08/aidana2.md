


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
==14461== Memcheck, a memory error detector
==14461== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14461== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14461== Command: ./test -r xml "List::insertFront\ size"
==14461== 
==14461== 
==14461== HEAP SUMMARY:
==14461==     in use at exit: 0 bytes in 0 blocks
==14461==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==14461== 
==14461== All heap blocks were freed -- no leaks are possible
==14461== 
==14461== For counts of detected and suppressed errors, rerun with: -v
==14461== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14464== Memcheck, a memory error detector
==14464== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14464== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14464== Command: ./test -r xml "List::insertBack\ size"
==14464== 
==14464== 
==14464== HEAP SUMMARY:
==14464==     in use at exit: 0 bytes in 0 blocks
==14464==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==14464== 
==14464== All heap blocks were freed -- no leaks are possible
==14464== 
==14464== For counts of detected and suppressed errors, rerun with: -v
==14464== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14467== Memcheck, a memory error detector
==14467== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14467== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14467== Command: ./test -r xml "List::insert\ contents"
==14467== 
==14467== 
==14467== HEAP SUMMARY:
==14467==     in use at exit: 0 bytes in 0 blocks
==14467==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==14467== 
==14467== All heap blocks were freed -- no leaks are possible
==14467== 
==14467== For counts of detected and suppressed errors, rerun with: -v
==14467== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14471== Memcheck, a memory error detector
==14471== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14471== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14471== Command: ./test -r xml "List::triplerotate\ basic"
==14471== 
==14471== 
==14471== HEAP SUMMARY:
==14471==     in use at exit: 0 bytes in 0 blocks
==14471==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==14471== 
==14471== All heap blocks were freed -- no leaks are possible
==14471== 
==14471== For counts of detected and suppressed errors, rerun with: -v
==14471== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14474== Memcheck, a memory error detector
==14474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14474== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14474== Command: ./test -r xml "List::triplerotate\ simple"
==14474== 
==14474== 
==14474== HEAP SUMMARY:
==14474==     in use at exit: 24 bytes in 1 blocks
==14474==   total heap usage: 2,357 allocs, 2,356 frees, 268,608 bytes allocated
==14474== 
==14474== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==14474==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==14474==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==14474==    by 0x42AC33: List<int>::insertBack(int const&) (List.hpp:93)
==14474==    by 0x431B20: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==14474==    by 0x472B62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==14474==    by 0x4632B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==14474==    by 0x4631EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==14474==    by 0x45F746: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==14474==    by 0x45DD1E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==14474==    by 0x4670B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==14474==    by 0x465D52: Catch::Session::runInternal() (catch.hpp:10149)
==14474==    by 0x465A1A: Catch::Session::run() (catch.hpp:10106)
==14474== 
==14474== LEAK SUMMARY:
==14474==    definitely lost: 24 bytes in 1 blocks
==14474==    indirectly lost: 0 bytes in 0 blocks
==14474==      possibly lost: 0 bytes in 0 blocks
==14474==    still reachable: 0 bytes in 0 blocks
==14474==         suppressed: 0 bytes in 0 blocks
==14474== 
==14474== For counts of detected and suppressed errors, rerun with: -v
==14474== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==14477== Memcheck, a memory error detector
==14477== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14477== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14477== Command: ./test -r xml "List::split\ simple"
==14477== 
==14477== 
==14477== HEAP SUMMARY:
==14477==     in use at exit: 0 bytes in 0 blocks
==14477==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==14477== 
==14477== All heap blocks were freed -- no leaks are possible
==14477== 
==14477== For counts of detected and suppressed errors, rerun with: -v
==14477== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14481== Memcheck, a memory error detector
==14481== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14481== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14481== Command: ./test -r xml "List::_destroy\ empty\ list"
==14481== 
==14481== 
==14481== HEAP SUMMARY:
==14481==     in use at exit: 0 bytes in 0 blocks
==14481==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==14481== 
==14481== All heap blocks were freed -- no leaks are possible
==14481== 
==14481== For counts of detected and suppressed errors, rerun with: -v
==14481== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14486== Memcheck, a memory error detector
==14486== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14486== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14486== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==14486== 
==14486== 
==14486== HEAP SUMMARY:
==14486==     in use at exit: 0 bytes in 0 blocks
==14486==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==14486== 
==14486== All heap blocks were freed -- no leaks are possible
==14486== 
==14486== For counts of detected and suppressed errors, rerun with: -v
==14486== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14490== Memcheck, a memory error detector
==14490== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14490== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14490== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==14490== 
==14490== 
==14490== HEAP SUMMARY:
==14490==     in use at exit: 0 bytes in 0 blocks
==14490==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==14490== 
==14490== All heap blocks were freed -- no leaks are possible
==14490== 
==14490== For counts of detected and suppressed errors, rerun with: -v
==14490== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14498== Memcheck, a memory error detector
==14498== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14498== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14498== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==14498== 
==14498== 
==14498== HEAP SUMMARY:
==14498==     in use at exit: 0 bytes in 0 blocks
==14498==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==14498== 
==14498== All heap blocks were freed -- no leaks are possible
==14498== 
==14498== For counts of detected and suppressed errors, rerun with: -v
==14498== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14501== Memcheck, a memory error detector
==14501== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14501== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14501== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14501== 
==14501== 
==14501== HEAP SUMMARY:
==14501==     in use at exit: 0 bytes in 0 blocks
==14501==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==14501== 
==14501== All heap blocks were freed -- no leaks are possible
==14501== 
==14501== For counts of detected and suppressed errors, rerun with: -v
==14501== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14504== Memcheck, a memory error detector
==14504== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14504== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14504== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==14504== 
==14504== 
==14504== HEAP SUMMARY:
==14504==     in use at exit: 0 bytes in 0 blocks
==14504==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==14504== 
==14504== All heap blocks were freed -- no leaks are possible
==14504== 
==14504== For counts of detected and suppressed errors, rerun with: -v
==14504== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14507== Memcheck, a memory error detector
==14507== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14507== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14507== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14507== 
==14507== 
==14507== HEAP SUMMARY:
==14507==     in use at exit: 0 bytes in 0 blocks
==14507==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==14507== 
==14507== All heap blocks were freed -- no leaks are possible
==14507== 
==14507== For counts of detected and suppressed errors, rerun with: -v
==14507== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14510== Memcheck, a memory error detector
==14510== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14510== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14510== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==14510== 
==14510== 
==14510== HEAP SUMMARY:
==14510==     in use at exit: 0 bytes in 0 blocks
==14510==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==14510== 
==14510== All heap blocks were freed -- no leaks are possible
==14510== 
==14510== For counts of detected and suppressed errors, rerun with: -v
==14510== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14513== Memcheck, a memory error detector
==14513== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14513== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14513== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==14513== 
==14513== 
==14513== HEAP SUMMARY:
==14513==     in use at exit: 0 bytes in 0 blocks
==14513==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==14513== 
==14513== All heap blocks were freed -- no leaks are possible
==14513== 
==14513== For counts of detected and suppressed errors, rerun with: -v
==14513== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14518== Memcheck, a memory error detector
==14518== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14518== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14518== Command: ./test -r xml "List::reverse\ edge\ cases"
==14518== 
==14518== 
==14518== HEAP SUMMARY:
==14518==     in use at exit: 0 bytes in 0 blocks
==14518==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==14518== 
==14518== All heap blocks were freed -- no leaks are possible
==14518== 
==14518== For counts of detected and suppressed errors, rerun with: -v
==14518== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14524== Memcheck, a memory error detector
==14524== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14524== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14524== Command: ./test -r xml "List::insert\ contents\ #2"
==14524== 
==14524== 
==14524== HEAP SUMMARY:
==14524==     in use at exit: 0 bytes in 0 blocks
==14524==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==14524== 
==14524== All heap blocks were freed -- no leaks are possible
==14524== 
==14524== For counts of detected and suppressed errors, rerun with: -v
==14524== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **aidana2** using **335009f2b744d12f0f0db4bd99a2fb82a5cf17af** (from **March 2nd 2020, 11:59:59 pm**)
