## External & Internal Linkages
### Direct Call internal linkages in `utils.cpp` from `main.cpp` is not possible
```
incrementInternal();
incrementAnon();
```

### Call it over an external linkage is possible
```
// Wrapper function to show internal behavior from outside
void incrementInternalVariables() {
    incrementInternal();
    incrementAnon();
}
```
