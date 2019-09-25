Pysseract
=========

A Python binding to [Tesseract API](https://github.com/tesseract-ocr/tesseract).

## Basic usage

```python
import pysseract
t = pysseract.Pysseract()
t.SetImageFromPath('tests/001-helloworld.png')
print(t.utf8Text)
```

## Build

Requirements

- gcc/clang with at least c++11 support
- libtesseract
- pybind11>=2.2

```bash
python3 setup.py build
```

# Build document

```
pip install sphinx sphinx_rtd_theme
python3 setup.py build_sphinx
```

You should find the generated html under `build/sphinx`.

## Contribute

Look at [Tesseract BaseAPI](https://github.com/tesseract-ocr/tesseract/blob/master/src/api/baseapi.cpp)
and import those functions of interest to
`pysseract.cpp`, declare in `pysseract.h` and export in `pymodule.cpp`.

## Reference

- [basic pybind11](https://pybind11.readthedocs.io/en/master/basics.html)
- [class based pybind11](https://pybind11.readthedocs.io/en/master/classes.html)
- [compiling with pybind11](https://pybind11.readthedocs.io/en/master/compiling.html)