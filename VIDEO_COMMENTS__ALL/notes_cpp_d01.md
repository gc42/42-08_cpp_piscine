# D01
## NEW and DELETE, l'allocation dynamique
`new` et `delete` remplacent `malloc` et `free`.

###Trois facons de faire:

1. En allocation **statique**. Creation de l'instance sur la pile (synonyme de stack), l'instance est tuee lors de la fin du bloc, lorsqu'il sort de la stack. Exemple:

    ```cpp
    Student	bob = Student("gcaron");
    ```

2. En Allocation **dynamique**. Creation d'un pointeur sur une nouvelle instance en utilisant `new` (utilise malloc, mais on ne s'en preoccupe pas) puis destruction de l'instance avec `delete` lorsque le programmeur le demande (un peu comme `free`, mais la encore on ne s'en preoccupe pas).
Renvoit un pointeur sur l'instance obtenue. Exemple:
    ```cpp
    Student*		jim = new Student("cgaron");
    ```

    *Voir cpp_new_delete.cpp*

3. En allocation de tableau. Creation d'un pointeur sur un tableau d'instances. Crees en une fois, les elements sont contigus en memoire. Renvoit un pointeur sur le tableau. Exemple:

    ```cpp
    Student*   students = new Student[42];
    delete [] students;
    ```
    
    *Voir cpp_new_delete_tableau.cpp*
    
#Ressources

[wikibooks][] Pour une explication des concepts en francais.

[cppReference][] Ressources en francais.







Tous les liens sont caches ici.

[wikibooks]:    https://fr.wikibooks.org/wiki/Programmation_C%2B%2B/ "Wikibooks C++"
[cppReference]: http://fr.cppreference.com/w/                     "cppReference en francais"