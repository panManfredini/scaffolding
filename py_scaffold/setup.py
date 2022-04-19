from setuptools import setup, find_packages

# change __name_package__
setup(name='name_package',
      version='0.1',
      description=' ',
      url='',
      author='Ale',
      author_email='',
      license='MIT',
      packages=find_packages(),
      test_suite='nose.collector',
      tests_require=['nose'],
      #install_requires=[
      #    '_requred_module_',
      #],
      #scripts=[
      #  'bin/_script_name_'
      #],
      zip_safe=False)

