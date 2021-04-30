echo "changing project name to: $1"

sed  -i -r "s/dummy/$1/g" */*.cpp
sed  -i -r "s/dummy/$1/g" */*.h
sed  -i  "s/dummy/$1/g" *.txt

mv src/dummy.cpp         src/$1.cpp
mv include/dummy.h       include/$1.h 
mv test/test_dummy.cpp   test/test_$1.cpp

