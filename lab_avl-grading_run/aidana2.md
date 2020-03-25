


## Score: 0/50 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/10] - test_find

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <Expression success="false" type="REQUIRE" filename="tests/tests.cpp" line="37">
        <Original>
          tree.find("C").compare("C++") == 0
        </Original>
        <Expanded>
          -1 == 0
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - test_insert_small

- **Points**: 0 / 5


```
Original: solnFuncCalls == funcCalls
Expanded: { "rotateLeft" } == {  }
```


### ✗ - [0/10] - test_insert_find

- **Points**: 0 / 10


```
Original: solnFuncCalls == funcCalls
Expanded: { "rotateLeftRight", "rotateLeft", "rotateRight" }
==
{  }
```


### ✗ - [0/10] - test_insert_big

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <Expression success="false" type="REQUIRE" filename="tests/tests.cpp" line="25">
        <Original>
          solnFuncCalls == funcCalls
        </Original>
        <Expanded>
          { "rotateRight", "rotateRightLeft", "rotateRight", "rotateLeft", "rotateLeft", "rotateLeft", "rotateLeft", "rotateLeft" }
==
{  }
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - test_remove_small

- **Points**: 0 / 5


```
Original: solnFuncCalls == funcCalls
Expanded: { "rotateLeftRight", "rotateLeft", "rotateRight", "rotateLeft" }
==
{  }
```


### ✗ - [0/10] - test_remove_big

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <Expression success="false" type="REQUIRE" filename="tests/tests.cpp" line="25">
        <Original>
          solnFuncCalls == funcCalls
        </Original>
        <Expanded>
          { "rotateRight", "rotateRight", "rotateRight", "rotateRight", "rotateRightLeft", "rotateRight", "rotateLeft", "rotateLeft", "rotateLeftRight", "rotateLeft", "rotateRight", "rotateRight", "rotateLeft" }
==
{  }
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **aidana2** using **335009f2b744d12f0f0db4bd99a2fb82a5cf17af** (from **March 24th 2020, 11:59:59 pm**)
