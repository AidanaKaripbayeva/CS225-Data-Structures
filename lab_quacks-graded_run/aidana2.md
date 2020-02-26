


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==34691== Memcheck, a memory error detector
==34691== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34691== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==34691== Command: ./test -r xml "sumDigits"
==34691== 
==34691== 
==34691== HEAP SUMMARY:
==34691==     in use at exit: 0 bytes in 0 blocks
==34691==   total heap usage: 1,689 allocs, 1,689 frees, 218,344 bytes allocated
==34691== 
==34691== All heap blocks were freed -- no leaks are possible
==34691== 
==34691== For counts of detected and suppressed errors, rerun with: -v
==34691== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==34697== Memcheck, a memory error detector
==34697== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34697== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==34697== Command: ./test -r xml "triangle"
==34697== 
==34697== 
==34697== HEAP SUMMARY:
==34697==     in use at exit: 0 bytes in 0 blocks
==34697==   total heap usage: 1,675 allocs, 1,675 frees, 217,896 bytes allocated
==34697== 
==34697== All heap blocks were freed -- no leaks are possible
==34697== 
==34697== For counts of detected and suppressed errors, rerun with: -v
==34697== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==34700== Memcheck, a memory error detector
==34700== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34700== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==34700== Command: ./test -r xml "sum"
==34700== 
==34700== 
==34700== HEAP SUMMARY:
==34700==     in use at exit: 0 bytes in 0 blocks
==34700==   total heap usage: 1,772 allocs, 1,772 frees, 304,040 bytes allocated
==34700== 
==34700== All heap blocks were freed -- no leaks are possible
==34700== 
==34700== For counts of detected and suppressed errors, rerun with: -v
==34700== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Did not globally/statically declare stack" filename="tests/basic.cpp" line="51">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Sum is correct" filename="tests/basic.cpp" line="61">
        <Section name="Did not make any additional stack objects at functionor function static scope" filename="tests/basic.cpp" line="64">
          <OverallResults successes="1" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="68">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="79">
        <Section name="Did not make any additional stack objects at functionor function static scope" filename="tests/basic.cpp" line="85">
          <OverallResults successes="1" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="89">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="7" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="7" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==34703== Memcheck, a memory error detector
==34703== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34703== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==34703== Command: ./test -r xml "isBalanced"
==34703== 
==34703== 
==34703== HEAP SUMMARY:
==34703==     in use at exit: 0 bytes in 0 blocks
==34703==   total heap usage: 1,752 allocs, 1,752 frees, 314,792 bytes allocated
==34703== 
==34703== All heap blocks were freed -- no leaks are possible
==34703== 
==34703== For counts of detected and suppressed errors, rerun with: -v
==34703== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="97">
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="99">
        <Section name="Did not globally/statically declare stack or queue" filename="tests/basic.cpp" line="101">
          <OverallResults successes="2" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="4" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="balanced" filename="tests/basic.cpp" line="117">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="133">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="16" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="16" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==34711== Memcheck, a memory error detector
==34711== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34711== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==34711== Command: ./test -r xml "scramble\ 17"
==34711== 
==34711== 
==34711== HEAP SUMMARY:
==34711==     in use at exit: 0 bytes in 0 blocks
==34711==   total heap usage: 1,685 allocs, 1,685 frees, 226,712 bytes allocated
==34711== 
==34711== All heap blocks were freed -- no leaks are possible
==34711== 
==34711== For counts of detected and suppressed errors, rerun with: -v
==34711== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="151">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==34729== Memcheck, a memory error detector
==34729== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34729== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==34729== Command: ./test -r xml "scramble\ 9"
==34729== 
==34729== 
==34729== HEAP SUMMARY:
==34729==     in use at exit: 0 bytes in 0 blocks
==34729==   total heap usage: 1,680 allocs, 1,680 frees, 226,040 bytes allocated
==34729== 
==34729== All heap blocks were freed -- no leaks are possible
==34729== 
==34729== For counts of detected and suppressed errors, rerun with: -v
==34729== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="179">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aidana2** using **f8a1f9ace41ba3ad91a3c0543b5384255b359582** (from **February 23rd 2020, 11:59:59 pm**)
