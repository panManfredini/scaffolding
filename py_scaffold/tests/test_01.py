from unittest import TestCase
from name_package.lib import sum_of_int

class TestSum(TestCase):
    
    def test_is_sum(self):
        t = sum_of_int(10,11)
        self.assertEqual(21,t)
    