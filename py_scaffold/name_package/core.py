from .lib import validate

def sum_of_int(a:int,b:int):
    ''' Returns the sum of vals 
    '''
    validate(a)
    validate(b)
    return a+b

