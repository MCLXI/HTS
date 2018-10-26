from distutils.core import setup
setup(name='HTSspendfrom',
      version='1.0',
      description='Command-line utility for HTS "coin control"',
      author='Gavin Andresen',
      author_email='gavin@HTSfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
