# CPP04

C++ Module 04: subtype polymorphism, abstract classes, interfaces, and deep copy semantics — from Animal/Cat/Dog with Brain to the AMateria/ICharacter materias system.

## Project Overview
- What it does: demonstrates runtime polymorphism, virtual destructors, pure virtual methods, and proper deep copy of heap-allocated members.
- Core themes: virtual dispatch, abstract base classes, interface segregation, ownership semantics.

## Architecture & Design
- **ex00**: `Animal` base with `virtual makeSound()`; `Dog`/`Cat` override; `WrongAnimal`/`WrongCat` demonstrate non-virtual pitfall.
- **ex01**: adds `Brain` class (array of 100 `std::string` ideas); `Dog` and `Cat` each own a `Brain*` — deep copy required in copy constructor and assignment operator.
- **ex02**: `Animal` becomes abstract (`makeSound() = 0`) — cannot instantiate base directly.
- **ex03 (Materia system)**: full interface hierarchy:
  - `AMateria`: abstract base with `type`, `clone()`, `use(ICharacter&)`.
  - `Ice`/`Cure`: concrete materias.
  - `ICharacter`: interface with `equip()`, `unequip()`, `use()`.
  - `Character`: 4-slot inventory, deep copy, floor tracking for unequipped materias.
  - `IMateriaSource`/`MateriaSource`: factory with `learnMateria()`/`createMateria()` (up to 4 templates).

## Core Concepts (with code)
- Abstract materia with clone pattern:
```cpp
// AMateria.hpp
class AMateria {
protected:
    std::string type;
public:
    virtual AMateria* clone() const = 0;  // pure virtual
    virtual void use(ICharacter& target);
};
```
- Deep copy with owned Brain:
```cpp
// Dog.cpp — copy constructor
Dog::Dog(const Dog& other) : Animal(other) {
    brain = new Brain(*other.brain);  // deep copy
}
```

## Code Walkthrough
1) ex00: create Animal array, fill with Dog/Cat, call `makeSound()` → polymorphic dispatch. WrongAnimal shows slicing without `virtual`.
2) ex01: Dog/Cat own Brain*; copy must `new Brain(...)` not share pointer. Destructor `delete brain`.
3) ex02: `Animal` is now abstract; `Animal a;` won't compile.
4) ex03: MateriaSource learns templates; Character equips/uses materias; unequip drops to floor (tracked to avoid leaks).

## Installation & Setup
- `make` per exercise (C++98).

## Technical Deep Dive
- Virtual destructor in `Animal` ensures `delete basePtr` calls derived destructor (prevents Brain leak).
- ex03 Character inventory uses 4 `AMateria*` slots; `equip()` finds first NULL slot.
- `clone()` returns a heap-allocated copy — caller owns the result.
- Floor tracking in Character prevents memory leaks from `unequip()`.

## Improvements & Future Work
- Add a garbage collector for unequipped materias.
- Add more materia types to exercise the factory pattern.

## Author
Oualid Obbad (@oualidobbad)