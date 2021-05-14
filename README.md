<div align="center">
  <img src="docs/imgs/ztypes_preview0.png" width="400"/>
  <h1>z_</h1>

  Intuitive System Module with datatypes, memory tracker, and _more_.
</div>

## Contents
### Memory Tracker
A simple memory tracker for debug purpose. **NOT GC (Garbage Collector)**.

### Types

- [Primitive Types](./docs/in-depth/primitive_types.md)
- String
- StringLines
- StringLines Array
- [Dyanmic Array Types](./docs/in-depth/Arr.md)
  - Generic
  - Unknown Type
  - Unknown Object
- Fixed Length Arrays
  - Struct
  - Bare
- Vector Types
  - Struct
  - Array
- Matrices
- [Linked List](./docs/in-depth/Linklist.md)

_[See Overview](docs/overview.md)_

### PreP
For Metaprograming

### Multi Threading?
Whilst not yet avaliable. A multi thread implementation around pthread and OpenMP is on the to-do list.

## Getting Started

### Types
Inorder to integrated ztypes in your project
```sh
git clone --depth=1 git://github.com/zakarouf/typed.git
cp -R z_/src/types /to/your/project/source/types
```
Then include the header by
```c
#include "typed/ztypes.h"
```
Make sure to include the source files (*.c) from *typed* in your build script

**OR**

We can Create A library to link your program with
In that case, do
```sh
./make-lib
```
Will result a static library libzkztypes.a being made in the parent directory.

## Previews & Example

<div align="center">
  <img src="docs/imgs/example/example_2.png">
  <b> Getting Sum Of an Integer Array </b>
</div>

<div align="center">
  <img src="docs/imgs/example/example_1.png">
  <b> Array Init <b/>
</div>

<div align="center">
  <img src="docs/imgs/example/fnptr_arr.png">
  <b>Array of Functions</b>
</div>

---
## Ending Note
This library is not perfect and I know there are many others like it, but this one is mine.

---
