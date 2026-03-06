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
### Output
```
=== main.cpp ===
[external] externalCounter = 1
[external] externalCounter = 2
[main] externalCounter = 2
[internal static] internalCounter = 1
[internal anon] anonCounter = 1
```
