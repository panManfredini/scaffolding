


## Build

```bash
cmake -B build 
cmake --build build
```

## Run
```bash
./build/bin/main
```


## Test
Testing is done using GoogleTest framework, and `ctest` as test runner.

```bash
cd build

# run all tests
ctest

# or run individual tests suites
./bin/test_xxx
```