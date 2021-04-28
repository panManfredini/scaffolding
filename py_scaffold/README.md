
# README

## Installation
Install this package in a new environment for developing and testing.

```bash
# create environment
python3 -m venv env

# activate
source env/bin/activate

# install dependencies
pip install -r requirements.txt

# deactivate 
deactivate
```

## Running 
```bash
```

## Testing
Using the standart `unittest` library with the `nose` helper for test running and discovery.
To run tests do:

```bash
nosetests
```

## (optional) Making Package
```bash
pip install .
```

## Helpers

```bash
# create requirement file
pip freeze > requirements.txt
```
