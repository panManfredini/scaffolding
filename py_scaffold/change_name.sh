echo "changing package name to: $1"

sed  -i -r "s/name_package/$1/g" */*.py
sed  -i  "s/name_package/$1/g" *.py
mv name_package $1

