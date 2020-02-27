


## Score: 3/52 (5.77%)


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


### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==17131== Memcheck, a memory error detector
==17131== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17131== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17131== Command: ./test -r xml "List::insertFront\ size"
==17131== 
==17131== Conditional jump or move depends on uninitialised value(s)
==17131==    at 0x42831C: List<int>::insertFront(int const&) (List.hpp:55)
==17131==    by 0x421FF7: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==17131==    by 0x461F62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==17131==    by 0x4526B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==17131==    by 0x4525EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==17131==    by 0x44EB46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==17131==    by 0x44D11E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==17131==    by 0x4564B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==17131==    by 0x455152: Catch::Session::runInternal() (catch.hpp:10149)
==17131==    by 0x454E1A: Catch::Session::run() (catch.hpp:10106)
==17131==    by 0x454D99: Catch::Session::run(int, char**) (catch.hpp:10074)
==17131==    by 0x481E11: main (catch.hpp:13613)
==17131== 
==17131== Conditional jump or move depends on uninitialised value(s)
==17131==    at 0x428356: List<int>::insertFront(int const&) (List.hpp:58)
==17131==    by 0x421FF7: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==17131==    by 0x461F62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==17131==    by 0x4526B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==17131==    by 0x4525EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==17131==    by 0x44EB46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==17131==    by 0x44D11E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==17131==    by 0x4564B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==17131==    by 0x455152: Catch::Session::runInternal() (catch.hpp:10149)
==17131==    by 0x454E1A: Catch::Session::run() (catch.hpp:10106)
==17131==    by 0x454D99: Catch::Session::run(int, char**) (catch.hpp:10074)
==17131==    by 0x481E11: main (catch.hpp:13613)
==17131== 
==17131== Conditional jump or move depends on uninitialised value(s)
==17131==    at 0x452760: Catch::RunContext::handleExpr(Catch::AssertionInfo const&, Catch::ITransientExpression const&, Catch::AssertionReaction&) (catch.hpp:9683)
==17131==    by 0x43063B: Catch::AssertionHandler::handleExpr(Catch::ITransientExpression const&) (catch.hpp:5467)
==17131==    by 0x422154: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:25)
==17131==    by 0x461F62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==17131==    by 0x4526B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==17131==    by 0x4525EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==17131==    by 0x44EB46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==17131==    by 0x44D11E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==17131==    by 0x4564B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==17131==    by 0x455152: Catch::Session::runInternal() (catch.hpp:10149)
==17131==    by 0x454E1A: Catch::Session::run() (catch.hpp:10106)
==17131==    by 0x454D99: Catch::Session::run(int, char**) (catch.hpp:10074)
==17131== 
==17131== 
==17131== HEAP SUMMARY:
==17131==     in use at exit: 240 bytes in 10 blocks
==17131==   total heap usage: 2,132 allocs, 2,122 frees, 252,400 bytes allocated
==17131== 
==17131== 240 bytes in 10 blocks are definitely lost in loss record 1 of 1
==17131==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==17131==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==17131==    by 0x4282D3: List<int>::insertFront(int const&) (List.hpp:51)
==17131==    by 0x421FF7: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==17131==    by 0x461F62: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==17131==    by 0x4526B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==17131==    by 0x4525EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==17131==    by 0x44EB46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==17131==    by 0x44D11E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==17131==    by 0x4564B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==17131==    by 0x455152: Catch::Session::runInternal() (catch.hpp:10149)
==17131==    by 0x454E1A: Catch::Session::run() (catch.hpp:10106)
==17131== 
==17131== LEAK SUMMARY:
==17131==    definitely lost: 240 bytes in 10 blocks
==17131==    indirectly lost: 0 bytes in 0 blocks
==17131==      possibly lost: 0 bytes in 0 blocks
==17131==    still reachable: 0 bytes in 0 blocks
==17131==         suppressed: 0 bytes in 0 blocks
==17131== 
==17131== For counts of detected and suppressed errors, rerun with: -v
==17131== Use --track-origins=yes to see where uninitialised values come from
==17131== ERROR SUMMARY: 13 errors from 4 contexts (suppressed: 0 from 0)

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


### ✗ - [0/2] - List::insertBack size

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="33">
        <Original>
          10 == list.size()
        </Original>
        <Expanded>
          10 == 0
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="49">
        <Original>
          "&lt; 1 2 3 3 2 1 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 2 3 3 2 1 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::triplerotate basic

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate basic" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="52">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="64">
        <Original>
          "&lt; 1 2 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 2 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - List::triplerotate simple

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate simple" tags="[part=1][valgrind][weight=10]" filename="tests/tests_part1.cpp" line="67">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="79">
        <Original>
          "&lt; 2 3 1 5 6 4 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 2 3 1 5 6 4 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="82">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="82">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split images

- **Points**: 0 / 5


```
Original: out1 == expected_1
Expanded: PNG(w=400, h=240, hash=0)
==
PNG(w=400, h=240, hash=7f399ca10baeec7f)
```


### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==17145== Memcheck, a memory error detector
==17145== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17145== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17145== Command: ./test -r xml "List::_destroy\ empty\ list"
==17145== 
==17145== 
==17145== HEAP SUMMARY:
==17145==     in use at exit: 0 bytes in 0 blocks
==17145==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==17145== 
==17145== All heap blocks were freed -- no leaks are possible
==17145== 
==17145== For counts of detected and suppressed errors, rerun with: -v
==17145== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/1] - List::begin() returns an iterator to the front of the list

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="170">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="170">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="178">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="178">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="187">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="187">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="197">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="197">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="207">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="207">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="219">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="219">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="232">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="246">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="252">
        <Original>
          (bool)(list.begin() != list.end())
        </Original>
        <Expanded>
          false
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="27">
        <Original>
          "&lt; 1 2 3 1 2 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 2 3 1 2 3 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
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

This report was generated for **aidana2** using **401fca5eb1b190fd412869012e34b2cd6e44f511** (from **February 26th 2020, 11:59:59 pm**)
